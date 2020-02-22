#include "expression_lists.hpp"

ExpressionList::ExpressionList(std::vector<ExpressionPtr> _branches) {
  branches=_branches;
}

~ExpressionList::ExpressionList() {
  for(int i=0; i<branches.size(); i++) {
    delete branches[i];
  }
}

void Expression::print() {
  for(int i=0; i<branches.size(); i++) {
    std::cout << branches[i] << " ";
  }
}
