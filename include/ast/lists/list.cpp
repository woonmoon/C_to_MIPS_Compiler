#include "lists.hpp"

List::List(std::vector<NodePtr> b) {
  branches=b;
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
