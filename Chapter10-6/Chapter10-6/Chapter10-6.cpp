// Chapter10-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "rNumerals.h"

using namespace std;

int main()
{
	romanType userEntry;
	string userRoman = "";
	int rValue;

	cout << "Please enter a Roman Numeral to be converted: " << endl;
	cin >> userRoman;
	cout << endl;

	userEntry.getRomanNumeral(userRoman);
	userEntry.conversionRtoI();
	cout << "The value of the roman numeral is " << userEntry.printI() << endl;
	cout << "The entered roman numeral was " << userEntry.printR() << endl;

	return 0;
}

