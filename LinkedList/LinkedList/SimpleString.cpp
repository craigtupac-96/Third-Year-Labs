#include "stdafx.h"
#include "SimpleString.h"
#include <iostream>
using namespace std;


//create memory for characters and copy the str array 
SimpleString::SimpleString(int t_numofCharacters, char str[]) {
	numofCharacters = t_numofCharacters;
	characters = new char[numofCharacters];
	for (int i = 0; i < numofCharacters - 1; i++)
	{
		characters[i] = str[i];
	}
	characters[numofCharacters - 1] = 0;
}


SimpleString::SimpleString() {
	numofCharacters = 0;
	characters = NULL;
}


SimpleString::~SimpleString() {
	cout << "*---* SimpleString Destructor called" << endl << endl;
	delete characters, numofCharacters;
}


bool SimpleString::isEqual(const SimpleString &d) {
	if (numofCharacters == d.numofCharacters) {
		for (int i = 0; i < numofCharacters; i++) {
			if (characters[i] != d.characters[i]) {
				return false;
			}
		}
		return true;
	}
	else {
		return false;
	}
}


