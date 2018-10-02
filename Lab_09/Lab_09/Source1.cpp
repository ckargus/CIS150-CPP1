#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;


int gradeAnswer(string answers, string key, int numOfQuestions)
{
	int numCorrect = 0;
	for (int i = 0; i < numOfQuestions; i++)
	{
		if (toupper(answers[i]) == key[i])
		{
			numCorrect++;
		}
	}
	return numCorrect;
}
 
float calculatePointGrade(int numOfCorrectAnswers, int
numOfQuestions)
{
	return static_cast<float> (numOfCorrectAnswers) / numOfQuestions * 100.00;
}

string calculateLetterGrade(float pointGrade)
{
	if (pointGrade >= 90)
	{
		return "A";
	}
	else if (pointGrade < 90 && pointGrade >= 80)
	{
		return "B";
	}
	else if (pointGrade < 80 && pointGrade >= 70)
	{
		return "C";
	}
	else if (pointGrade < 70 && pointGrade >= 60)
	{
		return "D";
	}
	else if (pointGrade < 60 && pointGrade >= 50)
	{
		return "E";
	}
	else if (pointGrade < 50)
	{
		return "F";
	}
}

void readSettings(ifstream& settings, string& key, int&
	numOfQuestions)
{
	settings >> numOfQuestions;
	settings >> key;
	return;
}
int main()
{
	int numQuestions = 0;
	string key = "";
	ifstream pullSet;
	ifstream pullExamGrades;
	ofstream push;
	string firstName;
	string LastName;
	string Answers;
	int numCorrect;
	string letterGrade;
	float percent;
	pullSet.open("settings.txt");
	readSettings(pullSet, key, numQuestions);
	pullExamGrades.open("exam.txt");
	push.open("grades.txt");
	while (!pullExamGrades.eof())
	{
		pullExamGrades >> firstName;
		pullExamGrades >> LastName;
		pullExamGrades >> Answers;
		numCorrect = gradeAnswer(Answers, key, numQuestions);
		percent = calculatePointGrade(numCorrect, numQuestions);
		letterGrade = calculateLetterGrade(percent);
		push << firstName << " " << LastName << " " << percent << "% " << letterGrade << endl;
		cout << firstName << " " << LastName << " " << percent << "% " << letterGrade << endl;
	}
	system("pause");
	return 0;
}