#ifndef modOp_hpp
#define modOp_hpp

class modOp;
typedef const modOp* modOpPtr;

class modOp: public Expression {
public:
    modOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }

    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();
        
        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        branches[1]->mipsGen(os, con, addrDest2);

        os << std::endl;
        os << "div " << con.reg(addrDest1) << ", " << con.reg(addrDest2);
        os << std::endl;
        os << "mfhi " << con.reg(dest);
        os << std::endl;

        con.recoverReg({addrDest2, addrDest1}, os); //SWITCH THESE OVER IF IT CAUSES PROBLEMS

    }
    int evaluate() const { return 0; }
protected:
};

#endif
