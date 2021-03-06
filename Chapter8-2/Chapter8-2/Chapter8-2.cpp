// Chapter 8 Assignment - Programming Excercise 2
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <cstdlib>

using namespace std;

const int ARRAY_SIZE = 15;

void printArray(const int x[], int sizeX);

int smallestIndex(const int x[], int sizeX);

int main()
{
	//Declaring Variables
	int list[ARRAY_SIZE] = { 56, 34, 67, 54, 23, 87, 66, 92, 15, 32, 55, 54, 88, 22, 30 };

	//User input of variables
	cout << "List Elements: ";
	printArray(list, ARRAY_SIZE);
	cout << endl;

	//Output
	cout << "The position of the first occurence of the smallest element in list is: " << smallestIndex(list, ARRAY_SIZE) << endl;
	cout << "The smallest element in the list is: " << list[smallestIndex(list, ARRAY_SIZE)] << endl;

	system("pause");

	return 0;
}

//Prints the Array
void printArray(const int list[], int listSize) {
	int index;

	for (index = 0; index < listSize; index++)
		cout << list[index] << " ";
}

int smallestIndex(const int list[], int listSize) {
	int counter;
	int minIndex = 0;

	for (counter = 1; counter < listSize; counter++)
		if (list[minIndex] > list[counter])
			minIndex = counter;
	return minIndex;
}