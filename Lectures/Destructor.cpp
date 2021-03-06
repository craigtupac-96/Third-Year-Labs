/*
Author: Craig Lawlor
C00184465
Description: A program to explore destructors
*/

#include "stdafx.h"
#include <iostream>
using namespace std;


class MyClass {
	public:
		int num;

		// constructor
		MyClass(int n) {
			num = n;
		}

		// destructor
		~MyClass() {
			cout << "~num" << num << endl;
		}
};

int main()
{
	MyClass num1(1);
	MyClass* ptr;

	{ // nested scope
		MyClass num2(2);
		ptr = new MyClass(3);
	} // num2 out of scope - destrcutor called

	delete ptr;        // calls the destructor of num3

	system("pause");   // num1 destructor called after pause as program closes
	return 0;
}

