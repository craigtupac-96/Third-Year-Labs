/*
Author: Craig Lawlor
C00184465
Description: A prorgam to output star signs using a switch statement 
*/

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int option;

	cout << "Enter which option your birthday is in" << endl;
	cout << "1. January 20 - February 18" << endl;
	cout << "2. February 19 - March 20" << endl;
	cout << "3. March 21 - April 19" << endl;
	cout << "4. April 20 - May 20" << endl;
	cout << "5. May 21 - June 20" << endl;
	cout << "6. June 21 - July 22" << endl;
	cout << "7. July 23 - August 22" << endl;
	cout << "8. August 23 - September 22" << endl;
	cout << "9. September 23 - October 22" << endl;
	cout << "10. October 23 - November 21" << endl;
	cout << "11. November 22 - December 21" << endl;
	cout << "12. December 22 - January 19" << endl;

	cin >> option;

	switch (option) {
		case 1:
			cout << "Aquarius" << endl;
			break;
		case 2:
			cout << "Pisces" << endl;
			break;
		case 3:
			cout << "Aries" << endl;
			break;
		case 4:
			cout << "Taurus" << endl;
			break;
		case 5:
			cout << "Gemini" << endl;
			break;
		case 6:
			cout << "Cancer" << endl;
			break;
		case 7:
			cout << "Leo" << endl;
			break;
		case 8:
			cout << "Virgo" << endl;
			break;
		case 9:
			cout << "Libra" << endl;
			break;
		case 10:
			cout << "Scorpio" << endl;
			break;
		case 11:
			cout << "Sagittarius" << endl;
			break;
		case 12:
			cout << "Capricorn" << endl;
			break;
		defualt:
			break;
	}

	system("pause");
    return 0;
}

