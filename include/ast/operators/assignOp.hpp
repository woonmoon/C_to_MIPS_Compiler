#ifndef assignOp_hpp
#define assignOp_hpp

class assignOp;
typedef const assignOp* assignOpPtr;

class assignOp: public Expression {
public:
    assignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " = ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 
        //std::cout << "i'M AN ASSIGNMENT OPERATOR" << std::endl;
        int addrDest = con.registerSet.freeRegister();
        con.flushReg({addrDest}, os);

        branches[0]->mipsGen(os, con, addrDest);
        if(!con.assign().toArray) {
            std::string storeTo = con.dummyDec.id;
            branches[1]->mipsGen(os, con, addrDest);
            con.writeToStack(addrDest, con.varBinding().at(storeTo).offset, os);
        }else{
            con.assign().toArray=false;
            branches[1]->mipsGen(os, con, addrDest);
            os << "sw " << con.reg(addrDest) << ", 0(" << con.reg(con.assign().addressReg) << ")";
            os << std::endl;
            con.registerSet.untickReg(con.assign().addressReg);
        }
        con.recoverReg({addrDest}, os);
        con.registerSet.untickReg(addrDest);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class plusAssignOp;
typedef const plusAssignOp* plusAssignOpPtr;

class plusAssignOp: public Expression {
public:
    plusAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "add " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class subAssignOp;
typedef const subAssignOp* subAssignOpPtr;

class subAssignOp: public Expression {
public:
    subAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "sub " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class multAssignOp;
typedef const multAssignOp* multAssignOpPtr;

class multAssignOp: public Expression {
public:
    multAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "mult " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        os << "mflo " << con.reg(addrDest1) << std::endl;
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class divAssignOp;
typedef const divAssignOp* divAssignOpPtr;

class divAssignOp: public Expression {
public:
    divAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "div " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        os << "mflo " << con.reg(addrDest1) << std::endl;
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class modAssignOp;
typedef const modAssignOp* modAssignOpPtr;

class modAssignOp: public Expression {
public:
    modAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "div " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        os << "mfhi " << con.reg(addrDest1) << std::endl;
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class andAssignOp;
typedef const andAssignOp* andAssignOpPtr;

class andAssignOp: public Expression {
public:
    andAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "and " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class orAssignOp;
typedef const orAssignOp* orAssignOpPtr;

class orAssignOp: public Expression {
public:
    orAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "or " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class xorAssignOp;
typedef const xorAssignOp* xorAssignOpPtr;

class xorAssignOp: public Expression {
public:
    xorAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "xor " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class leftShiftAssignOp;
typedef const leftShiftAssignOp* leftShiftAssignOpPtr;

class leftShiftAssignOp: public Expression {
public:
    leftShiftAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "sllv " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

class rightShiftAssignOp;
typedef const rightShiftAssignOp* rightShiftAssignOpPtr;

class rightShiftAssignOp: public Expression {
public:
    rightShiftAssignOp(ExpressionPtr left, ExpressionPtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const { }
    void pythonGen(std::ostream& os) const { }

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const { 

        int addrDest1 = con.registerSet.freeRegister();
        int addrDest2 = con.registerSet.freeRegister();

        con.flushReg({addrDest1, addrDest2}, os);

        branches[0]->mipsGen(os, con, addrDest1);
        std::string storeTo = con.dummyDec.id;
        branches[1]->mipsGen(os, con, addrDest2);

        os << "srav " << con.reg(addrDest1) << ", " << con.reg(addrDest1) << ", " << con.reg(addrDest2) << std::endl; 
        con.writeToStack(addrDest1, con.varBinding().at(storeTo).offset, os);
        con.recoverReg({addrDest2, addrDest1}, os);
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void look(mipsCon& con) const {}
protected:
};

#endif