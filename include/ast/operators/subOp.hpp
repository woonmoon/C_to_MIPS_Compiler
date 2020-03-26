#ifndef subOp_hpp
#define subOp_hpp

class subOp;
typedef const subOp* subOpPtr;

class subOp: public Expression {
public:
    subOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " - ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
                
        int addrDest = con.registerSet.freeRegister();
        
        branches[0]->mipsGen(os, con, dest);
        con.flushReg({addrDest}, os);
        branches[1]->mipsGen(os, con, addrDest);

        os << std::endl;
        os << "subu " << con.reg(dest) << ", " << con.reg(dest) << ", " << con.reg(addrDest);
        os<< std::endl;

        con.recoverReg({addrDest}, os);


    }
    int evaluate() const { return 0; }
protected:
};

#endif