/*
Author: Craig Lawlor
C00184465
Description: A program to print a pair of elements whos product is equal to a number entered by the user
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 12;

void printPair(int product, int array[]) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (array[i] * array[j] == product) {
				cout << array[i] << ", " << array[j] << endl;
			}
		}
	}
}

int main()
{
	int myArr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int prod;

	cout << "Enter the product" << endl;
	cin >> prod;

	printPair(prod, myArr);

	system("pause");
    return 0;
}

