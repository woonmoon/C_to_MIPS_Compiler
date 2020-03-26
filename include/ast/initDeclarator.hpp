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

    void print(std::ostream& dst, pycon& con, int level) const{
      branches[0]->print(dst, con, level);
      dst << " = ";
      if(isAssign){
        con.setAssign();
        branches[1]->print(dst, con, level);
      }else{ dst << "0"; }
      con.clearAssign();
      dst << std::endl;
    }

    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
      //std::cout << "IN INIT_DECLARATOR" << std::endl;
      if(con.varDec().variableDec&&(!con.isParam)) {
        //std::cout << "variable declaration!" << std::endl;
        int newDest=con.registerSet.freeRegister();
        con.flushReg({newDest}, os);
        branches[0]->mipsGen(os, con, newDest);
        if(isAssign){
          branches[1]->mipsGen(os, con, newDest);
        }
        con.writeToStack(newDest, con.varBinding().at(con.dummyDec.id).offset, os);
        con.recoverReg({newDest}, os);
        int far_offset;
        //std::cout << "array size is " << con.varBinding()[con.dummyDec.id].arraySize[0] << std::endl;
        if(con.varBinding().at(con.dummyDec.id).arraySize.size()==0) {
          //std::cout << "offset of single variable is " << con.varBinding().at(con.dummyDec.id).offset << std::endl;
          far_offset=con.stackSize-con.varBinding().at(con.dummyDec.id).offset;
          //std::cout << "stack size is " << con.stackSize << " far offset is " << far_offset << std::endl;
        }else{
          //std::cout << "the array size is " << con.varBinding().at(con.dummyDec.id).arraySize[0] << " and the size is " << con.varBinding().at(con.dummyDec.id).arraySize[0]*4 << std::endl;
          far_offset=con.stackSize-(con.varBinding()[con.dummyDec.id].offset+con.varBinding().at(con.dummyDec.id).arraySize[0]*4);
          //std::cout << "stack size is " << con.stackSize << " far offset is " << far_offset << std::endl;
        }
        os << "addi " << con.reg(29) << ", " << con.reg(29) << ", " << far_offset; //MAY NOT NEED =================
        os << std::endl;
        con.stackSize-=far_offset;
        con.registerSet.untickReg(newDest);
        //std::cout << "array foo is stored at " << con.varBinding().at("foo").offset << " array size is " << con.varBinding().at("foo").arraySize[0] << std::endl;
      }

      if(con.isParam) {
        branches[0]->mipsGen(os, con, 2);
        con.writeToStack(2, con.varBinding().at(con.dummyDec.id).offset, os);
        int far_offset=con.stackSize-con.varBinding().at(con.dummyDec.id).offset;
        os << std::endl;
        con.stackSize-=far_offset;
      }
      //std::cout << "left initdeclarator" << std::endl;
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }

private:
 bool isAssign;
};

#endif
