#ifndef pointDeclarator_hpp
#define pointDeclarator_hpp

class pointDeclarator;
typedef const pointDeclarator* pointDeclaratorPtr;

class pointDeclarator: public Node{
public:
    pointDeclarator(ListPtr _pt, NodePtr _dec): point(_pt), decl(_dec) { }
    ~pointDeclarator() { delete point; delete decl; }
    void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const {
        //std::cout << "point declarator made" << std::endl;
        if(!con.funcDec().initialize) { con.dummyDec.size=4; }
        decl->mipsGen(os, con);
        //std::cout << con.dummyDec.id << std::endl;
    }

protected:
    ListPtr point;
    NodePtr decl;
};

#endif