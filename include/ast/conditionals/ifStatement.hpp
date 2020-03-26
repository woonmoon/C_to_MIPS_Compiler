#ifndef ifStatement_hpp
#define ifStatement_hpp

class ifStatement;
typedef const ifStatement* ifStatementPtr;

class ifStatement: public Expression {
public:
    ifStatement(NodePtr exp, NodePtr nod): condition(exp), executeBlock(nod) { }
    NodePtr getCondition() { return condition; }
    NodePtr getExecution() { return executeBlock; }
    void print(std::ostream& dst, pycon& con, int level) const {
        //con.indent(dst);
        dst << "if (";
        con.subTab();
        condition->print(dst, con, level);
        con.addTab();
        dst<< "):";
        con.addTab();
        con.indent(dst); /////////////////////
        executeBlock->print(dst, con, level);
        con.subTab();
    }
    void pythonGen(std::ostream& os) const { }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        int evalDest=con.registerSet.freeRegister();
        std::string falseCond=con.makeALabel("falsy");
        condition->mipsGen(os, con, evalDest);
        os << "beq " << con.reg(evalDest) << ", " << con.reg(0) << ", " << falseCond;
        os << std::endl;
        con.conditional().conditionalPatty=true;
        executeBlock->mipsGen(os, con);
        con.conditional().conditionalPatty=false;
        os << falseCond << ":";
        os << std::endl;
    }
    int evaluate() const { return 0; }
protected:
    NodePtr condition;
    NodePtr executeBlock;    
};

#endif