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
        con.switchy().labels={};
        con.statement().breakFlag=con.makeALabel("end");
        con.enterScope();
        con.statement().offset=con.stack.back().spOffset;
        statement->look(con);
        exp->mipsGen(os, con, 2);
        //std::cout << "map size is " << con.switchy().labels.size() << std::endl;
        for(std::map<std::string, int>::iterator it=con.switchy().labels.begin(); it!=con.switchy().labels.end(); it++) {
            os << "addi " << con.reg(3) << ", " << con.reg(2) << ", -" << it->second;
            os << std::endl;
            os << "beq " << con.reg(3) << ", " << con.reg(0) << ", " << it->first;
            os << std::endl;
        }
        //std::cout << 
        if(con.switchy().def!="") {
            os << "j " << con.switchy().def;
            os << std::endl;
        }
        con.conditional().conditionalPatty=true;
        statement->mipsGen(os, con);
        os << con.statement().breakFlag << ": ";
        os << std::endl;
        con.exitScope(os);
    }
    void look(mipsCon& con) const {}
protected:
    ExpressionPtr exp;
    NodePtr statement;
};

#endif