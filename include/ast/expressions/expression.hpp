#ifndef node_hpp
#define node_hpp

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <memory>
#include "../ast/node.hpp"

class Expression;

typedef const Expression *ExpressionPtr;

class Expression  : public Node
{
public:
    virtual ~Expression() {}

    virtual void print(std::ostream &dst) {}
    virtual void pythonGen(std::ostream& os) {}

protected:
    std::vector<NodePtr> branches;
};


#endif
