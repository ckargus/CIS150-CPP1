#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct student
{
	string lastName;
	string firstName;
	int id;
	double grade;
};

double calculateAverageGrade(student students[], int numOfStudents)
{
	double sum = 0;
	for (int i = 0; i < numOfStudents; i++)
	{
		sum += students[i].grade;
	}
	return static_cast<double> (sum) / numOfStudents;
}

double calculateMinimumGrade(student students[], int numOfStudents)
{
	double min = students[0].grade;
	int position = 0;
	for (int i = 0; i < numOfStudents; i++)
	{
		if (min > students[i].grade)
		{
			min = students[i].grade;
			position = i;
		}
	}
	return position;
}

double calculateMaximumGrade(student students[], int numberOfStudents)
{
	double max = students[0].grade;
	int position = 0;
	for (int i = 0; i < numberOfStudents; i++)
	{
		if (students[i].grade > max)
		{
			max = students[i].grade;
			position = i;
		}
	}
	return position;
}

string getFileName()
{
	string file;
	cout << "Choose a file you would like to open: ";
	cin >> file;
	return file;
}

void fillArrayFromFile(ifstream& pull, student students[], int& numberOfStudents)
{
	numberOfStudents = 0;
	while (!pull.eof())
		{
			pull >> students[numberOfStudents].firstName;
			pull >> students[numberOfStudents].lastName;
			pull >> students[numberOfStudents].id;
			pull >> students[numberOfStudents].grade;
			numberOfStudents++;
		}
	return;
}

int main()
{
	int numberOfStudents = 0;
	int minPosition;
	int maxPosition;
	double avg;
	string file;
	student students[100];
	ifstream pull;
	ofstream push;
	file = getFileName();
	pull.open(file);
	if (pull.is_open())
	{
		fillArrayFromFile(pull, students, numberOfStudents);
		minPosition = calculateMinimumGrade(students, numberOfStudents);
		maxPosition = calculateMaximumGrade(students, numberOfStudents);
		avg = calculateAverageGrade(students, numberOfStudents);
		cout << "Number of Students: " << numberOfStudents << endl;
		cout << "Max grade was by: " << students[maxPosition].firstName << " " << students[maxPosition].lastName << " " << students[maxPosition].grade << endl;
		cout << "Min grade was by: " << students[minPosition].firstName << " " << students[minPosition].lastName << " " << students[minPosition].grade << endl;
		cout << "Class average: " << avg << endl;
		push.open("gradestats.txt");
		push << "Number of Students: " << numberOfStudents << endl;
		push << "Max grade was by: " << students[maxPosition].firstName << " " << students[maxPosition].lastName << " " << students[maxPosition].grade << endl;
		push << "Min grade was by: " << students[minPosition].firstName << " " << students[minPosition].lastName << " " << students[minPosition].grade << endl;
		push << "Class average: " << avg << endl;
		system("pause");
	}
	else
	{
		cout << "Error couldn't acesses that file." << endl;
	}
	
	return 0;
}