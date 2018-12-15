//
// Created by owen on 12/8/18.
// Modified by Spencer
//

#include <iostream>
#include <string>
#include "Node.h"
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
//#include <hash>

using namespace std;
using std::vector;

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


void Node::build(vector<string> vtemp)					//this doesnt work
{
	typedef map<string, Node& >::const_iterator MapIterator;
	for (MapIterator iter = MAP.begin(); iter != MAP.end(); iter++)
	{
		
		for (int i = 0; i < vtemp.size(); i++)
		{
			cout << "Key: " << &iter->second << endl << "Values:" << endl;
			cout << " " << vtemp[i] << endl;
		}
	}
}
/*
void Node::build(vector<string> vtemp)					//this doesnt work
{
typedef map<string, Node& >::const_iterator MapIterator;
for (int i = 0; i < vtemp.size(); i++)
{
cout << "Key: " << &iter->second << endl << "Values:" << vtemp[i] << endl;
i++;
}
}

*/

void Node::addChild(string cRAWE)
{
	Node newChild = Node(cRAWE);
	Node *p = &newChild;
	MAP.insert(pair<string, Node&>(newChild.getKey(), newChild));

	//LHASH = newLeft.getKey();
}

