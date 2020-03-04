#ifndef return_hpp
#define return_hpp

#include "node.hpp"

class Return;
typedef const Return* ReturnPtr;

class Return : public Node {
public:
    Return(NodePtr ret): returnVal(ret) {}
    void pythonGen(std::ostream& os) const{}
    void print(std::ostream& dst, pycon& con, int level) const{ dst << "return "; returnVal->print(dst, con, level); }
protected:
    NodePtr returnVal;
};

#endif