/*
Author: Craig Lawlor
C00184465
Description: A program to search an array, remove element and left shift
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	int pos;
	int arr[] = {6, 3, 5, 8, 1};

	cout << "Enter number to be removed" << endl;
	cin >> num;

	for (int i = 0; i < 5; i++) {
		if (arr[i] == num) {
			arr[i] = arr[i + 1];
			num = arr[i + 1];
		}
	}
	arr[4] = 0;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ", ";
	}

	system("pause");
	return 0;
}

