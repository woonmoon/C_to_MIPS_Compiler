#ifndef ifStatement_hpp
#define ifStatement_hpp

class ifStatement;
typedef const ifStatement* ifStatementPtr;

class ifStatement: public Node {
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
    void mipsGen(std::ostream& os, mipsCon& con) const {
        con.isConditional=true;
        condition->mipsGen(os, con);
        std::string skip=con.makeALabel("branch");
        os << skip;
        os << std::endl;
        executeBlock->mipsGen(os, con);
        os << std::endl;
        os << skip << ":";
    }

protected:
    NodePtr condition;
    NodePtr executeBlock;    
};

#endif