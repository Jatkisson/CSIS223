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
bool isSeatTaken(int rowSelection, char colSelection);

int main()
{
	//Declaring Variables to match seating in the textbook
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
	int rowSelection;
	char colSelection;

	//Start of the menu
	do
	{
		showChoices();
		cin >> choice;
		cout << endl;

		switch (choice) {
		case 1:
			printFirstClass(firstClass, SEATS_PER_ROW);
			cout << "Seats that are vacant are marked with a *" << endl;
			cout << "Seats that are taken are marked with a X" << endl;
			cout << "Please enter the row number that you would like to book: ";
			cin >> rowSelection;
			cout << endl;
			cout << "Please enter the seat letter that you would like to book: ";
			cin >> colSelection;
			cout << endl;
			isSeatTaken(rowSelection, colSelection);
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
	cout << "1: To choose an open seat in First Class." << endl;
	cout << "2: To choose an open seat in Business Class." << endl;
	cout << "3: To choose an open seat in Economy Class." << endl;
	cout << "99: To exit the program." << endl;
}

void printFirstClass(string firstClass[][SEATS_PER_ROW], int firstClassRows) {
	int row;
	int col;

	cout << "        A   B   C   D   E   F " << endl;

	for (row = 0; row < firstClassRows; row++)
	{
		if (row + 1 < firstClassRows)
			cout << "Row " << setw(2) << row + 1 << " ";
		for (col = 0; col < SEATS_PER_ROW; col++)
			cout << setw(3) << firstClass[row][col] << " ";
		cout << endl;
	}
	cout << " " << endl;
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

bool isSeatTaken(int rowSelection, char colSelection) {
	return true;
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
