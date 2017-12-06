#pragma once
#include "SimpleString.h"
#include "Node.h"

class List
{
	Node *head;

public:

	List();
	~List();
	// insert a copy of d
	void insertBefore(Node *loc, const SimpleString &d);
	void insertAfter(Node *loc, const SimpleString &d);
	//push a copy of d
	void push_back(const SimpleString &d);
	void push_front(const SimpleString &d);
	//returns true if  pop_back successful. Fill d with a copy the data in the node
	bool pop_back(SimpleString &d);
	//returns true if  pop_front successful.Fill d with a copy of the data in the node

	bool pop_front(SimpleString &d);
	// erase the node and delete it from memory
	void erase(Node *loc);

	//Simple display the list to console using cout 
	void displayToConsole();
	//return a pointer the the searched node. If nullptr is returned then the node is not found
	Node *search(const SimpleString &d);
};

