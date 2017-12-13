/*
Author: Craig Lawlor
C00184465
Description: A program to implement a linked list
*/
#include "stdafx.h"
#include <iostream>
#include "SimpleString.h"
#include "Node.h"
#include "List.h"
using namespace std;

int main()
{
	char string1[] = "Cupcake";
	char string2[] = "Donut";
	char string3[] = "Eclair";
	char string4[] = "Froyo";
	char string5[] = "Gingerbread";
	char string6[] = "Jellybean";
	char string7[] = "KitKat";
	char string8[] = "Lollipop";
	char string9[] = "Nougat";
	char string10[] = "Oreo";
	char string11[] = "Lollipop";

	
	int length1 = sizeof(string1) / sizeof(*string1);
	int length2 = sizeof(string2) / sizeof(*string2);
	int length3 = sizeof(string3) / sizeof(*string3);
	int length4 = sizeof(string4) / sizeof(*string4);
	int length5 = sizeof(string5) / sizeof(*string5);
	int length6 = sizeof(string6) / sizeof(*string6);
	int length7 = sizeof(string7) / sizeof(*string7);
	int length8 = sizeof(string8) / sizeof(*string8);
	int length9 = sizeof(string9) / sizeof(*string9);
	int length10 = sizeof(string10) / sizeof(*string10);
	int length11 = sizeof(string11) / sizeof(*string11);


	SimpleString *stringPointer1 = new SimpleString(length1, string1);
	SimpleString *stringPointer2 = new SimpleString(length2, string2);
	SimpleString *stringPointer3 = new SimpleString(length3, string3);
	SimpleString *stringPointer4 = new SimpleString(length4, string4);
	SimpleString *stringPointer5 = new SimpleString(length5, string5);
	SimpleString *stringPointer6 = new SimpleString(length6, string6);
	SimpleString *stringPointer7 = new SimpleString(length7, string7);
	SimpleString *stringPointer8 = new SimpleString(length8, string8);
	SimpleString *stringPointer9 = new SimpleString(length9, string9);
	SimpleString *stringPointer10 = new SimpleString(length10, string10);
	SimpleString *stringPointer11 = new SimpleString(length11, string11);


	List myList;
	myList.push_front(*stringPointer1);
	myList.push_front(*stringPointer2);
	myList.push_back(*stringPointer3);
	myList.push_back(*stringPointer4);
	myList.push_front(*stringPointer6);
	myList.push_back(*stringPointer7);
	myList.push_front(*stringPointer8);
	myList.push_back(*stringPointer9);


	myList.displayToConsole();


	if (stringPointer11->isEqual(*stringPointer8)) {
		cout << "String object 11 is equal to String object 8" << endl << endl;
	}
	else {
		cout << "String object 11 is not equal to String object 8" << endl << endl;
	}


	// Insert before
	Node *findIt;
	findIt = (myList.search(*stringPointer7));   // using search function 
	if (findIt != NULL) {
		myList.insertBefore(findIt, *stringPointer5);
	}
	else {
		cout << "Node not found" << endl;
	}


	// Insert after
	Node *findThis;
	findThis = (myList.search(*stringPointer7));   // using search function 
	if (findThis != NULL) {
		myList.insertAfter(findThis, *stringPointer5);
	}
	else {
		cout << "Node not found" << endl;
	}


	// pop front
	SimpleString *frontPopper = new SimpleString();
	if (myList.pop_front(*frontPopper)) {
		cout << frontPopper->characters << " has been popped from front" << endl;
		delete frontPopper;
	}
	else {
		cout << "List is empty" << endl;
	}


	// pop back
	SimpleString *backPopper = new SimpleString();
	if (myList.pop_back(*backPopper)) {
		cout << backPopper->characters << " has been popped from back" << endl;
		backPopper->~SimpleString();
	}
	else {
		cout << "List is empty" << endl;
	}


	// erase eclair
	Node *eraseNode;
	eraseNode = (myList.search(*stringPointer3));   // using search function 
	if (eraseNode != NULL) {
		cout << eraseNode->data->characters << " found and erased" << endl;
		myList.erase(eraseNode);
	}
	else {
		cout << "Node not found" << endl;
	}


	// Trying to Print the char array in stringPointer3 after deletion
	cout << stringPointer3->characters << endl;


	myList.displayToConsole();


	Node *findNode;
	findNode = (myList.search(*stringPointer6));
	if (findNode != NULL) {
		cout << findNode->data->characters << " found" << endl;
	}
	else {
		cout << "Node not found" << endl;
	}


	// deleting the list
	myList.~List();
	myList.displayToConsole();


	system("pause");
	return 0;
}