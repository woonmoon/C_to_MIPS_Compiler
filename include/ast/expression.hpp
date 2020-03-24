#ifndef expression_hpp
#define expression_hpp

#include <string>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <memory>
#include "node.hpp"

class Expression;

typedef const Expression *ExpressionPtr;

class Expression  : public Node
{
public:
    virtual ~Expression() {}

    virtual void print(std::ostream& dst, pycon& con, int level) const { }
    virtual void pythonGen(std::ostream& os) const { }
    virtual void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { }
    std::vector<NodePtr> branches;
protected:

};


#endif
