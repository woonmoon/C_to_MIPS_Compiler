#ifndef lessThanEqual_hpp
#define lessThanEqual_hpp

class lessThanEqual: public Expression {
public:
    lessThanEqual(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " < ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }
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
protected:
};

#endif