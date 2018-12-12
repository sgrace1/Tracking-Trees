//
// Created by owen on 12/8/18.
//

#ifndef BINARYTREE_NODE_H
#define BINARYTREE_NODE_H

#include <map>
#include <iterator>
#include <string>

class Node {
private:
    map<string,Node&> LMAP;
    map<string,Node&> RMAP;
    string LHASH;
    string RHASH;
    string RAWE;
    string key;
    string parentKey;

public:
    Node(string RAWE);
    void addLeftChild(string cRAWE);
    void addRightChild(string cRAWE);
    string generateKey();
    string getKey();
};


#endif //BINARYTREE_NODE_H
