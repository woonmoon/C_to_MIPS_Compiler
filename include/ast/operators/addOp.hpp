#ifndef addOp_hpp
#define addOp_hpp

class addOp;
typedef const addOp* addOpPtr;

class addOp: public Expression {
public:
    addOp(NodePtr left, NodePtr right) { branches.push_back(left); branches.push_back(right); }
    void print(std::ostream& dst, pycon& con, int level) const {
        branches[0]->print(dst, con, level);
        dst << " + ";
        branches[1]->print(dst, con, level);
    }
    void pythonGen(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        
        int addrDest = con.registerSet.freeRegister();
        
        branches[0]->mipsGen(os, con, dest);
        con.flushReg({addrDest}, os);
        branches[1]->mipsGen(os, con, addrDest);

        os << std::endl;
        os << "addu " << con.reg(dest) << ", " << con.reg(dest) << ", " << con.reg(addrDest);
        os<< std::endl;

        con.recoverReg({addrDest}, os);
    }

    int evaluate() const { return 0; }
    std::string getName() const { return ""; }

protected:
};

class unaryOp : public Expression{
    public:
        unaryOp(std::string opi, NodePtr expri) { op=opi; branches.push_back(expri); }
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
                 os << "not " << con.reg(addrDest) << ", " << con.reg(addrDest) << std::endl;
                 os << "addiu " << con.reg(addrDest) << ", " << con.reg(addrDest) << ", 1" << std::endl;
            }
        }
        int evaluate() const { return 0; }
        std::string getName() const { return ""; }
    private:
        std::string op;
        ExpressionPtr expr;
};

#endif