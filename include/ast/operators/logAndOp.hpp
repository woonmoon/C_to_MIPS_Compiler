#ifndef logAndOp_hpp
#define logAndOp_hpp

class logAndOp;
typedef const logAndOp* logAndOpPtr;

class logAndOp: public Expression {
public:
    logAndOp(ExpressionPtr left, ExpressionPtr right): exp1(left), exp2(right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " and ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        std::string true_=con.makeALabel("true_and");
        std::string false_=con.makeALabel("false_and");
        int dest1=con.registerSet.freeRegister();
        int dest2=con.registerSet.freeRegister();
        con.flushReg({dest1, dest2}, os);

        branches[0]->mipsGen(os, con, dest1);
        branches[1]->mipsGen(os, con, dest2);

        os << "beq " << con.reg(dest1) << ", " << con.reg(0) << ", " << false_ << std::endl;
        os << "nop" << std::endl;
        os << "beq " << con.reg(dest2) << ", " << con.reg(0) << ", " << false_ << std::endl;
        os << "nop" << std::endl;
        os << "li " << con.reg(dest) << ", 1" << std::endl;
        os << "beq $0, $0, " << true_ << std::endl;
        os << "nop" << std::endl;
        os << false_ << ":" << std::endl;
        os << "li " << con.reg(dest) << ", 0" << std::endl;
        os << true_ << ":" << std::endl;

        con.recoverReg({dest2, dest1}, os); 
    }

    int evaluate() const { return exp1->evaluate() && exp2->evaluate(); }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}

protected:
    ExpressionPtr exp1;
    ExpressionPtr exp2;
};

#endif