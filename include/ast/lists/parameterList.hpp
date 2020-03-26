#ifndef parameter_lists_hpp
#define parameter_lists_hpp

#include <vector>


class paramList;
typedef paramList* paramListPtr;

class paramList : public List {
public:
  paramList() {}
  paramList(NodePtr b) {
    listOfExpressions.push_back(b);
  }
  
  paramList(const ListPtr& lol) {
    listOfExpressions = lol->getlistOfExpressions(); 
  }

  ~paramList() {
    for(int i=0; i<listOfExpressions.size(); i++) {
      delete listOfExpressions[i];
    }
  }

  void print(std::ostream& dst, pycon& con, int level) const {
     for(int i=0; i<listOfExpressions.size(); i++){
      
      listOfExpressions[i]->print(dst, con, level);
      if(i!=listOfExpressions.size()-1) {
        dst << ", ";
      }
     }
  }

  void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
    con.paramReg = 4;
    if(!con.inCall){
    con.isParam = 1;
    con.firstTime = 1;
    con.extraCheck = 1;
    for(int i=0; i<listOfExpressions.size(); i++) {
      listOfExpressions[i]->mipsGen(os, con, dest);
      con.writeToStack(2, con.varBinding().at(con.dummyDec.id).offset, os); //THIS IS ADDED IN
      con.paramReg++;
      con.extraCheck = 0;
    }
     con.isParam = 0;
    }else if(con.inCall){
         for(int i=0; i<listOfExpressions.size(); i++) {

            con.isIdentifierCall = 0;
            con.isConstantCall = 0;
            listOfExpressions[i]->mipsGen(os, con, con.paramReg);

            if(con.isIdentifierCall){
              //load into paramreg, like lw or something from the reg that the identifier is in
              os << "lw " << con.reg(con.paramReg) << ", " << con.stackSize - con.varBinding().at(con.dummyDec.id).offset << "(" << con.reg(29) << ")" << std::endl;
            }
            if(con.isConstantCall){ //MAY NOT NEED THIS COS CONSTANT HAS ITS BOIIIIIIIIIIIIIIIIIIIIIIIIII
              //li into the paramreg
            }
            con.paramReg++;

         }
         con.isParam = 0;
   }
            con.isIdentifierCall = 0;
            con.isConstantCall = 0;
            con.isParam = 0;
  }

};

#endif
