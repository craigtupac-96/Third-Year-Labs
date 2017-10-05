/*
	Author: Craig Lawlor
	C00184465
	Description: A program to delete an element from an array and shift the other elements down
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 12;

int main()
{
	int myArr[length] = {34, 23, 7, 55, 8, 11};
	int index;

	cout << "Enter an index to delete the element in that position" << endl; 
	cin >> index;

	for (int i = index; i < length; i++) {
		myArr[i] = myArr[i + 1];
	}

	for (int i = 0; i < length; i++) {
		cout << myArr[i] << ", ";
	}

	system("pause");
    return 0;
}

