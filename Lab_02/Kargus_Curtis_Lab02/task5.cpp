//#include <iostream>
//using namespace std;
//int Combonations(int y, int x, int level)
//{
//	cout << "Recursion level is " << level << endl;
//	cout << "Y = " << y << "X = " << x << endl;
//	if (x == 1)
//	{
//		return y;
//	}
//	else if (x == y)
//	{
//		return 1;
//	}
//	else if ((y > x) && (x > 1))
//	{
//		return Combonations(y - 1, x - 1, level + 1) + Combonations(y - 1, x, level + 1);
//	}
//}
//int main()
//{
//	int com;
//	com = Combonations(8, 4, 1);
//	cout << "The number of combinations of 4 items made out of a total of 8 items is:  " << com << endl;
//	return 0;
//}