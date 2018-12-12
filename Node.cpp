//
// Created by owen on 12/8/18.
//

#include <iostream>
#include <string>
#include "Node.h"

using namespace std;

Node::Node(string RAWE) {
    RAWE = RAWE;
    key = generateKey();
}

void Node::addLeftChild(string cRAWE) {
    Node newLeft = Node(cRAWE);
    Node *lp = &newLeft;
    LMAP.insert(newLeft.getKey(), newLeft&);
    LHASH = newLeft.getKey();
}

void Node::addRightChild(string cRAWE) {
    //RMAP.insert()
}

string Node::generateKey() {
    srand(time(NULL));
    char tkey[8];
    for (int i = 0; i < 8; i++) {
        tkey[i] = (char) (65 + rand()%26);
    }
    return tkey;
}

string Node::getKey() {
    return key;
}