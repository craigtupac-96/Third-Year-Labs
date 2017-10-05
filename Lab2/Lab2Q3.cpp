/*
Author: Craig Lawlor
C00184465
Description: A program to find an int in an array and print the index
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 10;

void findNum(int arr[], int num) {
	bool found = false;
	int index;

	for (int i = 0; i < length; i++) {
		if (arr[i] == num) {
			found = true;
			index = i;
		}
	}
	if (found) {
		cout << num << " found at index " << index << endl;
	}
	else {
		cout << "-1" << endl;
	}
}

int main()
{
	int myArr[length];
	int theNum;

	for (int i = 0; i < sizeof(myArr) / sizeof(*myArr); i++) {
		cout << "Enter a number" << endl;
		cin >> myArr[i];
	}
	
	cout << "Enter a number to find in the array" << endl;
	cin >> theNum;
	
	findNum(myArr, theNum);

	system("pause");
	return 0;
}