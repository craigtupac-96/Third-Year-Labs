/*
Author: Craig Lawlor
C00184465
Description: A Polymorphism program - More specific versions of Animal
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Animal {
	protected:
		string speak;
	public:
		void setSpeak(string s) {
			speak = s;
		}
};

class Dog: public Animal {
	public:
		void dogSpeak() {
			cout << "Dog says " << speak << endl;
		}
};

class Cat: public Animal {
	public:
		void catSpeak() {
			cout << "Cat says " << speak << endl;
		}
};

int main()
{
	Dog d;
	Cat c;
	Animal *animalD = &d;
	Animal *animalC = &c;

	animalD->setSpeak("Bark!");
	animalC->setSpeak("Meow!");

	d.dogSpeak();
	c.catSpeak();

	system("pause");
	return 0;
}

