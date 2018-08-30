// Chapter8v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

const int SEATS_PER_ROW = 6;

void showChoices();

void printFirstClass(string firstClass[][SEATS_PER_ROW], int firstClassRows);
void printBusinessClass(string businessClass[][SEATS_PER_ROW], int businessClassRows);
void printEconomyClass(string economyClass[][SEATS_PER_ROW], int economyClassRows);

int main()
{
	//Declaring Variables
	string firstClass[][SEATS_PER_ROW] = { {"*", "*", "X", "*", "X", "X"},
										{"*", "X", "*", "X", "*", "X"} };
	string businessClass[][SEATS_PER_ROW] = { {"*", "*", "X", "X", "*", "X"},
											{"X", "*", "X", "*", "X", "X"},
											{"*", "X", "*", "X", "*", "*"},
											{"*", "X", "*", "*", "*", "X"},
											{"X", "*", "*", "*", "X", "X"} };
	string economyClass[][SEATS_PER_ROW] = { {"*", "X", "*", "X", "X", "*"},
											{"X", "*", "X", "X", "*", "X"},
											{"*", "X", "*", "X", "X", "X"},
											{"*", "*", "X", "*", "X", "*"},
											{"*", "*", "X", "X", "*", "X"},
											{"*", "*", "*", "*", "X", "*"} };
	int choice;
	int firstClassRows = 2;
	int businessClassRows = 5;
	int economyClassRows = 6;
	int seats;
	int row;
	int col;

	//Start of the menu
	do {
		showChoices();
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1:
			printFirstClass(firstClass, SEATS_PER_ROW);
			cout << "First Class!" << endl;
			break;

		case 2:
			printBusinessClass(businessClass, SEATS_PER_ROW);
			break;
		case 3:
			printEconomyClass(economyClass, SEATS_PER_ROW);
			break;
		case 99:
			break;
		default:
			cout << "Invalid input." << endl;
		}
	}
	//End of menu
	while (choice != 99);


	//Output

	system("pause");

	return 0;
}


void showChoices() {
	cout << "Enter--" << endl;
	cout << "1: To Choose an open seat in First Class." << endl;
	cout << "2: To Choose an open seat in Business Class." << endl;
	cout << "3: To Choose an open seat in Economy Class." << endl;
}

void printFirstClass(string firstClass[][SEATS_PER_ROW], int firstClassRows) {
	int row;
	int col;

	cout << "  A   B   C   D   E   F " << endl;

	for (row = 0; row < firstClassRows; row++) {
		for (col = 0; col < SEATS_PER_ROW; col++)
			//if (col = 0)
				//cout << "Row " << (row + 1);
			cout << setw(3) << firstClass[row][col] << " ";
		cout << endl;
	} 
}

void printBusinessClass(string businessClass[][SEATS_PER_ROW], int businessClassRows) {
	int row;
	int col;

	cout << "  A   B   C   D   E   F " << endl;

	for (row = 0; row < businessClassRows; row++) {
		for (col = 0; col < SEATS_PER_ROW; col++)
			//if (col = 0)
				//cout << "Row " << (row + 1);
			cout << setw(3) << businessClass[row][col] << " ";
		cout << endl;
	}
}

void printEconomyClass(string economyClass[][SEATS_PER_ROW], int economyClassRows) {
	int row;
	int col;

	cout << "  A   B   C   D   E   F " << endl;

	for (row = 0; row < economyClassRows; row++) {
		for (col = 0; col < SEATS_PER_ROW; col++)
			//if (col = 0)
				//cout << "Row " << (row + 1);
			cout << setw(3) << economyClass[row][col] << " ";
		cout << endl;
	}
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
