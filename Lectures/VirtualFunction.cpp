/*
Author: Craig Lawlor 
C00184465
Description: A program to explore virtual functions (Like abstract method in java)
			 setName and getName (only for show)
			 Tourist overrides virtual function showPass
			 Staff does not so it uses the base class function
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
		virtual void showPass() {
			cout << "No pass" << endl;
		};  
};

// derived class
class Tourist: public Person {
	public:
		void showPass() {
			cout << "Passport" << endl;
		}
};

// derived class
class Staff : public Person {
	public:
		// no function (base class definition will be used)
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

