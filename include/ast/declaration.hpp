#ifndef declaration_hpp
#define declaration_hpp

#include "expression.hpp"

class Declaration;
typedef const Declaration* DeclarationPtr;

class Declaration : public Expression {
public:
    ~Declaration(){}
    Declaration(Node* type){
      branches.push_back(type);
      branches.push_back(0);
    }
    Declaration(NodePtr type, NodePtr name){
      branches.push_back(type);
      branches.push_back(name);
    }
    virtual void print(std::ostream& dst, pycon& con, int level) const{
      branches[0]->print(dst, con, level);
      branches[1]->print(dst, con, level);
    }
    virtual void pythonGen(std::ostream& os) const { };
private:
    
};



#endif
