#ifndef arrayIndex_hpp
#define arrayIndex_hpp

class arrayIndex;
typedef const arrayIndex* arrayIndexPtr;

class arrayIndex: public Expression {
public:
    arrayIndex(ExpressionPtr _name, ExpressionPtr _ind): arrayName(_name), index(_ind) { }
    ~arrayIndex() { if(arrayName!=NULL) { delete arrayName;} if(index!=NULL) { delete index; } }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        //std::cout << "ACCESSING ARRAY " << arrayName->getName() << std::endl;
        int indexReg=con.registerSet.freeRegister();
        int constReg=con.registerSet.freeRegister();
        con.flushReg({constReg}, os);
        os << "li " << con.reg(constReg) << ", 4";
        os << std::endl;
        index->mipsGen(os, con, indexReg);
        //std::cout << "obtained the index " << std::endl;
        os << "mult " << con.reg(constReg) << ", " << con.reg(indexReg);
        os << std::endl;
        os << "mflo " << con.reg(indexReg);
        os << std::endl;
        if(con.inFrame(arrayName->getName())) {
            os << "addi " << con.reg(indexReg) << ", " << con.reg(indexReg) << ", " << con.varBinding()[arrayName->getName()].offset;
            os << std::endl;
        }else if(con.isGlobal(arrayName->getName())){
            os << "addi " << con.reg(indexReg) << ", " << con.reg(indexReg) << ", " << con.gloVar[arrayName->getName()].offset;
            os << std::endl;
        }
        //int ind_offset=con.varBinding()[arrayName->getName()].offset + (index->evaluate()*4);
        os << "li " << con.reg(constReg) << ", " << con.stackSize;
        os << std::endl;
        os << "sub " << con.reg(indexReg) << ", " << con.reg(constReg) << ", " << con.reg(indexReg);
        os << std::endl;
        os << "add " << con.reg(indexReg) << ", " << con.reg(indexReg) << ", " << con.reg(29);
        os << std::endl;
        os << "lw " << con.reg(dest) << ", 0(" << con.reg(indexReg) << ")";
        //os << "lw " << con.reg(dest) << ", " << con.stackSize - ind_offset << "(" << con.reg(29) << ")";
        os << std::endl;
        con.assign().toArray=true;
        con.assign().addressReg=indexReg;
        con.recoverReg({constReg}, os);
        con.registerSet.untickReg(constReg);
        con.registerSet.untickReg(indexReg);
        con.registerSet.untickReg(dest);
    }

    int evaluate() const { return 0; }
    std::string getName() const { return ""; }

    void offset(std::ostream& os, mipsCon& con, int dest=0) const {
        int constReg=con.registerSet.freeRegister();
        con.flushReg({constReg}, os);
        os << "li " << con.reg(constReg) << ", 4";
        os << std::endl;
        index->mipsGen(os, con, dest);
        //std::cout << "obtained the index " << std::endl;
        os << "mult " << con.reg(constReg) << ", " << con.reg(dest);
        os << std::endl;
        os << "mflo " << con.reg(dest);
        os << std::endl;
        if(con.inFrame(arrayName->getName())) {
            os << "addi " << con.reg(dest) << ", " << con.reg(dest) << ", " << con.varBinding()[arrayName->getName()].offset;
            os << std::endl;
        }else if(con.isGlobal(arrayName->getName())){
            os << "addi " << con.reg(dest) << ", " << con.reg(dest) << ", " << con.gloVar[arrayName->getName()].offset;
            os << std::endl;
        }
        os << "li " << con.reg(constReg) << ", " << con.stackSize;
        os << std::endl;
        os << "sub " << con.reg(dest) << ", " << con.reg(constReg) << ", " << con.reg(dest);
        os << std::endl;
        os << "add " << con.reg(dest) << ", " << con.reg(dest) << ", " << con.reg(29);
        os << std::endl;
        con.recoverReg({constReg}, os);
        con.registerSet.untickReg(constReg);
    }
protected:
    ExpressionPtr arrayName;
    ExpressionPtr index;
};

#endif