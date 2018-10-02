//#include <iostream>
//#include <string>
//#include <fstream>
//using namespace std;
//
//void ProcessFile(ofstream& push, ifstream& pull)
//{
//	while (!pull.eof())
//	{
//		string fName;
//		string lName;
//		int hoursPerWeek;
//		int payRate;
//		int weeklySal;
//		pull >> fName;
//		pull >> lName;
//		pull >> hoursPerWeek;
//		pull >> payRate;
//		weeklySal = payRate * hoursPerWeek;
//		push << fName << " " << lName << " " << weeklySal << endl;
//	}
//	push.close();
//	pull.close();
//}
//
//
//int main()
//{
//	ifstream pull;
//	ofstream push;
//	pull.open("employees.txt");
//	push.open("results.txt");
//	if (!pull.is_open())
//	{
//		cout << "Error please try again" << endl;
//	}
//	else
//	{
//		ProcessFile(push, pull);
//	}
//	return 0;
//}