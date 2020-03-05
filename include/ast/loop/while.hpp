#ifndef while_hpp
#define while_hpp

#include "../node.hpp"

class whileLoop;
typedef const whileLoop* whileLoopPtr;

class whileLoop : public Node {
public:
    whileLoop(NodePtr cond, NodePtr block): condition(cond), loopBlock(block) { };
    void print(std::ostream& dst, pycon& con, int level) const {
        con.indent(dst);
        dst << "while (";
        condition->print(dst, con, level);
        dst<< ")";
        con.addTab();
        std::cout << std::endl;
        loopBlock->print(dst, con, level);
        con.subTab();
    }
    void pythonGen(std::ostream& os) const { }
protected:
    NodePtr condition;
    NodePtr loopBlock;
};

#endif

