#ifndef ifElseStatement_hpp
#define ifElseStatement_hpp

class ifElseStatement;
typedef const ifElseStatement* ifElseStatementPtr;

class ifElseStatement : public Node {
public:
    ifElseStatement(NodePtr exp, NodePtr nod1, NodePtr nod2): condition(exp), ifExecute(nod1), elseExecute(nod2) { }
    NodePtr getCondition() { return condition; }
    NodePtr getIfExecute() { return ifExecute; }
    NodePtr getElseExecute() { return elseExecute; }
    void print(std::ostream& dst, pycon& con, int level) const {
        
        //con.indent(dst);
        dst << "if (";
        con.subTab();
        condition->print(dst, con, level);
        con.addTab();
        dst << "):";
        dst << std::endl;
        con.addTab();
        con.indent(dst); ////////////////////////////
        ifExecute->print(dst, con, level);
        con.subTab();
        con.indent(dst);
        dst << "else:";
        dst << std::endl;
        con.addTab();
        con.indent(dst); ////////////////////////////
        elseExecute->print(dst, con, level);
        con.subTab();
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        int evalDest=con.registerSet.freeRegister();
        std::string end=con.makeALabel("end");
        std::string falseCond=con.makeALabel("falsy");
        condition->mipsGen(os, con, evalDest);
        os << "beq " << con.reg(evalDest) << ", " << con.reg(0) << ", " << falseCond;
        os << std::endl;
        ifExecute->mipsGen(os, con);
        os << "j " << end; 
        os << std::endl;
        os << falseCond << ":";
        os << std::endl;
        elseExecute->mipsGen(os, con);
        os << end << ":";
        os << std::endl;
    }

protected:
    NodePtr condition;
    NodePtr ifExecute;
    NodePtr elseExecute;
};

#endif