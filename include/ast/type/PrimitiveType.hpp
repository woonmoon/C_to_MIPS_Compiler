#ifndef primitive_type_hpp
#define primitive_type_hpp

class PrimitiveType;
typedef const PrimitiveType *PrimitiveTypePtr;


class PrimitiveType: public Node{
public:

    enum Specifier {
    _int,
    _void //more to come
  };

  PrimitiveType(Specifier inType): type(inType){}

  ~PrimitiveType();

  void print(std::ostream& dst) const{
  switch(type) {
    case _int:
      dst << "int ";
      break;
    case _void:
      dst << "void ";
      break;
    default:
      dst << "unknown type ";
  }
};
  void pythonGen(std::ostream& os) const{  os<<"stuff"; };

private:
  Specifier type;
};

#endif
