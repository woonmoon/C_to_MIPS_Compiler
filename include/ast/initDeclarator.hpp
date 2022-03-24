#ifndef init_declarator_hpp
#define init_declarator_hpp

#include "expression.hpp"

class initDeclarator;

class initDeclarator : public Expression {
public:
    ~initDeclarator() {}
    
    initDeclarator(Node* type): isAssign(0) {
      branches.push_back(type);
      branches.push_back(0);
    }

    initDeclarator(NodePtr type, NodePtr name): isAssign(1) {
      branches.push_back(type);
      branches.push_back(name);
    }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
   //   std::cout << "=======================TOP INIT_DECLARATOR=============================" << std::endl;
      if(con.varDec().variableDec&&(!con.isParam)) {
        //std::cout << "variable declaration!" << std::endl;
        int newDest=con.registerSet.freeRegister();
        con.flushReg({newDest}, os);
     //   std::cout << "ABOVE" << std::endl;
        branches[0]->mipsGen(os, con, newDest);
     //   std::cout << "BELOW" << std::endl;
        if(!con.isGlobalFunc){
        if(isAssign){
          con.assign().isAssign=true;
          branches[1]->mipsGen(os, con, newDest);
          con.assign().isAssign=false;
        }
        con.writeToStack(newDest, con.varBinding().at(con.dummyDec.id).offset, os);
        con.recoverReg({newDest}, os);
        int far_offset;
        //std::cout << "array size is " << con.varBinding()[con.dummyDec.id].arraySize[0] << std::endl;
        if(con.stack.size()>1) {
          if(con.varBinding().at(con.dummyDec.id).arraySize.size()==0) {
            far_offset=con.stackSize-con.varBinding().at(con.dummyDec.id).offset;
            //std::cout << "stack size is " << con.stackSize << " far offset is " << far_offset << std::endl;
          }else{
            far_offset=con.stackSize-(con.varBinding()[con.dummyDec.id].offset+con.varBinding().at(con.dummyDec.id).arraySize[0]*4);
            //std::cout << "stack size is " << con.stackSize << " far offset is " << far_offset << std::endl;
          }  
        }else{ //global
          //std::cout << "global declaration of array in init declarator" << std::endl;
          far_offset=con.stackSize-(con.gloVar[con.dummyDec.id].offset+con.gloVar[con.dummyDec.id].arraySize[0]*4);
          //std::cout << "stack size is " << con.stackSize << " far offset is " << far_offset << std::endl;
        }
        os << "addi " << con.reg(29) << ", " << con.reg(29) << ", " << far_offset; //MAY NOT NEED =================
        os << std::endl;
        con.stackSize-=far_offset;
        con.registerSet.untickReg(newDest);
        //std::cout << "array foo is stored at " << con.varBinding().at("foo").offset << " array size is " << con.varBinding().at("foo").arraySize[0] << std::endl;
      }
      }
      if(con.isParam&&!con.isGlobalFunc) {
        branches[0]->mipsGen(os, con, 2);
        con.writeToStack(2, con.varBinding().at(con.dummyDec.id).offset, os);
        int far_offset=con.stackSize-con.varBinding().at(con.dummyDec.id).offset;
        os << std::endl;
        con.stackSize-=far_offset;
      }
      //std::cout << "left initdeclarator" << std::endl;
     // std::cout << "=======================BOTTOM INIT_DECLARATOR=============================" << std::endl;
      con.isGlobalFunc = 0;
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }

    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}

protected:
  bool isAssign;
};

#endif