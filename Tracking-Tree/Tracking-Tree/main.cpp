// Main
// Tracking-Tree
// Spencer Grace, Ryan Evans, Owen Radcliffe

#include"main.h"
#include<iostream>
#include<vector>
#include"Node.h"
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() 
{
	bool done = false;
	vector<string> key;
	string firststring;


	map<string, Node&> test;
	Node node(firststring);

	cout << "please enter the first Event" << endl;
	cin >> firststring; 
	cout << endl;
	node.generateKey();
	cout << node.getKey();
	
	key.push_back(firststring);
	
	cout << key[0];
	while (!done) 
	{
		string temp;
		cout << "Please enter a string you would like to store. Type 'b' to build the keys. Type 'd' when done" << endl;
		cin >> temp;
		if (temp == "d" || temp == "D") 
		{
			done = true;
			break;
		}
		Node tnode(temp);
		tnode.addChild(temp);
		key.push_back(temp);
		if (temp == "b" || temp == "B") 
		{
			tnode.build(key);
		}
		


	}

	cout << "i got here";



	return 0;
}