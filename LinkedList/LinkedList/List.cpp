#include "stdafx.h"
#include "List.h"
#include <iostream>
using namespace std;


List::List() {
	cout << "*---* The List has been created (Defualt Constructor)" << endl << endl;
	head = NULL;
}


void List::insertBefore(Node *loc, const SimpleString &d) {
	Node *new_node = new Node(d, NULL);
	if ( loc == head) {
		head = new_node;
		new_node->next = loc;
		return;
	}
	else {
		Node *current = head;
		while ( current != loc ) {
			if ( current->next == loc ) {
				new_node->next = current->next;
				current->next = new_node;
				return;
			}
			current = current->next;
		}
	}
}


void List::insertAfter(Node *loc, const SimpleString &d) {
	Node *new_node = new Node(d, NULL);
	if (loc->next == NULL) {
		loc->next = new_node;
		new_node->next = NULL;
	}
	else {
		new_node->next = loc->next;
		loc->next = new_node;
	}
}


void List::push_back(const SimpleString &d) {
	// Will create new node at the back
	Node *new_node = new Node(d, NULL);
	if (!head) {
		head = new_node;
		return;
	}
	else {
		Node *current = head;
		while (current != NULL) {
			if (current->next->next == NULL) {
				current->next->next = new_node;
				new_node->next = NULL;
				return;
			}
			current = current->next;
		}
	}
}


void List::push_front(const SimpleString &d) {
	// Will create new node at the front
	Node *new_node = new Node(d, NULL);
	if (!head) {
		head = new_node;
		return;
	}
	new_node->next = head; // new node ppoints to head
	head = new_node;       // new node is now head
	return;
}


//returns true if  pop_back successful. Fill d with a copy the data in the node
bool List::pop_back(SimpleString &d) {
	if (!head) {
		return false;
	}
	else {
		Node *current = head;
		while (current != NULL) {
			if (current->next->next == NULL) {
				d = *current->next->data;
				current->next = NULL;
				return true;
			}
			current = current->next;
		}
	}
}


//returns true if  pop_front successful.Fill d with a copy of the data in the node
bool List::pop_front(SimpleString &d) {
	if (!head) {
		return false;
	}
	else {
		d = *head->data;
		head = head->next;
		return true;
	}
}


// erase the node and delete it from memory
void List::erase(Node *loc) {
	Node *current = head;
	while (current != loc) {
		if (current->next == loc) {
			current->next = current->next->next;
			loc->data->~SimpleString();  // SimpleString destructor called
			return;
		}
		current = current->next;
	}
}


void List::displayToConsole() {
	Node *current = head;
	if (current == 0) {
		cout << "List is empty" << endl;
	}
	else {
		cout << "HEAD -> ";
		while (current != NULL) {
			cout << current->data->characters << " ";
			current = current->next;
			cout << " -> ";
		}
	}
	cout << "NULL" << endl << endl;
}


//return a pointer to the searched node. If nullptr is returned then the node is not found
Node * List::search(const SimpleString &d) {
	Node *searchNode = NULL;

	Node *current = head;
	while (current != NULL) {
		if (current->data->characters == d.characters) {
			searchNode = current;
		}
		current = current->next;
	}
	return searchNode;
} 


List::~List() {
	cout << endl << "*---*List Deconstructor called" << endl;
	Node *shadow = head;
	Node *point;
	while ( shadow != NULL ) {
		point = shadow->next;
		delete shadow;
		shadow = point;
	}
	head = NULL;
}