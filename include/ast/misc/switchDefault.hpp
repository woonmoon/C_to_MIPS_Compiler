#ifndef switchDefault_hpp
#define switchDefault_hpp

class switchDefault;
typedef const switchDefault* switchDefaultPtr;

class switchDefault: public Node{
public:
    switchDefault(NodePtr _ex): execute(_ex) { }
    ~switchDefault() { delete execute; }
    void print(std::ostream& dst, pycon& con, int level) const {}
    void pythonGen(std::ostream& os) const {}
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        os << con.switchy().def << ": ";
        os << std::endl;
        //std::map<std::string, int>::iterator it=con.switchy().labels.begin();
        //con.switchy().labels.erase(it);
        con.conditional().conditionalPatty=true;
        execute->mipsGen(os, con);
        con.conditional().conditionalPatty=false;
    }

    void look(mipsCon& con) const {
        con.switchy().def=con.makeALabel("default");
    }
protected:
    NodePtr execute;
};

#endif