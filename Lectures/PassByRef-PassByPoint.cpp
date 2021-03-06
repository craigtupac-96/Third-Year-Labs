/*
Author: Craig Lawlor
C00184465
Description: A program to swap by reference and swap by pointer
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap1(int &aa, int &bb) {
	int temp = aa;
	aa = bb;
	bb = temp;
}

void swap2(int *aa, int *bb) {
	int temp = *aa;
	*aa = *bb;
	*bb = temp;
}

int main()
{
	int a = 3;
	int b = 5;

	cout << "Initially a: " << a << endl; // 3
	cout << "Initially b: " << b << endl; // 5

	// pass by reference - actual value sent
	swap1(a, b);

	cout << "After swap1 a: " << a << endl; // 5
	cout << "After swap1 b: " << b << endl; // 3

	// pass by pointer - passes the address
	swap2(&a, &b);

	cout << "After swap2 a: " << a << endl; // 3
	cout << "After swap2 b: " << b << endl; // 5

	system("pause");
	return 0;
}

