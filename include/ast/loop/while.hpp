#ifndef while_hpp
#define while_hpp

#include "../node.hpp"

class whileLoop;
typedef const whileLoop* whileLoopPtr;

class whileLoop : public Node {
public:
    whileLoop(NodePtr cond, NodePtr block): condition(cond), loopBlock(block) { };
    void print(std::ostream& dst, pycon& con, int level) const {
        dst << std::endl;
        con.indent(dst);
        dst << "while (";
        con.subTab();
        condition->print(dst, con, level);
        con.addTab();
        dst<< "):";
        con.addTab();
        std::cout << std::endl;
        con.indent(dst);
        loopBlock->print(dst, con, level);
        con.subTab();
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    //don't know how to scope this properly
        con.enterScope();
        //std::cout << "entered scope" << std::endl;
        con.statement().offset=con.stack.back().spOffset;
        con.statement().contFlag=con.makeALabel("cont");
        con.statement().endFlag=con.makeALabel("end");
        os << con.statement().contFlag << ": ";
        os << std::endl;
        condition->mipsGen(os, con, 2);
        os << "beq " << con.reg(2) << ", " << con.reg(0) << ", " << con.statement().endFlag;
        os << std::endl;
        os << "nop";
        os << std::endl;
        con.conditional().conditionalPatty=true;
        loopBlock->mipsGen(os, con);
        os << "j " << con.statement().contFlag;
        os << std::endl;
        os << "nop";
        os << std::endl;
        os << con.statement().endFlag << ":";
        os << std::endl;
        con.exitScope(os);
    }

protected:
    NodePtr condition;
    NodePtr loopBlock;
};

#endif

