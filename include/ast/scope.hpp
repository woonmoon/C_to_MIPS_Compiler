#ifndef scope_hpp
#define scope_hpp

class Scope: public Node {
public:
    Scope(std::vector<NodePtr> seq): sequence(seq);
protected:
    std::vector<Nodeptr> sequence;
};

#endif