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


  void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    if(con.funcDec().functionDef) {
      //std::cout << "***primitiveType***: functionDef" << std::endl;
      con.funcBinding[con.funcDec().funcID].returnSize=4;
      //con.funcDec().functionDef=false; //for function declarations
    }else if(con.isVarDeclaration) {
      //std::cout << "***primitiveType***: variableDec" << std::endl;
      con.dummyDec.size=4;
    }
  }


private:
  Specifier type;
};

#endif
