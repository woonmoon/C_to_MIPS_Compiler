#ifndef switchCase_hpp
#define switchCase_hpp

class switchCase;
typedef const switchCase* switchCasePtr;

class switchCase: public Node{
public:
    switchCase(ExpressionPtr _exp, NodePtr _ex): exp(_exp), execute(_ex) {}
    ~switchCase() { delete exp; delete execute; }
    void print(std::ostream& dst, pycon& con, int level) const {}
    void pythonGen(std::ostream& os) const {}
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        int eval=con.registerSet.freeRegister();
        con.flushReg({eval}, os);
        exp->mipsGen(os, con, eval); //evaluate 
    }

    void look(mipsCon& con) {
        std::string label=con.makeALabel("case");
        con.switchy().labels[label]=exp->evaluate();
    }
    void look(mipsCon& con) const {}
protected:
    ExpressionPtr exp;
    NodePtr execute;
};

#endif