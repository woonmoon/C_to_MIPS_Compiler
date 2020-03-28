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
      isFunction = isFunc;
      branches.push_back(type);
      branches.push_back(name);
    }
    void print(std::ostream& dst, pycon& con, int level) const{
      branches[0]->print(dst, con, level);
      branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
      if(!con.funcDec().functionDef) {
        if(con.firstTime&&con.extraCheck){
          con.enterNewFunc(os);
          con.extraCheck = 0;
        }
        con.varDec().variableDec=true;
        con.dummyDec={};
      }
      //std::cout << "MADE IT PAST THE CHECKING" << std::endl;
      branches[0]->mipsGen(os, con);
      //std::cout << "FINISHED BRANCH[0] DECL" << std::endl;
      branches[1]->mipsGen(os, con);
      //std::cout << "left declaration" << std::endl;
      con.varDec().variableDec=false;
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
private:
    bool isFunction;
    
};



#endif
