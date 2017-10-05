/*
	Author: Craig Lawlor
	C00184465
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	int bin = 0, power = 1, digit , dec = 0, binary, decimal;
	char choice;
	
	cout << "Enter 'b' for binary to decimal or 'd' for deciaml to binary" << endl;
	cin >> choice;

	if (choice == 'b') {
		cout << "Enter a binary number" << endl;
		cin >> bin;

		binary = bin;

		while (bin > 0) {
			digit = bin % 10;             // Getting the last digit
			if (digit == 1) {             // If the digit is a 1 multiply it by the power
				dec += power;
			}

			bin /= 10;                    // remove the last digit
			power = 2 * power;            // increase the power for the next iteration
		}
		cout << binary << " in decimal: " << dec << endl;
	}
	else if(choice == 'd') {
		cout << "Enter a deciaml number" << endl;
		cin >> dec;

		decimal = dec;

		while (dec > 0) {
			bin = (bin * 10) + dec % 2;
			dec /= 2;
		}
		while (bin / 10 != 0) {          // reusing code from question 11
			cout << bin % 10;            
			bin /= 10;					 
		}
		cout << bin << endl;            // print what is left
	}
	
	system("pause");
    return 0;
}

