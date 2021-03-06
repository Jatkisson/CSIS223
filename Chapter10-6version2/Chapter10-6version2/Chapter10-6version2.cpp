// Chapter10-6version2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <stdio.h> 

#include <string>

//#include "romanType.h"

using namespace std;

class romanType
{
public:
	romanType();
	void getRomanNumeral(string userInput);
	void setRNArray();
	int calculateInteger();
private:
	char userInput;
	char romanNumeralArray[20];
	int LENGTH;
	int rValue;
	char romanHolder;	
};


int main()
{
	string romanNumeralInput;
	romanType romanType;

	// Input the Roman Numeral as a string
	cout << "Please input a roman numeral" << endl;
	cin >> romanNumeralInput;
	cout << endl;

	romanType.getRomanNumeral(romanNumeralInput);
	romanType.setRNArray();
	romanType.calculateInteger();

}

//Default Constructor
romanType::romanType()
{
	char romanNumeralArray[20];
	rValue = 0;
	int LENGTH;
}

//Function to take the string input and convert it to a character array for processing
void romanType::getRomanNumeral(string userInput)
{
	LENGTH = userInput.length();
 
	romanNumeralArray[20];

	// Copies the string into the Roman Numeral Array
	strcpy_s(romanNumeralArray, userInput.c_str());

}

//Making all elements after the Roman Numeral array equal to 0
void romanType::setRNArray()
{
	for (int i = LENGTH; i < 20; i++)
	{
		romanNumeralArray[i] = '0';
	}
};

//Calculate the integer value of the Roman Numeral
int romanType::calculateInteger()
{
	for (int i = 0; i < LENGTH; i++)
		switch (romanNumeralArray[i])
		{
			//Calculate the value for M
		case 'M':
			rValue += 1000;
			break;
			//End calculation for M
			//Calculate the value for D
		case 'D':
			switch (romanNumeralArray[i + 1])
			{
			case 'M':
				rValue -= 500;
				break;
			default:
				rValue += 500;
				break;
			}
			break;
			//End calculation for D
			//Calculate value for C
		case 'C':
			switch (romanNumeralArray[i +1])
			{
			case 'M':
				rValue -= 100;
				break;
			case 'D':
				rValue -= 100;
				break;
			default:
				rValue += 100;
				break;
			}
			break;
			//End calculation for C
			//Calculate value for L
		case 'L':
			switch (romanNumeralArray[i + 1])
			{
			case 'M':
				rValue -= 50;
				break;
			case 'D':
				rValue -= 50;
				break;
			case 'C':
				rValue -= 50;
				break;
			default:
				rValue += 50;
				break;
			}
			break;
			//End calculation for L
			//Calculate value for X
		case 'X':
			switch (romanNumeralArray[i + 1])
			{
			case 'M':
				rValue -= 10;
				break;
			case 'D':
				rValue -= 10;
				break;
			case 'C':
				rValue -= 10;
				break;
			case 'L':
				rValue -= 10;
				break;
			default:
				rValue += 10;
				break;
			}
			break;
			//End calculation for X
			//Calculate value for V
		case 'V':
			switch (romanNumeralArray[i + 1])
			{
			case 'M':
				rValue -= 5;
				break;
			case 'D':
				rValue -= 5;
				break;
			case 'C':
				rValue -= 5;
				break;
			case 'L':
				rValue -= 5;
				break;
			case 'X':
				rValue -= 5;
				break;
			default:
				rValue += 5;
				break;
			}
			break;
			//End calculation for V
			//Calculate value for I
		case 'I':
			switch (romanNumeralArray[i + 1])
			{
			case 'M':
				rValue -= 1;
				break;
			case 'D':
				rValue -= 1;
				break;
			case 'C':
				rValue -= 1;
				break;
			case 'L':
				rValue -= 1;
				break;
			case 'X':
				rValue -= 1;
				break;
			case 'V':
				rValue -= 1;
				break;
			default:
				rValue += 1;
				break;
				//End calculation for I
			}
			break;
			//End main switch statement
			}

	//Print the integer value of the Roman Numeral
	cout << "The integer value of the Roman Numeral is: ";
	cout << rValue << endl;

	return rValue;
};