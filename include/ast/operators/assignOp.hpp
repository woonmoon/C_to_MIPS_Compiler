#ifndef assignOp_hpp
#define assignOp_hpp

class assignOp;
typedef const assignOp* assignOpPtr;

class assignOp: public Expression {
public:
    assignOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " = ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 
        int addrDest = con.registerSet.freeRegister();
        con.flushReg({addrDest}, os);

        branches[0]->mipsGen(os, con, addrDest);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest);
        con.writeToStack(addrDest, con.varBinding().at(storeTo).offset, os);;
        //os << "sw " << con.reg(dest) << ", " << con.reg(addrDest);

        con.recoverReg({addrDest}, os);
    }

protected:
};

#endif