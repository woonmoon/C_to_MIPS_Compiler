#ifndef node_hpp
#define node_hpp

#include <string>
#include <iostream>
#include <fstream>
#include <map>

#include <memory>

class Node;

typedef const Node *NodePtr;

class Node
{
public:
    virtual ~Node()
    {}

    virtual void print(std::ostream &dst) const =0;
    virtual void pythonGen(std::ostream& os) const =0;
};


#endif
