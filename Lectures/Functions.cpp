/*
	Author: Craig Lawlor	
	C00184465
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

void printEm(int num);       // prototype (must have function below it in the program)

int addEm(int num1, int num2) {

	int sum = num1 + num2;

	return sum;
}

void printEm(int num) {                       // no return
	cout << num << endl;
}

int main()
{
	int number1 = 10;
	int number2 = 20;
	int sum;

	// function calls
	sum = addEm(number1, number2);             
	printEm(sum);

	system("pause");
    return 0;
}

