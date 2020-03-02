#ifndef functionDef_hpp
#define functionDef_hpp

#include "declaration.hpp"

class functionDef: public Expression{
public:
     functionDef(NodePtr n1, NodePtr n2, NodePtr n3) {
        deckedBoi = new Declaration(n1, n2);
        branches.push_back(deckedBoi);
        branches.push_back(n3);
     }
     functionDef(NodePtr n1, ListPtr n2){
         branches.push_back(n1);
         branches.push_back(n2);
     }

     virtual void print(std::ostream &dst) const{
      dst << "def ";
      branches[0]->print(dst);
      dst << " : ";
      branches[1]->print(dst);
    }
    virtual void pythonGen(std::ostream& os) const { }
protected:
     DeclarationPtr deckedBoi;
};

#endif