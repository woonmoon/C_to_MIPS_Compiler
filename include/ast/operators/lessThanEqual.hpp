#ifndef lessThanEqual_hpp
#define lessThanEqual_hpp

class lessThanEqual: public Expression {
public:
    lessThanEqual(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest = con.registerSet.freeRegister();

        con.flushReg({addrDest}, os);

        branches[0]->mipsGen(os, con, dest);
        branches[1]->mipsGen(os, con, addrDest);

        os << std::endl;
        os << "slt " << con.reg(dest) << ", " << con.reg(addrDest) << ", " << con.reg(dest);
        os << std::endl;
        os << "xori " << con.reg(dest) << ", " << con.reg(dest) << ", 1";
        os << std::endl;
        con.recoverReg({addrDest}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
};

#endif