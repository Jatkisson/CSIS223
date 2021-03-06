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
void printInputFile(studentType list[], int listSize);
int highestTestScore(studentType list[], int listSize);
void studentsWithBestScores(studentType list[], int highestScore);

int main()
{
	//Initializing struct of student information
	ifstream studentNames;
	ofstream testScores;

	studentNames.open("studentNames.txt");
	testScores.open("testScores.txt");

	studentType students[NUMBER_OF_STUDENTS];
	int highestScore;
	
	readStudentData(studentNames, students, NUMBER_OF_STUDENTS);

	assignGrade(students, NUMBER_OF_STUDENTS);

	printInputFile(students, NUMBER_OF_STUDENTS);

	studentsWithBestScores(students, highestTestScore(students, NUMBER_OF_STUDENTS));
    
	system("pause");

	return 0;
}

//Function to read the input file
void readStudentData(ifstream& studentNames, studentType list[], int listSize) 
{
	for (int index = 0; index < listSize; index++)
	{
		studentNames >> list[index].studentFName;
		studentNames >> list[index].studentLName;
		studentNames >> list[index].testScore;
	}
}

//Function to assign a letter grade based on the test score from the input file
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

//Print the input file entries along with the determined letter grade
void printInputFile(studentType list[], int listSize)
{
	for (int index = 0; index < NUMBER_OF_STUDENTS; index++)
	{
		cout << setw(10) << left << list[index].studentFName << " ";
		cout << setw(10) << left << list[index].studentLName;
		cout << setw(4) << list[index].testScore << " ";
		cout << setw(2) << list[index].grade << endl;
	}
	cout << endl;
}

//Function to determine what the highest test score was from the group
int highestTestScore(studentType list[], int listSize)
{
	int highestScore = 0;

	for (int counter = 0; counter < NUMBER_OF_STUDENTS; counter++)
	{
		if (highestScore < list[counter].testScore)
			highestScore = list[counter].testScore;
	}
	cout << "The highest test score of the group is a " << highestScore << endl;
	return highestScore;
}

//Determine which student(s) achieved the highest test score
void studentsWithBestScores(studentType list[], int highestScore)
{
	string bestScorers;

	for (int counter = 0; counter < NUMBER_OF_STUDENTS; counter++)
	
		if (highestScore == list[counter].testScore)
			bestScorers = bestScorers + "\n" + list[counter].studentLName + ", " + list[counter].studentFName;
	
	cout << "The student(s) who managed to achieve this score were:";
	cout << bestScorers << "\n" << endl;
}