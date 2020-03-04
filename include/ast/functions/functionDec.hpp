#ifndef functionDec_hpp
#define functionDec_hpp

class functionDec: public Expression{
public:
     functionDec(NodePtr n1, NodePtr n2, NodePtr n3) {
        deckedBoi = new Declaration(n1, n2);
        branches.push_back(deckedBoi);
        branches.push_back(n3);
        argNum=0;
     }
     functionDec(NodePtr n1, ListPtr n2){
        branches.push_back(n1);
        branches.push_back(n2);
     }

      void print(std::ostream& dst, pycon& con, int level) const{
         branches[0]->print(dst, con, level);
         dst << "(";
         branches[1]->print(dst, con, level);
         dst << ")";
    }
      void pythonGen(std::ostream& os) const { }
protected:
     DeclarationPtr deckedBoi;
     int argNum;
};

#endif