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
    Declaration(NodePtr type, NodePtr name, bool isFunc){
      bool isFunc = 1;
      branches.push_back(type);
      branches.push_back(name);
    }
    void print(std::ostream& dst, pycon& con, int level) const{
      branches[0]->print(dst, con, level);
      branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os) const {
      if(!isFunction){
        mipsCon.count += 4;
      }else{
        //WIPE THE MAP
        //reset count
      }
      branches[0]->mipsGen(os);
      branches[1]->mipsGen(os);

private:
    bool isFunction;
    
};



#endif
