//
// Created by Rishil Patel on 19/02/2020.
//

#ifndef LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
#define LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP

#include "expression.hpp"

class Identifier;

typedef const Identifier* IdentifierPtr;

class Identifier: public Expression {
    public:
        Identifier(std::string v) : identifierName(v) {};

        void print(std::ostream& dst, pycon& con, int level) const{
          
          if(con.returnTab() == 0 && !con.notFunc()){ 
            con.addGlobal(identifierName);
          }
          dst << identifierName;
        }
        std::string getId() { return identifierName; }
        void pythonGen(std::ostream &os) const{
          os << identifierName;
        }


        void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
          if(!con.iJustWantTheNameBro){
          if(con.funcDec().functionDef) { //new function definition, insert a label
            con.funcDec().functionDef=false;
            con.funcDec().funcID=identifierName;
             os << ".globl " << identifierName << std::endl;
            os << identifierName << ":";
            os << std::endl;
          }else if(con.inFrame(identifierName)) { //already a pre-used variable
            con.dummyDec.id=identifierName; // I ADDED THIS FOR ASSIGNMENT OPERATOR HOPE IT DOESNT CAUSE PROBLEMS xoxo
            int id_offset=con.varBinding().at(identifierName).offset;
            os << "lw " << con.reg(dest) << ", " << con.stackSize-id_offset <<  "(" << con.reg(29) << ")";
            os << std::endl;
          }else if(con.isParam){
            if(con.paramReg<8){
              con.dummyDec.id=identifierName;
              os << "addi " << con.reg(29) << ", " << con.reg(29) << ", -" << con.dummyDec.size;
              os << std::endl;
              con.stackSize+=con.dummyDec.size;
              con.varBinding()[con.dummyDec.id]={4, static_cast<uint32_t>(con.stackSize), {}};

              os << "move " << con.reg(2) << ", " << con.reg(con.paramReg);
              os<<std::endl;

            } //THIS IS ADDED IN 
          }
          else{ //completely new variable
            con.dummyDec.id=identifierName;
            //std::cout << "stack size is " << con.stackSize << " dummy size is " << con.dummyDec.size << std::endl;
             if(con.stack.size()>=1) {
          //os << "addi " << con.reg(29) << ", " << con.reg(29) << ", -" << con.dummyDec.size;
          //os << std::endl;
              os << "addi " << con.reg(29) << ", " << con.reg(29) << ", -" << con.dummyDec.size;
              os << std::endl;
              con.stackSize+=con.dummyDec.size;
              con.varBinding()[con.dummyDec.id]={4, static_cast<uint32_t>(con.stackSize)};
            }
            //con.varBinding()[con.dummyDec.id].offset=con.stackSize;
          }
          //**MISSING GLOBAL CASES AND PARAMETER CASES** 
        }
        if(con.iJustWantTheNameBro){
        con.dummyDec.id=identifierName;
        con.isIdentifierCall = 1;
        }
        }

    private:
        std::string identifierName;
};


#endif //LANGPROC_2019_CW_JETSTREAM_IDENTIFIER_HPP
