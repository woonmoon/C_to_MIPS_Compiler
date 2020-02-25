#ifndef expression_lists_hpp
#define expression_lists_hpp

#include <vector>
#include "../ast_expression.hpp"

class List;
typedef const List* ListPtr;

class List {
public:
  List(std::vector<NodePtr> b);
  List(): branches(std::vector<NodePtr>{}) { }
  ~List();
  virtual void print(std::ostream &dst) {}
  virtual void pythonGen(std::ostream& os) {}
  std::vector<NodePtr> getBranches();
private:
  std::vector<NodePtr> branches;
};

#endif
