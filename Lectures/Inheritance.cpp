/*
Author: Craig Lawlor
C00184465
Description: An inheritance program
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// base class
class Person {
	private:
		string name;
		int age;

	public:
		void setName(string n);
		void setAge(int a);
		string getName();
		int getAge();
};

void Person::setName(string n) {
	name = n;
}

string Person::getName() {
	return name;
}

void Person::setAge(int a) {
	age = a;
}

int Person::getAge() {
	return age;
}

// derived class - Teacher class only to show another type of Person
class Teacher: public Person {};

// derived class
class Student: public Person {
	private:
		int studentNo;
	public:
		void setStudentNo(int num);
		int getStudentNo();
};

void Student::setStudentNo(int num) {
	studentNo = num;
}

int Student::getStudentNo() {
	return studentNo;
}

int main()
{
	Person per;      // Not used
	Teacher teach;   // Not used
	Student student;

	student.setName("Craig");
	student.setAge(27);
	student.setStudentNo(21385);

	cout << "Student name: " << student.getName() << endl;
	cout << "Student age: " << student.getAge() << endl;
	cout << "Student number: " << student.getStudentNo() << endl;

	system("pause");
	return 0;
}

