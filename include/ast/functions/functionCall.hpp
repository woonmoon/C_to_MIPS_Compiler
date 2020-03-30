#ifndef functionCall_hpp
#define functionCall_hpp

class functionCall;
typedef const functionCall* functionCallPtr;

class functionCall: public Expression {
public:
    functionCall(NodePtr funcName, ListPtr argList, bool emptyParams) { branches.push_back(funcName); branches.push_back(argList); empty = emptyParams;}

    void pythonGen(std::ostream& os) const {}

    void print(std::ostream& dst, pycon& con, int level) const { 
        branches[0]->print(dst, con, level); 
        dst << "("; 
        branches[1]->print(dst, con, level); 
        dst <<")";
    }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
            
            con.iJustWantTheNameBro = 1;
           
            branches[0]->mipsGen(os,con,dest);
            std::string funcName = con.dummyDec.id;
            //confirmed it does enter and goes into branches[1]
            if(!empty){
                con.inCall = 1;
                branches[1]->mipsGen(os,con,dest);
                con.inCall = 0;
            }

            con.iJustWantTheNameBro = 0;

            os << "jal " << funcName << std::endl;
            os << "nop" << std::endl;

            if(dest!=0){
                os << "move " << con.reg(dest) << ", " << con.reg(2) << std::endl;
            }
           

           // con.stack.back().spOffset = oldTwentyNine;
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
private:
    bool empty;

};

#endif