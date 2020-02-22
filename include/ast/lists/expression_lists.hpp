#ifndef expression_lists_hpp
#define expression_lists_hpp

#include <vector>
#include "../ast_expression.hpp"

class ExpressionList;
typedef const ExpressionList* ExpressionListPtr;

class ExpressionList {
public:
  ExpressionList(std::vector<ExpressionPtr> _branches);
  ExpressionList(): branches(std::vector<ExpressionPtr>{}) { }
  ~ExpressionList();
  void print();
  std::vector<ExpressionPtr> getBranches();
private:
  std::vector<ExpressionPtr> branches;
};

#endif
