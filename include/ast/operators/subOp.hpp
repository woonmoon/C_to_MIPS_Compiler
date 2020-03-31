#ifndef subOp_hpp
#define subOp_hpp

class subOp;
typedef const subOp* subOpPtr;

class subOp: public Expression {
public:
    subOp(ExpressionPtr left, ExpressionPtr right): exp1(left), exp2(right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        dst << "(";
        branches[0]->print(dst, con, level);
        dst << " - ";
        branches[1]->print(dst, con, level);
        dst << ")";
    }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest = con.registerSet.freeRegister();
        int oldDest = dest;
        
        branches[0]->mipsGen(os, con, dest);
        con.flushReg({addrDest}, os);
        branches[1]->mipsGen(os, con, addrDest);

        os << std::endl;
        os << "subu " << con.reg(oldDest) << ", " << con.reg(dest) << ", " << con.reg(addrDest);
        os<< std::endl;

        con.recoverReg({addrDest}, os);
        //con.registerSet.untickReg(addrDest);
        //con.registerSet.untickReg(oldDest);

    }
    int evaluate() const { return exp1->evaluate()-exp2->evaluate(); }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
    ExpressionPtr exp1;
    ExpressionPtr exp2;
};

#endif