#ifndef ifStatement_hpp
#define ifStatement_hpp

class ifStatement;
typedef const ifStatement* ifStatementPtr;

class ifStatement: public Expression {
public:
    ifStatement(NodePtr exp, NodePtr nod): condition(exp), executeBlock(nod) { }
    NodePtr getCondition() { return condition; }
    NodePtr getExecution() { return executeBlock; }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        int evalDest=con.registerSet.freeRegister();
        std::string falseCond=con.makeALabel("falsy");
        condition->mipsGen(os, con, evalDest);
        os << "beq " << con.reg(evalDest) << ", " << con.reg(0) << ", " << falseCond;
        os << std::endl;
        con.isExecutingConditional=true;
        executeBlock->mipsGen(os, con);
        con.isExecutingConditional=false;
        os << falseCond << ":";
        os << std::endl;
    }
    int evaluate() const { return 0; }
    std::string getName() const { return ""; }
    void offset(std::ostream& os, mipsCon& con, int dest=0) const {}
protected:
    NodePtr condition;
    NodePtr executeBlock;    
};

#endif