#ifndef init_declarator_hpp
#define init_declarator_hpp

#include "expression.hpp"

class initDeclarator;

class initDeclarator : public Expression {
public:
    ~initDeclarator(){}
    initDeclarator(Node* type): isAssign(0){
      branches.push_back(type);
      branches.push_back(0);
    }
    initDeclarator(NodePtr type, NodePtr name): isAssign(1){
      branches.push_back(type);
      branches.push_back(name);
      branches[1]->print(std::cout);
    }
    virtual void print(std::ostream &dst) const{
      branches[0]->print(dst);
      dst << " = ";
      if(isAssign){
        branches[1]->print(dst);
      }
      else{
        dst << "0";
      }
    }
    virtual void pythonGen(std::ostream& os) const { }
private:
 bool isAssign;
};



#endif
