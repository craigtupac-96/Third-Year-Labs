/*
	Author: Craig Lawlor
	C00184465
	Description: A program to find Size of int, float, double and char.
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << "Size of char: " << sizeof(char) << " byte" << endl;

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}

