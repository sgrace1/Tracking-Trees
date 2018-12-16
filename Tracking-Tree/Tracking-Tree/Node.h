//
// Created by owen on 12/8/18.
// Modified by Spencer and Ryan
//

#ifndef BINARYTREE_NODE_H
#define BINARYTREE_NODE_H

#include <map>
#include <iterator>
#include <string>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>

using std::string;
using std::map;

class Node {
public:
	Node();
    Node(string RAWE);
	void addChild(string cRAWE);
    void addLeftChild(string cRAWE);
    void addRightChild(string cRAWE);
    static string generateKey();
    string getKey();
    void display(std::ostream& outfile);
    void displayLeft(std::ostream & outfile, BinaryNode * subtree, std::string prefix);
    void displayRight(std::ostream & outfile, BinaryNode * subtree, std::string prefix);
	//void build(long size, Node* & subtree);
private:
	map<string, Node&> MAP;
	map<string, Node&> LMAP;
	map<string, Node&> RMAP;
	string LHASH;
	string RHASH;
	string RAWE;
	string key;
	string parentKey;
	int rightSize;
	int leftSize;

};





#endif //BINARYTREE_NODE_H
