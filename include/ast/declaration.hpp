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
      //std::cout << "GOT TO DECLARATION" << std::endl;
      if(!con.funcDec().functionDef) {
        if(con.firstTime&&con.extraCheck){
          con.enterNewFunc(os);
          con.extraCheck = 0;
        }
        con.varDec().variableDec=true;
        con.dummyDec={};
      }
      //std::cout << "GOT TO DECLARATION" << std::endl;
      branches[0]->mipsGen(os, con);
      //std::cout << "FINISHED BRANCH[0] DECL" << std::endl;
      branches[1]->mipsGen(os, con);
      //if(con.varDec().variableDec) {
        // std::cout << "stackSize is " << con.stackSize << " varBinding offset is " << con.varBinding().at(con.dummyDec.id).offset << std::endl;
        // int furthest_sp=con.stackSize-con.varBinding().at(con.dummyDec.id).offset;
        // os << "addi " << con.reg(29) << ", " << con.reg(29) << ", " << furthest_sp;
        // os << std::endl;
      //}
      //std::cout << "FINISHED BRANCH[1] DECL" << std::endl;
      con.varDec().variableDec=false;
     }
private:
    bool isFunction;
    
};



#endif
