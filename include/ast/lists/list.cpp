#include "lists.hpp"

List::List(std::vector<NodePtr> _branches) {
  branches=_branches;
}

~List::List() {
  for(int i=0; i<branches.size(); i++) {
    delete branches[i];
  }
}

void List::print(std::ostream& os) const{
  for(int i=0; i<branches.size(); i++) {
    os << branches[i] << " ";
  }
}
