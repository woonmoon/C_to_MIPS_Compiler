#ifndef expression.hpp
#define expression.hpp

typedef const  Expression *ExpressionPtr;

class Expression {
public:
  virtual ~Expression();
  std::string toString();
  virtual void pythonGen();
protected:
  std::vector<ExpressionPtr> branches;
};

#endif
