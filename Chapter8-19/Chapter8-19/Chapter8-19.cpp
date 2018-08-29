// Chapter 8 Assignment - Programming Excercise 19
//

//#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

void showChoices();

void printFirstClass(char firstClass[][]);
void printBusinessClass(char businesClass[][]);
void printEconomyClass(char economyClass[][]);

int smallestIndex(const int x[], int sizeX);

int main()
{
	//Declaring Variables
	char firstClass[2][6] = {{'*', '*', 'X', '*', 'X', 'X'},
							 {'*', 'X', '*', 'X', '*', 'X'}};
	char businessClass[5][6] = {{'*', '*', 'X', 'X', '*', 'X'},
								{'X', '*', 'X', '*', 'X', 'X'},
								{'*', 'X', '*', 'X', '*', '*'},
								{'*', 'X', '*', '*', '*', 'X'},
							    {'X', '*', '*', '*', 'X', 'X'}};
	char economyClass[6][6] = { {'*', 'X', '*', 'X', 'X', '*'},
								{'X', '*', 'X', 'X', '*', 'X'},
								{'*', 'X', '*', 'X', 'X', 'X'},
								{'*', '*', 'X', '*', 'X', '*'},
								{'*', '*', 'X', 'X', '*', 'X'},
								{'*', '*', '*', '*', 'X', '*'}};
	int choice;

	//Start of the menu
	do {
		showChoices();
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1:
			cout << printFirstClass(firstClass[][]);

		case 2:
			cout << printBusinessClass(businessClass[][]);

		case 3:
			cout << printEconomyClass(economyClass[][]);

		}
	}
	//End of menu
	while (choice != 99);
	

	//Output
	
	system("pause");

	return 0;
}

//Prints the Array
void printArray(const int list[], int listSize) {
	
}

void showChoices() {
	cout << "Enter--" << endl;
	cout << "1: To Choose an open seat in First Class." << endl;
	cout << "2: To Choose an open seat in Business Class." << endl;
	cout << "3: To Choose an open seat in Economy Class." << endl;
}

void printFirstClass(char firstClass[2][6]) {
	int row;
	
	for (row = 0; row < 2; row++)
		cout << setw(3) << firstClass[][] << " " << endl;
}

void printBusinessClass(char businesClass[][]) {

}

void printEconomyClass(char economyClass[][]) {

}

int smallestIndex(const int list[], int listSize) {
	
}