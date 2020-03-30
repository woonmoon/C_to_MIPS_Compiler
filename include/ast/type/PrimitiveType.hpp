#ifndef primitive_type_hpp
#define primitive_type_hpp

class PrimitiveType;
typedef const PrimitiveType *PrimitiveTypePtr;


class PrimitiveType: public Node {
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

  void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    if(con.funcDec().functionDef) {
      //std::cout << "***primitiveType***: functionDef" << std::endl;
      con.funcBinding[con.funcDec().funcID].returnSize=4;
      //con.funcDec().functionDef=false; //for function declarations
    }else if(con.varDec().variableDec) {
      //std::cout << "***primitiveType***: variableDec" << std::endl;
      con.dummyDec.size=4;
    }
  }
  void look(mipsCon& con) const {}

private:
  Specifier type;
};

#endif
