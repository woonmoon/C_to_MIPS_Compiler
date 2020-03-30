#ifndef equalTo_hpp
#define equalTo_hpp

class equalTo;
typedef const equalTo* equalToPtr;

class equalTo: public Expression{
public:
    equalTo(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " == ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest = con.registerSet.freeRegister();

        con.flushReg({addrDest}, os);

        branches[0]->mipsGen(os, con, dest);
        branches[1]->mipsGen(os, con, addrDest);

        os << std::endl;
        os << "sub " << con.reg(dest) << ", " << con.reg(dest) <<  ", " << con.reg(addrDest); 
        os << std::endl;
        os << "sltiu " << con.reg(dest) << ", " << con.reg(dest) << ", 1";
        os << std::endl;
        
        con.recoverReg({addrDest}, os);

     }
     int evaluate() const { return 0; }
     std::string getName() const { return ""; }
     void look(mipsCon& con) const {}
protected:
};

#endif

//int f() { int a=1; int b=2; if(a==b) { a=a+b; } else { a=b-a; } }