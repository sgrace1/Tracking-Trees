// Main
// Tracking-Tree
// Spencer Grace, Ryan Evans, Owen Radcliffe

#include"main.h"
#include<iostream>
#include<vector>
#include"Node.h"

using std::cin;
using std::cout;
using std::endl;


int main() 
{
	string firststring;

	map<string, Node&> test;
	Node node(firststring);

	cout << "please enter the first Event" << endl;
	cin >> firststring; 
	cout << endl;
	node.generateKey();
	cout << node.getKey();




	return 0;
}