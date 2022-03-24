#ifndef functionDec_hpp
#define functionDec_hpp

class functionDec: public Expression{
public:

   functionDec(NodePtr n1): single(1) {
      branches.push_back(n1);

   }

   functionDec(NodePtr n1, ListPtr n2) : single(0) {
      branches.push_back(n1);
      branches.push_back(n2);
   }

   void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
      //std::cout << "***functionDec***: branch[0]" << std::endl;
      if(con.funcDec().functionDef != 0){
      //  std::cout << "=============================" << std::endl;
      branches[0]->mipsGen(os, con);
      if(!single){
         //std::cout << "***functionDec***: branch[1]" << std::endl;
         branches[1]->mipsGen(os, con);
      }
      // std::cout << "=============================" << std::endl;
      }else{
         con.isGlobalFunc = 1;
      }
   }
   int evaluate() const { return 0; }
   std::string getName() const { return ""; }
   void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
     DeclarationPtr deckedBoi;
     int argNum;
     bool single;
};

#endif