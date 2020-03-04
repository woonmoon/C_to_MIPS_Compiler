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

  void print(std::ostream& dst, pycon& con, int level) const{
  // switch(type) {    DO NOT NEED TO PRINT FOR PYTHON
  //   case _int:
  //     dst << "int lolm ";
  //     break;
  //   case _void:
  //     dst << "void ";
  //     break;
  //   default:
  //     dst << "unknown type ";
  }
  void pythonGen(std::ostream& os) const{
      os<<"identifier"; 
      }

private:
  Specifier type;
};

#endif
