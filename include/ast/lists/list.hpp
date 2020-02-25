#ifndef expression_lists_hpp
#define expression_lists_hpp

#include <vector>
#include "../ast_expression.hpp"

class List;
typedef const List* ListPtr;

class List {
public:
  List(std::vector<NodePtr> _branches);
  List(): branches(std::vector<NodePtr>{}) { }
  ~List();
  void print(std::ostream& os) const
  std::vector<NodePtr> getBranches();
private:
  std::vector<NodePtr> branches;
};

#endif
