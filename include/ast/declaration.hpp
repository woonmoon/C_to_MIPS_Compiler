#ifndef declaration_hpp
#define declaration_hpp

#include "expression.hpp"

class Declaration;

class Declaration : public Expression {
public:
    ~Declaration(){}
    Declaration(Node* type){
      branches[0] = type;
      branches[1] = 0;
    }
    Declaration(NodePtr type, NodePtr name){
      branches[0] = type;
      branches[1] = name;
    }
    virtual void print(std::ostream &dst) const{
      dst << branches[0] << " " << branches[1];
    }
    virtual void pythonGen(std::ostream& os) const { }
private:

};



#endif
