// Chapter10-6version2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>

//#include "romanType.h"

using namespace std;

class romanType
{
public:
	romanType();
	void getRomanNumeral(string userInput);
	void setRNArray();
	void getRNArray(string userInput);
	void printRNArray();
	void calculateInteger();
private:
	char userInput;
	char romanNumeralArray[20];
	int length;
	int rValue;
	char romanHolder;
	
};


int main()
{
	string romanNumeralInput;
	romanType input;

	cout << "Please input a roman numeral" << endl;
	cin >> romanNumeralInput;
	cout << endl;

	input.getRomanNumeral(romanNumeralInput);
	

}

romanType::romanType()
{
	char romanNumeralArray[20];
	rValue = 0;
	length = 0;
	romanHolder = 0;
}

void romanType::getRomanNumeral(string userInput)
{
	int length = userInput.length();
	char romanHolder;

	cout << length << endl;

	setRNArray();
	getRNArray(userInput);
	printRNArray();
	calculateInteger();
	
}

//Making all elements of the Roman Numeral Array equal to 0
void romanType::setRNArray()
{
	for (int i = 0; i < 20; i++)
	{
		romanNumeralArray[i] = '0';
	}
	cout << "ran setRNArray" << endl;
};

//Putting the user entry into the Roman Numeral Array
void romanType::getRNArray(string userInput)
{
	for (int i = 0; i < length; i++)
	{
		romanHolder = userInput[i];
		romanNumeralArray[i] = romanHolder;
	}
	cout << "ran getRNArray" << endl;
};

//Printing out all array elements that are not equal to zero
void romanType::printRNArray()
{
	for (int i = 0; i < length; i++)
	{
		if (romanNumeralArray[i] != '0')
			cout << romanNumeralArray[i] << endl;
	}
};

void romanType::calculateInteger()
{
	for (int i = 0; i < length; i++)
		switch (romanNumeralArray[i])
		{
		case 'M':
			rValue += 1000;
			break;
		case 'D':
			if (romanNumeralArray[i + 1] == 'M')
				rValue -= 500;
			else
				rValue += 500;
			break;
		case 'C':
			if (romanNumeralArray[i + 1] == 'M' || 'D')
				rValue -= 100;
			else
			rValue += 100;
			break;
		case 'L':
			if (romanNumeralArray[i + 1] == 'M' || 'D' || 'C')
				rValue -= 50;
			else
			rValue += 50;
			break;
		case 'X':
			if (romanNumeralArray[i + 1] == 'M' || 'D' || 'C' || 'L')
				rValue -= 10;
			else
			rValue += 10;
			break;
		case 'V':
			if (romanNumeralArray[i + 1] == 'M' || 'D' || 'C' || 'L' || 'X')
				rValue -= 5;
			else
			rValue += 5;
			break;
		case 'I':
			if (romanNumeralArray[i + 1] == 'M' || 'D' || 'C' || 'L' || 'X' || 'V')
				rValue -= 1;
			else
			rValue += 1;
			break;
			}

	cout << "The integer value of the Roman Numeral is: ";
	cout << rValue << endl;
};