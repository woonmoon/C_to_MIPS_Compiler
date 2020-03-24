#ifndef notEqualTo_hpp
#define notEqualTo_hpp

class notEqualTo;
typedef const notEqualTo* notEqualToPtr;

class notEqualTo: public Expression{
public:
    notEqualTo(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " == ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        std::string true_=con.makeALabel("neq_true");
        std::string false_=con.makeALabel("neq_false");

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        branches[1]->mipsGen(os, con, addrDest2);

        os << std::endl;
        os << "bne " << con.reg(addrDest1) << ", " << con.reg(addrDest2) <<  ", " << true_; 
        os << std::endl;
        os << "nop" << std::endl;
        os << std::endl;
        os << "li " << con.reg(dest) << ", 0";
        os << std::endl;
        os << "beq " << con.reg(0) << ", " << con.reg(0) << ", " << false_;
        os << std::endl;
        os << "nop" << std::endl;
        os << std::endl;
        os << true_ << ":";
        os << std::endl;
        os << "li " << con.reg(dest) << ", 1" << std::endl;
        os << false_ << ":" << std::endl;
        
        con.recoverReg({addrDest2, addrDest1}, os);

     }
protected:
};

#endif

//int f() { int a=1; int b=2; if(a==b) { a=a+b; } else { a=b-a; } }