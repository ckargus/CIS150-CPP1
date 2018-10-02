//#include <iostream>
//using namespace std;
//int Combo(int y, int x)
//{
//	if (x == 1)
//	{
//		return y;
//	}
//	else if (x == y)
//	{
//		return 1;
//	}
//	else if ((y >= x) && (x > 1))
//	{
//		return Combo(y - 1, x - 1) + Combo(y - 1, x);
//	}
//}
//int main()
//{
//	int num1;
//	int num2;
//	int com;
//	cout << "enter two numbers to find the nunber of combinations" << endl;
//	cin >> num1;
//	cin >> num2;
//	com = Combo(num1, num2);
//	cout << "The number of combinations of 4 items made out of a total of 8 items is:  " << com << endl;
//	return 0;
//}