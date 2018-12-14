//
// Created by owen on 12/8/18.
//

#include <iostream>
#include <string>
#include "Node.h"
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
//#include <hash>

using namespace std;

Node::Node() 
{

}

Node::Node(string RAWE) {
    RAWE = RAWE;
    key = generateKey();
}

void Node::addLeftChild(string cRAWE) {
    Node newLeft = Node(cRAWE);
    Node *lp = &newLeft;
    LMAP.insert(pair<string, Node&>(newLeft.getKey(), newLeft));
    LHASH = newLeft.getKey();
}

void Node::addRightChild(string cRAWE) {
	Node newRight = Node(cRAWE);
	Node *rp = &newRight;
	RMAP.insert(pair<string, Node&>(newRight.getKey(), newRight));
	RHASH = newRight.getKey();
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


/*void Node::build(long size, Node* & subtree)
{
	if (size == 0)
	{
		subtree = NULL;
	}
	else
	{
		subtree = new Node(string RAWE);
		btEntry_++;
		build(leftSize, &subtree->LMAP);
		build(rightSize, &subtree->RMAP);
	}

	*/

void Node::addChild(string cRAWE)
{
	Node newChild = Node(cRAWE);
	Node *p = &newChild;
	MAP.insert(pair<string, Node&>(newChild.getKey(), newChild));

	//LHASH = newLeft.getKey();
}

