#ifndef postInc_hpp
#define postInc_hpp

class postInc;
typedef const postInc* postIncPtr;

class postInc: public Expression {
public:
    postInc(ExpressionPtr left): exp(left) { branches.push_back(left); }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();
        
        con.flushReg({addrDest1, addrDest2}, os);
        branches[0]->mipsGen(os, con, addrDest1);

        std::string storeTo = con.dummyDec.id;;
        
        os << "lw " << con.reg(dest) << ", " << con.stackSize-con.varBinding().at(storeTo).offset <<  "(" << con.reg(29) << ")";
        os << std::endl;
        os << "addi " << con.reg(addrDest2) << ", " << con.reg(addrDest1) << ", 1";
        os<< std::endl;
        con.writeToStack(addrDest2, con.varBinding().at(storeTo).offset, os);

        con.recoverReg({addrDest2, addrDest1}, os);

    }
    int evaluate() const { return (exp->evaluate())+1; }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
    ExpressionPtr exp;
};

class postDec;
typedef const postDec* postDecPtr;

class postDec: public Expression {
public:
    postDec(ExpressionPtr left): exp(left) { branches.push_back(left); }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();
        
        con.flushReg({addrDest1, addrDest2}, os);
        branches[0]->mipsGen(os, con, addrDest1);

        std::string storeTo = con.dummyDec.id;;
        
        os << "lw " << con.reg(dest) << ", " << con.stackSize-con.varBinding().at(storeTo).offset <<  "(" << con.reg(29) << ")";
        os << std::endl;
        os << "addi " << con.reg(addrDest2) << ", " << con.reg(addrDest1) << ", -1";
        os<< std::endl;
        con.writeToStack(addrDest2, con.varBinding().at(storeTo).offset, os);

        con.recoverReg({addrDest2, addrDest1}, os);

    }
    int evaluate() const { return (exp->evaluate())-1; }
    std::string getName() const { return ""; }

    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
    ExpressionPtr exp;
};

class preDec;
typedef const preDec* preDecPtr;

class preDec: public Expression {
public:
    preDec(ExpressionPtr left): exp(left) { branches.push_back(left); }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest1 = con.registerSet.freeRegister();
        
        con.flushReg({addrDest1}, os);
        branches[0]->mipsGen(os, con, addrDest1);

        std::string storeTo = con.dummyDec.id;;
        
        os << "lw " << con.reg(dest) << ", " << con.stackSize-con.varBinding().at(storeTo).offset <<  "(" << con.reg(29) << ")";
        os << std::endl;
        os << "addi " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", -1";
        os<< std::endl;
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);

        con.recoverReg({addrDest1}, os);

    }
    int evaluate() const { return (exp->evaluate())-1; }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
    ExpressionPtr exp;
};

class preInc;
typedef const preInc* preIncPtr;

class preInc: public Expression {
public:
    preInc(ExpressionPtr left): exp(left) { branches.push_back(left); }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest1 = con.registerSet.freeRegister();
        
        con.flushReg({addrDest1}, os);
        branches[0]->mipsGen(os, con, addrDest1);

        std::string storeTo = con.dummyDec.id;;
        
        os << "lw " << con.reg(dest) << ", " << con.stackSize-con.varBinding().at(storeTo).offset <<  "(" << con.reg(29) << ")";
        os << std::endl;
        os << "addi " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", 1";
        os<< std::endl;
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);

        con.recoverReg({addrDest1}, os);

     }
    int evaluate() const { return (exp->evaluate())+1; }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
    ExpressionPtr exp;
};

#endif