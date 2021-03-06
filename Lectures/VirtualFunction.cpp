/*
Author: Craig Lawlor 
C00184465
Description: A program to explore virtual functions (Like abstract method in java)
			 setName and getName (only for show)
			 Tourist overrides virtual function showPass
			 Staff does not so it uses the base class function
			 Virtual destrcutor prevents memory leaks from derived classes
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
		// virtual destructor
		virtual ~Person() {
			cout << "~Person destructor " << endl;
		} 
};

// derived class
class Tourist: public Person {
	public:
		void showPass() {
			cout << "Passport" << endl;
		}
		~Tourist() {
			cout << "~Tourist destructor" << endl;
		}
};

// derived class
class Staff : public Person {
	public:
		// no function (base class definition will be used)
		// no destructor defined
};

int main()
{
	Tourist *t = new Tourist();
	Staff *s = new Staff();
	Person *per1 = t;
	Person *per2 = s;

	per1->showPass();
	per2->showPass();

	cout << endl;

	delete per1;
	cout << "Both destructors called" << endl << endl;;

	delete per2;
	cout << "Only the base destructor is called" << endl;

	system("pause");
	return 0;
}

