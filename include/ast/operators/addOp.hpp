#ifndef addOp_hpp
#define addOp_hpp

class addOp;
typedef const addOp* addOpPtr;

class addOp: public Expression {
public:
    addOp(ExpressionPtr left, ExpressionPtr right): exp1(left), exp2(right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        dst << "(";
        branches[0]->print(dst, con, level);
        dst << " + ";
        branches[1]->print(dst, con, level);
        dst << ")";
    }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest = con.registerSet.freeRegister();
        int addrDest1 =  con.registerSet.freeRegister();
        int oldDest = dest;
        if(con.isReturn){
            dest = addrDest1;
        } 
        
        con.flushReg({addrDest, addrDest1}, os);

        branches[0]->mipsGen(os, con, dest);
        
        branches[1]->mipsGen(os, con, addrDest);

        os << std::endl;
        os << "addu " << con.reg(oldDest) << ", " << con.reg(dest) << ", " << con.reg(addrDest);
        os<< std::endl;

        con.recoverReg({addrDest1,addrDest}, os);
        con.registerSet.untickReg(addrDest);
    }

    int evaluate() const { return exp1->evaluate()+exp2->evaluate(); }
    std::string getName() const { return ""; }

protected:
    ExpressionPtr exp1;
    ExpressionPtr exp2;
};

class unaryOp : public Expression{
    public:
        unaryOp(std::string opi, ExpressionPtr expri) { op=opi; branches.push_back(expri); }
        ~unaryOp(){}
        void print(std::ostream& dst, pycon& con, int level) const {
            dst << op;
            branches[0]->print(dst, con, level);
        }
        void pythonGen(std::ostream& os) const { }
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
                //  os << "not " << con.reg(addrDest) << ", " << con.reg(addrDest) << std::endl;
                //  os << "addiu " << con.reg(addrDest) << ", " << con.reg(addrDest) << ", 1" << std::endl;
            }
        }
        int evaluate() const { return 0; }
        std::string getName() const { return ""; }
    private:
        std::string op;
        ExpressionPtr expr;
};

#endif