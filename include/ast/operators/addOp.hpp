#ifndef addOp_hpp
#define addOp_hpp

class addOp;
typedef const addOp* addOpPtr;

class addOp: public Expression {
public:
    addOp(ExpressionPtr left, ExpressionPtr right): exp1(left), exp2(right) { branches.push_back(left); branches.push_back(right); }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest = con.registerSet.freeRegister();
        int oldDest = dest;

        
        con.flushReg({addrDest}, os);

        branches[0]->mipsGen(os, con, dest);
        
        branches[1]->mipsGen(os, con, addrDest);

        os << std::endl;
        os << "addu " << con.reg(oldDest) << ", " << con.reg(dest) << ", " << con.reg(addrDest);
        os<< std::endl;

        con.recoverReg({addrDest}, os);
        con.registerSet.untickReg(addrDest);
    }

    int evaluate() const { return exp1->evaluate()+exp2->evaluate(); }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}

protected:
    ExpressionPtr exp1;
    ExpressionPtr exp2;
};

class unaryOp : public Expression{
public:
    unaryOp(std::string opi, ExpressionPtr expri): op(opi), expr(expri) { branches.push_back(expri); }
    ~unaryOp(){}
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest = con.registerSet.freeRegister();
        if(op == "!"){
            branches[0]->mipsGen(os,con,addrDest);
            os << "slti " << con.reg(addrDest) << ", " << con.reg(addrDest) << ", 1" << std::endl;
        }
        else if(op == "~"){
            branches[0]->mipsGen(os,con,addrDest);
            os << "not " << con.reg(addrDest) << ", " << con.reg(addrDest) << std::endl;
        }
        else if(op == "-"){
            branches[0]->mipsGen(os,con,addrDest);
            os << "sub " << con.reg(dest) << ", " << con.reg(0) << ", " << con.reg(addrDest) << std::endl;
        }
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {
        expr->offset(os, con, dest);
    }

private:
    std::string op;
    ExpressionPtr expr;
};

#endif