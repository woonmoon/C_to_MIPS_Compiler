#ifndef ifStatement_hpp
#define ifStatement_hpp

class ifStatement;
typedef const ifStatement* ifStatementPtr;

class ifStatement: public Node{
public:
    ifStatement(NodePtr exp, NodePtr nod): condition(exp), executeBlock(nod) { }
    NodePtr getCondition() { return condition; }
    NodePtr getExecution() { return executeBlock; }
    void print(std::ostream& dst, pycon& con, int level) const {
        con.indent(dst);
        dst << "if (";
        condition->print(dst, con, level);
        dst<< ")";
        con.addTab();
        std::cout << std::endl;
        executeBlock->print(dst, con, level);
        con.subTab();
    }
    void pythonGen(std::ostream& os) const { }
protected:
    NodePtr condition;
    NodePtr executeBlock;    
};

#endif