#include "expression.hpp"
#include <sstream>

Expression::~Expression() {
  for(int i=0; i<branches.size(); i++) {
    delete branches[i];
  }
}

std::string Expression::toString() {
  sstream s;
  s << *this;
  return s;
}

void Expression::pythonGen() {
  //generate some python shit
}
