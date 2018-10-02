//Curtis Kargus	
//Lab02

#include <iostream>
using namespace std;

const int MAX_ROWS = 3;
const int MAX_COLUMNS = 2;

const int NUM_DEPTS = 2;
const int NUM_STORES = 2;
const int NUM_MONTHS = 12;

int Combonations(int y, int x, int level)
{
	cout << "Recursion level is " << level << endl;
	cout << "Y = " << y << "X = " << x << endl;
	if (x == 1)
	{
		return y;
	}
	else if (x == y)
	{
		return 1;
	}
	else if ((y > x) && (x > 1))
	{
		return Combonations(y - 1, x - 1, level + 1) + Combonations(y - 1, x, level + 1);
	}
}

int Combo(int y, int x)
{
	if (x == 1)
	{
		return y;
	}
	else if (x == y)
	{
		return 1;
	}
	else if ((y > x) && (x > 1))
	{
		return Combo(y - 1, x - 1) + Combo(y - 1, x);
	}
}

void Sales(float Sale[NUM_STORES][NUM_MONTHS][NUM_DEPTS], int month)
{
	for (int i = 0; i < NUM_STORES; i++)
	{
		for (int j = 0; j < NUM_DEPTS; j++)
		{
			cout << Sale[i][month][j] << endl;
		}
	}
}

int Even(int A[][MAX_COLUMNS], int length, int width)
{
	int totalEven = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (A[i][j] % 2 == 0)
			{
				totalEven++;
			}
		}
	}
	return totalEven;
}

int main()
{
	int A[MAX_ROWS][MAX_COLUMNS] = { { 3, 2 }, { 4, 5 }, { 2, 2 } };
	cout << Even(A, MAX_ROWS, MAX_COLUMNS) << endl;

	int month;
	float Sale[NUM_STORES][NUM_MONTHS][NUM_DEPTS] =
	{
		1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2,
		2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 3.1, 3.2,
		3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4.0, 4.1, 4.2,
		2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 3.1, 3.2
	};
	cout << "Enter the number of a month" << endl;
	cin >> month;
	if (month < 12 || month > 1)
	{
		Sales(Sale, month);
	}

	int num1;
	int num2;
	int com;
	cout << "enter two numbers to find the nunber of combinations" << endl;
	cin >> num1;
	cin >> num2;
	com = Combo(num1, num2);
	cout << "The number of combinations of " << num1 << " items made out of a total of " << num2 << " items is:  " << com << endl;

	com = 0;
	com = Combo(8, 4);
	cout << "The number of combinations of 4 items made out of a total of 8 items is:  " << com << endl;


	com = 0;
	com = Combonations(8, 4, 1);
	cout << "The number of combinations of 4 items made out of a total of 8 items is:  " << com << endl;
	return 0;
}