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
    virtual void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { }
    virtual int evaluate() const = 0;
    virtual std::string getName() const =0;
    virtual void offset(std::ostream& os, mipsCon& con, int dest=0) const =0;
    std::vector<NodePtr> branches;
protected:

};


#endif
