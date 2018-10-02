//#include <iostream>
//using namespace std;
//
//const int NUM_DEPTS = 2;
//const int NUM_STORES = 2;
//const int NUM_MONTHS = 12;
//
//void Sales(float Sale[NUM_STORES][NUM_MONTHS][NUM_DEPTS], int month)
//{
//	for (int i = 0; i < NUM_STORES; i++)
//	{
//		for (int j = 0; j < NUM_DEPTS; j++)
//		{
//			cout << Sale[i][month][j] << endl;
//		}
//	}
//}
//
//int main()
//{
//	int month;
//	float Sale[NUM_STORES][NUM_MONTHS][NUM_DEPTS] =
//	{ 
//	1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2.0, 2.1, 2.2,
//	2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 3.1, 3.2,
//	3.1, 3.2, 3.3, 3.4, 3.5, 3.6, 3.7, 3.8, 3.9, 4.0, 4.1, 4.2,
//	2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3.0, 3.1, 3.2
//	};
//	cout << "Enter the number of a month" << endl;
//	cin >> month;
//	if (month < 12 || month > 1)
//	{
//		Sales(Sale, month);
//	}
//	return 0;
//}