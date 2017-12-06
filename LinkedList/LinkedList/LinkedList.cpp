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
	SimpleString *stringPointer1 = new SimpleString(10, "Cupcake");
	SimpleString *stringPointer2 = new SimpleString(10, "Donut");
	SimpleString *stringPointer3 = new SimpleString(10, "Eclair");
	SimpleString *stringPointer4 = new SimpleString(10, "Froyo");
	SimpleString *stringPointer5 = new SimpleString(10, "Gingerbread");
	SimpleString *stringPointer6 = new SimpleString(10, "Jellybean");
	SimpleString *stringPointer7 = new SimpleString(10, "KitKat");
	SimpleString *stringPointer8 = new SimpleString(10, "Lollipop");
	SimpleString *stringPointer9 = new SimpleString(10, "Nougat");
	SimpleString *stringPointer10 = new SimpleString(10, "Oreo");


	List myList;
	myList.push_front(*stringPointer1);
	myList.push_front(*stringPointer2);
	myList.push_back(*stringPointer3);
	myList.push_front(*stringPointer6);
	myList.push_back(*stringPointer7);
	myList.push_front(*stringPointer8);
	myList.push_back(*stringPointer4);
	myList.push_front(*stringPointer10);


	myList.displayToConsole();


	SimpleString *frontPopper = new SimpleString();
	if (myList.pop_front(*frontPopper)) {
		cout << frontPopper->characters << " has been popped from front" << endl;
		delete frontPopper;
	}
	else {
		cout << "List is empty$$$" << endl;
	}


	SimpleString *backPopper = new SimpleString();
	if (myList.pop_back(*backPopper)) {
		cout << backPopper->characters << " has been popped from back" << endl;
		delete backPopper;
	}
	else {
		cout << "List is empty$$$" << endl;
	}


	myList.displayToConsole();

	
	// delete stringPointer1, stringPointer2, stringPointer3, stringPointer4;     ???


	system("pause");
	return 0;
}





// For testing
//cout << stringPointer1->characters << endl;
//cout << stringPointer2->characters << endl;
//cout << stringPointer3->characters << endl;
//cout << stringPointer4->characters << endl;


//Node *nodeObject1 = new Node(*stringPointer1);
//Node *nodeObject2 = new Node(*stringPointer2);
//Node *nodeObject3 = new Node(*stringPointer3);
//Node *nodeObject4 = new Node(*stringPointer4);


// For testing
//cout << nodeObject1->data->characters << endl;
//cout << nodeObject2->data->characters << endl;
//cout << nodeObject3->data->characters << endl;
//cout << nodeObject4->data->characters << endl;