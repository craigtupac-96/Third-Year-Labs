/*
Author: Craig Lawlor
C00184465
Description: A program to insert a number into an index specified by the user
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 12;

int main()
{
	int myArr[length] = {7, 12, 3, 14};
	int count = 4;
	int element;
	int index;
	int option = 0;
	
	cout << "Enter a number" << endl;
	cin >> element;

	cout << "Enter the index position to insert" << endl;
	cin >> index;

	for (int i = count; i >= index; i--) {
		myArr[i + 1] = myArr[i];
	}
	myArr[index] = element;

	for (int i = 0; i < length; i++) {
		cout << myArr[i] << endl;
	}
	system("pause");
	return 0;
}