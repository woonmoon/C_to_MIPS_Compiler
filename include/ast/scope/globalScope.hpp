#ifndef globalScope_hpp
#define globalScope_hpp

class globalScope;
typedef const globalScope* globalScopePtr;

class globalScope: public Scope{
public:
    globalScope() { }

    globalScope(NodePtr inNode) {
        sequence.push_back(inNode);
    }

    globalScope(ListPtr inList) {
        sequence=inList->getlistOfExpressions();
    }

    void print(std::ostream& dst, pycon& con, int level) const {
        for(int i=0; i<sequence.size(); i++) {
            dst << std::endl;
            sequence[i]->print(dst, con, level);
            con.zeroTab();
            con.indent(dst);
        }
    }
    void genPython(std::ostream& os) const { }


    void mipsGen(std::ostream& os, mipsCon& con) const { 
        for(int i=0; i<sequence.size(); i++) {
            sequence[i]->mipsGen(os, con);
        
        }
    }
};

#endif