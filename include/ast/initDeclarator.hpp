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
        int newDest=con.registerSet.freeRegister();
        con.flushReg({newDest}, os);
        //std::cout << "***initDeclarator***: entering branch[0]" << std::endl;
        branches[0]->mipsGen(os, con, newDest);
        if(isAssign){
          //std::cout << "***initDeclarator***: entering branch[1]" << std::endl;
          branches[1]->mipsGen(os, con, newDest);
          //std::cout << "left declarator branch[1]" << std::endl;
        }
        //std::cout << "THE DUMMY STATS ARE AS FOLLOWS " << con.dummyDec.id << " and offset is " << con.varBinding().at(con.dummyDec.id).offset << std::endl;
        con.writeToStack(newDest, con.varBinding().at(con.dummyDec.id).offset, os);
        con.recoverReg({newDest}, os);
        //std::cout << "stackSize is " << con.stackSize << " varBinding offset is " << con.varBinding().at(con.dummyDec.id).offset << std::endl;
        int far_offset=con.stackSize-con.varBinding().at(con.dummyDec.id).offset;
        os << "addi " << con.reg(29) << ", " << con.reg(29) << ", " << far_offset; //MAY NOT NEED =================
        os << std::endl;
        con.stackSize-=far_offset;
        con.registerSet.untickReg(newDest);
      }

      if(con.isParam) {

        std::cout << "CON.ISPARAM" << std::endl;
        branches[0]->mipsGen(os, con, 2);
        std::cout << "THE DUMMY STATS ARE AS FOLLOWS " << con.dummyDec.id << " and offset is " << con.varBinding().at(con.dummyDec.id).offset << std::endl;
        con.writeToStack(2, con.varBinding().at(con.dummyDec.id).offset, os);
        //std::cout << "stackSize is " << con.stackSize << " varBinding offset is " << con.varBinding().at(con.dummyDec.id).offset << std::endl;
        int far_offset=con.stackSize-con.varBinding().at(con.dummyDec.id).offset;
      //  os << "addi " << con.reg(29) << ", " << con.reg(29) << ", " << far_offset; //MAY NOT NEED =================
        os << std::endl;
        con.stackSize-=far_offset;
      }
    }
    int evaluate() const { return 0; }

private:
 bool isAssign;
};

#endif
