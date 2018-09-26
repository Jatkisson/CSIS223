/*
#include <iostream>
#include <string>
#include "romanType.h"

using namespace std;

//Constructor to inialize romanNumeral variable as an empty string
romanType::romanType()
{
	//romanNumeral = "";
	rValue = 0;
}

//Function to get the user's input and place it in the variable to be converted
void romanType::getRomanNumeral(string user)
{
	for (int i = 0; i < user.length(); i++)
	{
		if (user[i] == 'M' || 'D' || 'C' || 'L' || 'X' || 'V' || 'I')
			string romanNumeral = user;
		else
		{
			cout << "Invalid Entry. Please be sure to only" << endl;
			cout << "enter Roman Numerals such as M, D, C, L, X, V, I" << endl;
		}
	}
};

//Function to convert the roman numeral entry to an integer
int romanType::conversionRtoI()
{
	int length = romanNumeral.length();
	int rValue = 0;

	for (int i = 0; i < length; i++)
		switch (romanNumeral[i])
		{
		case 'M':
			rValue += 1000;
			break;
		case 'D':
			rValue += 500;
			break;
		case 'C':
			rValue += 100;
			break;
		case 'L':
			rValue += 50;
			break;
		case 'X':
			rValue += 10;
			break;
		case 'V':
			rValue += 5;
			break;
		case 'I':
			rValue += 1;
			break;
		}


	return rValue;
};

//Prints the roman numeral value
string romanType::printR() const
{
	return romanNumeral;
};

//Prints the integer value
int romanType::printI() const
{
	return rValue;
};
*/