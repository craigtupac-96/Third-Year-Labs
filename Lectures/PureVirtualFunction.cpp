/*
Author: Craig Lawlor
C00184465
Description: A program to explore pure virtual functions (Like abstract method in java)
			 setName and getName (only for show)
			 virtual function =0 (with no body) in base class means derived classes must override it
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// base class
class Person {
protected:
	string name;
public:
	void setName(string n);
	string getName();
	virtual void showPass() = 0;   // pure virtual function (must be overridden)
};

// derived class
class Tourist : public Person {
public:
	void showPass() {
		cout << "Passport" << endl;
	}
};

// derived class
class Staff : public Person {
public:
	void showPass() {
		cout << "Staff pass" << endl;
	}
};

int main()
{
	Tourist t;
	Staff s;
	Person *per1 = &t;
	Person *per2 = &s;

	per1->showPass();
	per2->showPass();

	system("pause");
	return 0;
}

