#ifndef mulOp_hpp
#define mulOp_hpp

class mulOp;
typedef const mulOp* mulOpPtr;

class mulOp: public Expression {
public:
    mulOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " * ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();
        
        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        branches[1]->mipsGen(os, con, addrDest2);

        os << std::endl;
        os << "mult " << con.reg(addrDest1) << ", " << con.reg(addrDest2);
        os << std::endl;
        os << "mflo " << con.reg(dest);
        os << std::endl;

        con.recoverReg({addrDest2, addrDest1}, os); //ORDERED LIKE THIS SO IT DOESNT HAVE TO GO UP AND DOWN, JUST UP

    }
protected:
};

#endif
