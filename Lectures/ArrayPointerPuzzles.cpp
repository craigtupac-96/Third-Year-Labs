/*
Author: Craig Lawlor
C00184465
Description: Part 1 - A pointer puzzle, myptr increments and what it is pointing to is added to s
			 Part 2 - *p is adding 1 to the value each time, **pp is adding 3 to the value each time
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

// Original Array 3 8 2 4   -   New Array  7 12 6 8
void mystery(int n, int arr[]) {
	int *p = arr;
	int **pp = &p;

	int i = 0;
	while (i < n) {
		*p += 2;
		**pp += 3;

		p++;
		i++;
	}
}

int main()
{
	// Part 1

	int arr[5] = { 2, 2, 3, 2, 0 };
	int *myptr;
	int s = 0;
	myptr = arr;

	for (int i = 0; i < 5; i++) {
		s += arr[*myptr];
		myptr++;
	}

	// ouput 13
	cout << "The output is: " << s << endl << endl;

	// Part 2

	int arr2[] = { 3, 8, 2, 4 };
	mystery(4, arr2);

	for (int i = 0; i < 4; i++) {
		cout << "arr2[" << i << "] = " << arr2[i] << "\n";
	}

	// Part 3

	int myArr[4] = { 1, 2, 3, 4 };
	int *ptr;
	int **pptr = &ptr;
	ptr = myArr + 2;
	*ptr = 22;
	ptr++;
	**pptr = 23;

	for (int i = 0; i < 4; i++) {
		cout << myArr[i] << endl;
	} //  1 2 22 23

	system("pause");
	return 0;
}

