#ifndef return_hpp
#define return_hpp

#include "node.hpp"

class Return;
typedef const Return* ReturnPtr;

class Return : public Node {
public:
    Return(NodePtr ret): returnVal(ret) {}
    void pythonGen(std::ostream& os) const{}
    void print(std::ostream& dst, pycon& con, int level) const{ 
    
         con.indent(dst); dst << "return ";
         returnVal->print(dst, con, level); 

    }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const{

        if(returnVal == NULL) {
            os << "addi " << con.reg(2) << ", " << con.reg(0) << ", " << "0";
            os << std::endl;
        } 
        else{
            returnVal->mipsGen(os, con, 2);
        }

        con.returnFunc(os);

    }
protected:
    NodePtr returnVal;
};

class Break;
typedef const Break* BreakPtr;

class Break : public Node {
public:
    Break() {}
    void pythonGen(std::ostream& os) const{}
    void print(std::ostream& dst, pycon& con, int level) const{ }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const{

		int offset = con.stackSize -  con.statement().offset;
        os << "addi " << con.reg(29) << ", " << con.reg(29) << ", " << offset << std::endl;
        os << "j " << con.statement().breakFlag << std::endl;
        os << "nop" << std::endl;
      
    }
protected:
    NodePtr BreakVal;
};

class Continue;
typedef const Continue* ContinuePtr;

class Continue : public Node {
public:
    Continue() {}
    void pythonGen(std::ostream& os) const{}
    void print(std::ostream& dst, pycon& con, int level) const{ }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const{

		int offset = con.stackSize -  con.statement().offset;
        os << "addi " << con.reg(29) << ", " << con.reg(29) << ", " << offset << std::endl;
        os << "j " <<  con.statement().continueFlag << std::endl;
        os << "nop" << std::endl;
      
    }
protected:
    NodePtr ContinueVal;
};

#endif