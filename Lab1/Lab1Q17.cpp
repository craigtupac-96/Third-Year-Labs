/*
	Author: Craig Lawlor
	C00184465
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char input;
	int num;

	cout << "Enter a number 0-9" << endl;
	cin >> input;

	num = (int)input;        // convert the char to its ascii equivilent
	num -= 48;             // cheating
	cout << num << endl;

	system("pause");
    return 0;
}

