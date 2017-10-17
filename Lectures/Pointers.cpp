/*
Author: Craig Lawlor
C00184465
Description: A program to lay out the basics of pointers

A pointer is a variable whose value is the address of another variable.
	Note:     *pointer - declaring pointer          pointer = &variable - assigning pointer to variable address
	Printing: *pointer - value stored at pointer    pointer - the address of pointer
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int myVar1 = 10;
	int myVar2 = myVar1;
	int myVar3 = 30;
	int *myPoint1;
	int *myPoint2;

	// the addresses will be different
	myPoint1 = &myVar1;    
	myPoint2 = &myVar2;

	cout << "myVar1 value: " << myVar1 << endl;
	cout << "myVar2 value: " << myVar2 << endl;
	cout << "myPoint1 address: " << myPoint1 << endl;
	cout << "myPoint2 address: " << myPoint2 << endl;
	cout << "Value stored at myPoint1: " << *myPoint1 << endl;
	cout << "Value stored at myPoint2: " << *myPoint2 << endl;

	cout << endl;

	// Changing myVar1 value
	myVar1 = 20;
	cout << "myVar1 value: " << myVar1 << endl;
	cout << "myVar2 value: " << myVar2 << endl;
	cout << "myPoint1 address: " << myPoint1 << endl;             // the address is the same after the change
	cout << "myPoint2 address: " << myPoint2 << endl;
	cout << "Value stored at myPoint1: " << *myPoint1 << endl;    // the value at the address has changed
	cout << "Value stored at myPoint2: " << *myPoint2 << endl;

	cout << endl;

	// Printing myVar3 address without pointer variable
	cout << "myVar3 value: " << myVar3 << endl;
	cout << "myVar3 address: " << &myVar3 << endl;

	system("pause");
    return 0;
}

