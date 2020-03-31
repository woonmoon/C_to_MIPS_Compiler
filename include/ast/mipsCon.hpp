#ifndef mipsContext_hpp
#define mipsContext_hpp
#include <vector>
#include <string>
#include <map>

struct Instruction;
typedef const Instruction* InstructionPtr;
struct stackFrame;
typedef const stackFrame* stackFramePtr;
struct registerSet;
typedef const registerSet* registerSetPtr;


struct mipsCon{

    struct varInfo{
        int size;
        uint32_t offset;
        std::vector<int> arraySize;
    };

    struct funcInfo{
        int returnSize;
        uint32_t offset;
    };

    struct{
        std::string id;
        int size;
        std::vector<int> arraySize;
    }dummyDec;

    struct stackFrame{
        struct funcDecStruct { bool functionDef; bool initialize; std::string funcID; } funcDec;
        struct funcContentStruct { bool functionPatty; std::string funcID; } funcContent; //get it? because it's the MEAT of the function??
        struct varDecStruct { bool variableDec; std::string varID; int destReg; } varDec; 
        struct assignStruct { bool isAssign; std::string assID; bool toArray; int addressReg; } assign;
        struct conditialStruct { bool isCond; bool conditionalPatty; } conditional;
        struct statementStruct { bool compound=true; std::string continueFlag; std::string breakFlag; int offset=0; } statement;
        struct enumStruct { int lastEl=-1; } enumerator;
        struct switchStruct { std::map<std::string, int> labels; std::string def; } switchy;
        std::map<std::string, varInfo> varBinding;
        int spOffset;
    };

    std::vector<stackFrame> stack;
    std::map<std::string, funcInfo> funcBinding;
    std::map<std::string, varInfo> gloVar;

    bool isParam = 0;
    bool firstTime;
    bool extraCheck;
    bool iJustWantTheNameBro;
    bool inCall;
    bool isIdentifierCall; //we can remove
    bool isConstantCall; //we can remove
    bool isReturn;
    bool isGlobalFunc;
    int paramReg;

    std::map<std::string, varInfo>& varBinding() { return stack.back().varBinding; }
    stackFrame::funcDecStruct& funcDec() { return stack.back().funcDec; }
    stackFrame::funcContentStruct& funcContent() { return stack.back().funcContent; }
    stackFrame::varDecStruct& varDec() { return stack.back().varDec; }
    stackFrame::assignStruct& assign() { return stack.back().assign; }
    stackFrame::conditialStruct& conditional() { return stack.back().conditional; }
    stackFrame::statementStruct& statement() { return stack.back().statement; }
    stackFrame::enumStruct& enumerator() { return stack.back().enumerator; }
    stackFrame::switchStruct& switchy() { return stack.back().switchy; }

    struct registers{
        std::vector<bool> set={ 1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1 };
        void tickReg(int i) { set[i]=1; }
        void untickReg(int i) { set[i]=0; }
        void untickAll(){ set={ 1,1,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1 }; };
        int freeRegister() {
            for(int i=0; i<32; i++) { if(set[i]==false) { tickReg(i); return i; } }
            return -1;
        }
    } registerSet;

    std::string reg(int i) { 
        registerSet.set.at(i)=i; 
        registerSet.tickReg(i);
        return "$"+std::to_string(i);
    }
    
    std::string makeALabel(const std::string &str) {
        static int id = 0;
        return "_" + str + "_" + std::to_string(id++);
    }

    bool inFrame(std::string _label) {
        std::map<std::string, varInfo>::iterator it=varBinding().find(_label); 
        if(it!=varBinding().end()) { return true; }
        return false;
    }

    bool isGlobal(std::string _label) {
        std::map<std::string, varInfo>::iterator it=gloVar.find(_label); 
        if(it!=gloVar.end()) { return true; }
        return false;
    }

    void flushReg(const std::vector<int>& storingReg, std::ostream& os) {
        //std::cout << "***flushReg***" << std::endl;
        for(unsigned int i=0; i<storingReg.size(); i++) {
            stackSize+=4;
            os << "addi " << reg(29) << ", " << reg(29) << ", -4";
            os << std::endl;
            os << "sw " << reg(storingReg[i]) << ", 0(" << reg(29) << ")";
            os << std::endl;
        }
    }

    void recoverReg(const std::vector<int>& loadingReg, std::ostream& os) {
        //std::cout << "***recoverReg***" << std::endl;
        for(unsigned int i=0; i<loadingReg.size(); i++) {
            registerSet.untickReg(loadingReg[i]); //THIS WAS ADDED //////////////////////////////////////////////////////////////////////////////////////
            os << "lw " << reg(loadingReg[i]) << ", 0(" << reg(29) << ")";
            os << std::endl;
            os << "addi " << reg(29) << ", " << reg(29) << ", 4";
            os << std::endl;
            stackSize-=4;
        }
    }

    void writeToStack(int storeReg, int offset, std::ostream& os) {
        //std::cout << "***writeToStack***" << std::endl;
        os << "sw " << reg(storeReg) << ", " << stackSize-offset << "("<< reg(29) << ")";
        os << std::endl;
    }

    void readFromStack(int readReg, std::ostream& os) {
        os << "lw " << reg(readReg) << ", (" << reg(29) << ")";
        os << std::endl;
    }

    void returnFunc(std::ostream& os) {
        os << "lw " << reg(31) << ", " << stackSize-4 << "(" << reg(29) << ")";
        os << std::endl;
        os << "lw " << reg(30) << ", " << stackSize-8 << "(" << reg(29) << ")";
        os << std::endl;
        os << "addiu " << reg(29) << ", " << reg(29) << ", " << stackSize;
        os << std::endl;
        os << "jr " << reg(31);
        os << std::endl;
        os << "nop";
        os << std::endl;
    }

    void enterNewFunc(std::ostream& os) {
        stackSize+=stack.back().spOffset;
        stackFrame newFrame={0}; //spOffset of newFrame=0
        stack.push_back(newFrame);
        flushReg({31, 30}, os); //SP and RA
    } //exclusively for new functions

    void exitFunc(std::ostream& os) {
        returnFunc(os);
      //  stack.pop_back(); //added this in
      //  stackSize = 0;
    }

    void enterScope() {
        if(stack.size()>0) {
            stackSize+=stack.back().spOffset;
            stack.push_back(stack.back());
            stack.back().spOffset=stackSize; //not global
            //std::cout << "have entered scope where stackSize is " << stackSize << std::endl;
        }else if(stack.size()==0) {
            stack.push_back({});
        } //global
    } //exclusively for NOT functions (conditionals, loops, etc)

    void exitScope(std::ostream& os) {
        int backspace=stackSize-stack.back().spOffset;
        stackSize=stack.back().spOffset;
      //  os << "addi " << reg(29) << ", " << reg(29) << ", " << backspace; //removed this
        os << std::endl;
        stack.pop_back();
    } //exclusively for NOT functions (conditionals, loops, etc)

    int stackSize=0;    
};

#endif