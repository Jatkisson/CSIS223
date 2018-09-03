// Chapter9-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const int NUMBER_OF_STUDENTS = 20;

struct studentType {
	string studentFName;
	string studentLName;
	int testScore;
	char grade;
};

void readStudentData(ifstream& studentNames, studentType list[], int listSize);
void assignGrade(studentType list[], int listSize);

int main()
{
	//Initializing struct of student information
	ifstream studentNames;
	ofstream testScores;

	string inputFile;
	string outputFile;

	studentNames.open("studentNames.txt");
	testScores.open("testScores.txt");

	studentType students[NUMBER_OF_STUDENTS];
	

	readStudentData(studentNames, students, NUMBER_OF_STUDENTS);
	assignGrade(students, NUMBER_OF_STUDENTS);

	for (int index = 0; index < NUMBER_OF_STUDENTS; index++)
	{
		cout << setw(10) << students[index].studentFName << " ";
		cout << setw(10) << students[index].studentLName;
		cout << setw(4) << students[index].testScore << " ";
		cout << setw(2) << students[index].grade << endl;

	}

    
	system("pause");

	return 0;
}

void readStudentData(ifstream& studentNames, studentType list[], int listSize) 
{
	for (int index = 0; index < listSize; index++)
	{
		studentNames >> list[index].studentFName;
		studentNames >> list[index].studentLName;
		studentNames >> list[index].testScore;
	}
}

void assignGrade(studentType list[], int listSize)
{
	for (int index = 0; index < listSize; index++)
	{
		if (list[index].testScore >= 90)
			list[index].grade = 'A';
		else if (list[index].testScore >= 80)
			list[index].grade = 'B';
		else if (list[index].testScore >= 70)
			list[index].grade = 'C';
		else if (list[index].testScore >= 60)
			list[index].grade = 'D';
		else 
			list[index].grade = 'F';
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
