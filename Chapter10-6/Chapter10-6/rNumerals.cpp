#include <string>
#include <iostream>
#include <iomanip>
#include "rNumerals.h"

using namespace std;

//Constructor to inialize romanNumeral variable as an empty string
romanType::romanType() 
{
	string romanNumeral = "X";
}; 

//Function to get the user's input and place it in the variable to be converted
string getRomanNumeral(string& userRoman)
{
	string romanNumeral = userRoman;

	return romanNumeral;
};

//Function to convert the roman numeral entry to an integer
int conversionRtoI(string romanNumeral)
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
void printR(int rValue)
{
	cout << "The numerical value of the entered roman numeral is " << rValue << endl;
};

//Prints the integer value
void printI(string romanNumeral)
{
	cout << "The entered roman numeral was " << romanNumeral << endl;
};
