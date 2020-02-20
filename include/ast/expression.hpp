#ifndef expression_hpp
#define expression_hpp

#include <string>
#include <iostream>
#include <map>
#include <memory>
#include <vector>

class Expression;

typedef const Expression *ExpressionPtr;

class Expression {
public:
  virtual ~Expression();
  std::string toString();
  virtual void pythonGen(std::ostream &dst) const = 0;
protected:
  //std::vector<ExpressionPtr> branches;
};

#endif
