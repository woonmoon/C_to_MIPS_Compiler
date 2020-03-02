#ifndef while_hpp
#define while_hpp

#include "../node.hpp"

class whileLoop;
typedef const whileLoop* whileLoopPtr;

class whileLoop : public Node {
public:
    whileLoop(NodePtr cond, NodePtr block): condition(cond), loopBlock(block) { std::cout << "While loop made!" << std::endl; };
    void print(std::ostream &dst) const {
        dst << "while (";
        condition->print(dst);
        dst<< ")";
        loopBlock->print(dst);
    }
    void pythonGen(std::ostream& os) const { }
protected:
    NodePtr condition;
    NodePtr loopBlock;
};

#endif
