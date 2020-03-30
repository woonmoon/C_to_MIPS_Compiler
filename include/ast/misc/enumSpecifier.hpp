#ifndef enumSpecifier_hpp
#define enumSpecifier_hpp

class enumSpecifier;
typedef const enumSpecifier* enumSpecifierPtr;

class enumSpecifier: public Node{
public:

    enumSpecifier(std::string _id, NodePtr _list): id(_id), notAnInt(_list) {}
    
    enumSpecifier(NodePtr _list): notAnInt(_list) { id=""; }

    void print(std::ostream& dst, pycon& con, int level) const {}
    void pythonGen(std::ostream& os) const {}

    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        if(notAnInt!=NULL) {
            if(con.stack.size()>1) {
                notAnInt->mipsGen(os, con);
            }else{ //global
                os << ".data";
                os << std::endl;
                notAnInt->mipsGen(os, con);
                os << ".text";
                os << std::endl;
            }
        }
    }
protected:
    std::string id;
    NodePtr notAnInt;
};

#endif