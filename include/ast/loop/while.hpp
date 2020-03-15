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
    void mipsGen(std::ostream& os, mipsCon& con) const {
        std::string startLoop=con.makeALabel("start");
        con.isConditional=true;
        os << std::endl;
        os << startLoop << ":";
        os << std::endl;
        condition->mipsGen(os, con);
        std::string endLoop=con.makeALabel("end");
        os << endLoop;
        os << std::endl;
        loopBlock->mipsGen(os, con);
        os << std::endl;
        os << "j " << startLoop;
        os << std::endl;
        os << endLoop << ":";
    }

protected:
    NodePtr condition;
    NodePtr loopBlock;
};

#endif

