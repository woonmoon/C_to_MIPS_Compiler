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
      branches.push_back(type);
      branches.push_back(name);
    }
    virtual void print(std::ostream &dst) const{
      dst << branches[0] << " = " << branches[1];
    }
    virtual void pythonGen(std::ostream& os) const { }
private:

};



#endif
