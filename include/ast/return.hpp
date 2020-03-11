#ifndef return_hpp
#define return_hpp

#include "node.hpp"

class Return;
typedef const Return* ReturnPtr;

class Return : public Node {
public:
    Return(NodePtr ret): returnVal(ret) {}
    void pythonGen(std::ostream& os) const{}
    void print(std::ostream& dst, pycon& con, int level) const{ con.indent(dst); dst << "return "; returnVal->print(dst, con, level); }
    void mipsGen(std::ostream& os) const{}
protected:
    NodePtr returnVal;
};

#endif