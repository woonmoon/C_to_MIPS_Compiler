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
      branches.push_back(NULL);
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


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
      //int reg=con.registerSet.freeRegister();
      if(!con.funcDec().functionDef) {
        if(con.firstTime&&con.extraCheck){
          // std::cout << "THE DUMBEST SHIT EVER" << std::endl;
          con.enterNewFunc(os);
          con.extraCheck = 0;
        }
        con.isDeclaringVariable=true;
        con.dummyDec={};
      }
      //std::cout << "MADE IT PAST THE CHECKING" << std::endl;
      branches[0]->mipsGen(os, con);
      //std::cout << "FINISHED BRANCH[0] DECL" << std::endl;
      // for(int i=0; i<32; i++) {
      //   if(con.registerSet.set[i]==0) {
      //     std::cout << "register " << i << " is free." << std::endl;
      //   }
      // }
      //std::cout << "FINISHED BRANCH[0] DECL" << std::endl;
      if(branches[1]!=NULL) {
        branches[1]->mipsGen(os, con);
      }
      //std::cout << "left declaration" << std::endl;
      //std::cout << "FINISHED BRANCH[] DECL" << std::endl;
      //con.registerSet.untickReg(con.reggo);
      // for(int i=0; i<32; i++) {
      //   if(con.registerSet.set[i]==0) {
      //     std::cout << "register " << i << " is free." << std::endl;
      //   }
      // }
      con.isDeclaringVariable=false;
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
private:
    bool isFunction;
    
};



#endif
