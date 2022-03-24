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
     ~Node(){}
    virtual void mipsGen(std::ostream& os, mipsCon& con, int dest=0) const = 0;
};


#endif
