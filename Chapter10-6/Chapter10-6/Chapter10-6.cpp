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

	cout << "Please enter a Roman Numeral to be converted: " << endl;
	cin >> userRoman;
	cout << endl;

	userEntry.getRomanNumeral(userRoman);
	userEntry.conversionRtoI(rValue);
	userEntry.printI(rValue);

	return 0;
}

