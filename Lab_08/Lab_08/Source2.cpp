#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

string StringToUpper(string sen)
{
	for (int i = 0; i < sen.length(); i++)
	{
		sen[i] = toupper(sen[i]);
	}
	return sen;
}


int main()
{
	int minVerse;
	int maxVerse;
	string currentVerse;
	int numChar = 0;
	int numLines = 0;
	ifstream pull;
	ofstream push;
	pull.open("poem.txt");
	if (!pull.is_open())
	{
		cout << "Error" << endl;
	}
	else
	{
		while (!pull.eof())
		{
			if (numLines == 0)
			{
				getline(pull, currentVerse);
				minVerse = currentVerse.length();
				maxVerse = currentVerse.length();
				numChar += currentVerse.length();
				numLines++;
				push.open("poemcap.txt");
				currentVerse = StringToUpper(currentVerse);
				push << currentVerse << endl;
				cout << currentVerse << endl;
			}
			else
			{
				getline(pull, currentVerse);
				if (currentVerse.length() < minVerse)
				{
					minVerse = currentVerse.length();
				}
				else if (currentVerse.length() > maxVerse)
				{
					maxVerse = currentVerse.length();
				}
				numChar += currentVerse.length();
				numLines++;
				currentVerse = StringToUpper(currentVerse);
				push << currentVerse << endl;
				cout << currentVerse << endl;
			}
		}
		push.close();
		push.open("statpoem.txt");
		push << "Max verse is: " << maxVerse << endl;
		push << "Min verse is: " << minVerse << endl;
		push << "Poem character length is: " << numChar << endl;
		push << "Number of lines is: " << numLines << endl;
		push.close();
		cout << "Max verse is: " << maxVerse << endl;
		cout << "Min verse is: " << minVerse << endl;
		cout << "Poem character length is: " << numChar << endl;
		cout << "Number of lines is: " << numLines << endl;
		system("pause");
	}
	return 0;
}