#include <iostream>
#include <string>
using namespace std;

double SumOfArray(int length, int height, float box[][4])
{
	double sum = 0.0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < height; j++)
		{
			sum += box[i][j];
		}
	}
	return sum;
}

double AvgOfArray(int length, int height, float box[][4])
{
	double sum = 0.0;
	int divsor = length * height;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < height; j++)
		{
			sum += box[i][j];
		}
	}
	return sum / divsor;
}

int TargetOfArray(int length, int height, float box[][4], int target)
{
	int found = -1;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < height; j++)
		{
			if (target == box[i][j])
			{
				found = 0;
				return found;
			}
		}
	}
	return found;
}

int main()
{
	const int LENGTH = 4;
	const int HEIGHT = 4;
	double total;
	double average;
	double target;
	int found;
	float box[LENGTH][HEIGHT] = { { 11, 8, 0, -4 }, { 74, 5, 13, 42 }, { 29, -7, 45, 4 }, { 100, 23, -3, 61 } };
	total = SumOfArray(LENGTH, HEIGHT, box);
	average = AvgOfArray(LENGTH, HEIGHT, box);
	cout << "What target number would you like to find: ";
	cin >> target;
	found = TargetOfArray(LENGTH, HEIGHT, box, target);
	cout << "The sum of the array is: " << total << endl;
	cout << "The average of the array is: " << average << endl;
	if (found == 0)
	{
		cout << "Target " << target << " was found!" << endl;
	}
	else
	{
		cout << "Target " << target << " was not found" << endl; 
	}
	system("pause");
	return 0;
}