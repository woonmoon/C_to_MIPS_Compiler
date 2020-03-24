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
        } 
        else{
            returnVal->mipsGen(os, con, 2);
        }

        con.returnFunc(os);

    }
protected:
    NodePtr returnVal;
};

#endif