#ifndef init_declarator_hpp
#define init_declarator_hpp

#include "expression.hpp"

class initDeclarator;

class initDeclarator : public Expression {
public:
    ~initDeclarator(){}
    initDeclarator(Node* type){
      branches.push_back(type);
      branches.push_back(0);
    }
    initDeclarator(NodePtr type, NodePtr name){
      std::cout << "in constructor " << std::endl;
      branches.push_back(type);
      branches.push_back(name);
      branches[1]->print(std::cout);
    }
    virtual void print(std::ostream &dst) const{
      branches[0]->print(dst);
      dst << " = ";
      branches[1]->print(dst);
    }
    virtual void pythonGen(std::ostream& os) const { }
private:
};



#endif
