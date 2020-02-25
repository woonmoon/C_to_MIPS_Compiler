#ifndef type_hpp
#define type_hpp

#include "../node.hpp"

class Type;
typedef const Type *TypePtr;

class Type: public Node{
public:
  virtual ~Type();
  virtual void print(std::ostream& dst) { }
  virtual void pythonGen(std::ostream& os) { }
};

#endif
