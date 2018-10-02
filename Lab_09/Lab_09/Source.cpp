//#include <iostream>
//#include <string>
//using namespace std;
//
//int SumOfArray(int list[], int size)
//{
//	int sum = 0;
//	for (int i = 0; i < size; i++)
//	{
//		sum += list[i];
//	}
//	return sum;
//}
//
//double AverageOfPostitves(int list[], int size)
//{
//	int avg = 0;
//	int numPos = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (list[i] >= 0)
//		{
//			avg += list[i];
//			numPos++;
//		}
//	}
//	avg /= static_cast<double>(numPos);
//	return avg;
//}
//
//int Lowest(int list[], int size)
//{
//	int lowestNum = list[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (list[i] < lowestNum)
//		{
//			lowestNum = list[i];
//		}
//	}
//	return lowestNum;
//}
//
//int Highest(int list[], int size)
//{
//	int highest = list[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (list[i] > highest)
//		{
//			highest = list[i];
//		}
//	}
//	return highest;
//}
//
//int main()
//{
//	const int SIZE = 20;
//	int values[SIZE] = { 0, 23, 34, -7, 110, 42, -350, 424, 25,
//		99, 10, 05, 50, -5, 1, 200, -350, 437, 25, 147 };
//	cout << "Highest number is " << Highest(values, SIZE) << endl;
//	cout << "Lowest number is " << Lowest(values, SIZE) << endl;
//	cout << "Sum of values is " << SumOfArray(values, SIZE) << endl;
//	cout << "Average of the postive numebers " << AverageOfPostitves(values, SIZE) << endl;
//	system("pause");
//}