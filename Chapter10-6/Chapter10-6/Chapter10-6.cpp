// Chapter10-6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class romanType
{
public:
	romanType(); //Constructor
	char romanNumeral;
	bool isRomanNumeral;
	int romanInteger;
	void getRomanNumeral(char user);
	void conversionRtoI();
	void printR();
	void printI();
};

int main()
{
	romanType userEntry;
	char userRoman;
	int rValue;

	cout << "Please enter a Roman Numeral to be converted: " << endl;
	cin >> userRoman;
	cout << endl;

	userEntry.getRomanNumeral(userRoman);
	userEntry.conversionRtoI();
	cout << "The value of the roman numeral is ";
	userEntry.printI();
	cout << endl;
	cout << "The entered roman numeral was ";
	userEntry.romanInteger;
	cout << endl;

	system("pause");
	return 0;
}


//Constructor to inialize romanNumeral variable as an empty string
romanType::romanType()
{
	romanInteger = 0;
	romanNumeral;
}

//Function to get the user's input and place it in the variable to be converted
void romanType::getRomanNumeral(char user)
{
	for (int i = 0; i < user.length(); i++)
	{
		if (user[i] == 'M' || 'D' || 'C' || 'L' || 'X' || 'V' || 'I')
		{
			isRomanNumeral = true;
			user = romanNumeral;
		}
		else
		{
			cout << "Invalid Entry. Please be sure to only" << endl;
			cout << "enter Roman Numerals such as M, D, C, L, X, V, I" << endl;
			isRomanNumeral = false;
			break;
		}
	}
	cout << isRomanNumeral << endl;
	cout << user << endl;
	cout << romanNumeral << endl;
};

//Function to convert the roman numeral entry to an integer
void romanType::conversionRtoI()
{
	cout << "Conversion function called" << endl;
	if (isRomanNumeral == true)
	{
		for (int i = 0; i < romanNumeral.length(); i++)
			switch (romanNumeral[i])
			{
			case 'M':
				romanInteger += 1000;
				break;
			case 'D':
				romanInteger += 500;
				break;
			case 'C':
				romanInteger += 100;
				break;
			case 'L':
				romanInteger += 50;
				break;
			case 'X':
				romanInteger += 10;
				break;
			case 'V':
				romanInteger += 5;
				break;
			case 'I':
				romanInteger += 1;
				break;
			}
	}
	cout << "romanInteger is " << romanInteger << endl;
	cout << romanNumeral.length() << endl;
};

//Prints the roman numeral value
void romanType::printR()
{
	cout << romanNumeral;
};

//Prints the integer value
void romanType::printI()
{
	cout << romanInteger;
};

