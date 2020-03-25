#ifndef forLoop_hpp
#define forLoop_hpp

#include "../node.hpp"

class forLoop;
typedef const forLoop* forLooppPtr;

class forLoop : public Node {
public:
    forLoop(NodePtr cond1, NodePtr cond2, NodePtr cond3, NodePtr block): condExp1(cond1), condExp2(cond2), condExp3(cond3), loopBlock(block) { };
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    //don't know how to scope this properly
        con.enterScope();
        //std::cout << "entered scope" << std::endl;
        con.statement().offset=con.stack.back().spOffset;
        con.statement().contFlag=con.makeALabel("cont");
        con.statement().endFlag=con.makeALabel("end");
        if(condExp1!=NULL) { 
            condExp1->mipsGen(os, con, 2);
            os << con.statement().contFlag << ": ";
            os << std::endl;
        }
        if(condExp2!=NULL) {
            condExp2->mipsGen(os, con, 2);
            os << "beq " << con.reg(2) << ", " << con.reg(0) << ", " << con.statement().endFlag;
            os << std::endl;
            os << "nop";
            os << std::endl;
        }
        con.conditional().conditionalPatty=true;
        loopBlock->mipsGen(os, con);
        if(condExp3!=NULL) { condExp3->mipsGen(os, con, 2); }
        os << "j " << con.statement().contFlag;
        os << std::endl;
        os << "nop";
        os << std::endl;
        os << con.statement().endFlag << ":";
        os << std::endl;
        con.exitScope(os);
    }

protected:
    NodePtr condExp1;
    NodePtr condExp2;
    NodePtr condExp3;
    NodePtr loopBlock;
};

#endif

