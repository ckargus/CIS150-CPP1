//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//
//void ProcessFile(ifstream& file)
//{
//	string temp;
//	double avgGrade = 0;
//	double currentGrade;
//	int numGrades = 0;
//	while (!file.eof())
//	{
//		file >> temp;
//		file >> temp;
//		file >> currentGrade;
//		avgGrade += currentGrade;
//		numGrades++;
//	}
//	avgGrade /= numGrades;
//	cout << "The class average is " << avgGrade << endl;
//}
//
//int main()
//{
//	string filename;
//	ifstream file;
//	cout << "Please enter a file name: ";
//	cin >> filename;
//	file.open(filename);
//	if (!file.is_open())
//	{
//		cout << "Error" << endl;
//	}
//	else
//	{
//		ProcessFile(file);
//	}
//	system("pause");
//
//	return 0;
//}