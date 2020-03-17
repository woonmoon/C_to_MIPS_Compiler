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

    void mipsGen(std::ostream& os, mipsCon& con) const {
      if(!isFunction){
        con.count += 4;
      }else{
        //WIPE THE MAP
        //reset count
      }
      int tempCount = con.count;
      branches[0]->mipsGen(os, con);
      branches[1]->mipsGen(os, con);
      os << std::endl;
      os << "sw $8, " << tempCount << "($fp)";
      con.untickReg(8);
    }
private:
    bool isFunction;
    
};



#endif
