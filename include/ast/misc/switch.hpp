#ifndef switch_hpp
#define switch_hpp

class switchStatement;
typedef const switchStatement* switchStatementPtr;

class switchStatement: public Node {
public:
    switchStatement(ExpressionPtr _exp, NodePtr _statement): exp(_exp), statement(_statement) {}
    ~switchStatement() { delete exp; delete statement; }
    void print(std::ostream& dst, pycon& con, int level) const {}
    void pythonGen(std::ostream& os) const {}
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        int expEval=con.registerSet.freeRegister();
        con.flushReg({expEval}, os);
        //exp->mipsGen()

        //con.recoverReg({expEval}, os);
        con.registerSet.untickReg(expEval);
    }
protected:
    ExpressionPtr exp;
    NodePtr statement;
};

#endif