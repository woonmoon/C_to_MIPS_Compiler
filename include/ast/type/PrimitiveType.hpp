#ifndef type_hpp
#define type_hpp

#include "type.hpp"

class PrimitiveType;
typedef const PrimitiveType *PrimitiveType;

class PrimitiveType: public Type{
public:
  PrimitiveType(std::string _type);
  ~PrimitiveType();
  enum Specifier {
    _int,
    _void //more to come
  };
  void print(std::ostream& dst) const;
  void pythonGen(std::ostream& os) const;
private:
  Specifier type;
};

#endif
