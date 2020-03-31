#ifndef switchCase_hpp
#define switchCase_hpp

class switchCase;
typedef const switchCase* switchCasePtr;

class switchCase: public Node{
public:
    switchCase(ExpressionPtr _exp, NodePtr _ex): exp(_exp), execute(_ex) { }
    ~switchCase() { delete exp; delete execute; }
    void print(std::ostream& dst, pycon& con, int level) const {}
    void pythonGen(std::ostream& os) const {}
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        //std::cout << "made it to switch case" << std::endl;
        std::map<std::string, int>::iterator it=con.switchy().labels.begin();
        os << it->first << ": ";
        os << std::endl;
        con.switchy().labels.erase(it);
        con.conditional().conditionalPatty=true;
        execute->mipsGen(os, con);
        //con.conditional().conditionalPatty=false;
    }

    void look(mipsCon& con) const {
        //std::cout << "AT LOOK FUNCTION! with eval " << exp->evaluate() << std::endl;
        std::string label=con.makeALabel("case");
        con.switchy().labels[label]=exp->evaluate();
        //std::cout << "AT LOOK FUNCTION! " << label << " with eval " << exp->evaluate() << std::endl;
    }
protected:
    ExpressionPtr exp;
    NodePtr execute;
};

#endif