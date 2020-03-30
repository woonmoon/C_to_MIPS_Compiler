#ifndef enumerator_hpp
#define enumerator_hpp

class Enumerator;
typedef const Enumerator* EnumeratorPtr; 

class Enumerator: public Node{
public:
    Enumerator(std::string _id, ExpressionPtr _exp): id(_id), exp(_exp) { }
    ~Enumerator() { if(exp!=NULL) { delete exp; } }
    void print(std::ostream& dst, pycon& con, int level) const {}
    void pythonGen(std::ostream& os) const {}
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        if(exp==NULL) { con.enumerator().lastEl=0; }else{ con.enumerator().lastEl=exp->evaluate(); }
        if(con.stack.size()>1) { //not global
            con.stackSize+=4;
            os << "addi " << con.reg(29) << ", " << con.reg(29) << ", -4";
            os << std::endl;
            con.varBinding()[id]={4, static_cast<uint32_t>(con.stackSize), {}};
            int reg=con.registerSet.freeRegister();
            con.flushReg({reg}, os);
            os << "li " << con.reg(reg) << ", " << con.enumerator().lastEl;
            os << std::endl;
            con.writeToStack(reg, con.varBinding()[id].offset, os);
            con.recoverReg({reg}, os);
            con.registerSet.untickReg(reg);
        }else{ //global
            con.stackSize+=4;
            //os << "addi " << con.reg(29) << ", " << con.reg(29) << ", -4";
            //os << std::endl;
            con.gloVar[id].size=4;
            //con.gloVar[id].offset=static_cast<uint32_t>(con.stackSize);
            //con.gloVar[id].arraySize={};
            os << id << ": .word " << con.enumerator().lastEl;
            os << std::endl;
        }
    }
    void look(mipsCon& con) const {}
protected:
    std::string id;
    ExpressionPtr exp;
};

#endif