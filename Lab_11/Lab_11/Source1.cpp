#include <iostream>
#include <string>
#include "Triangle.h"
using namespace std;

enum months{Januaray,febuaray,march,may, june};

int main()
{
	months test = Januaray;
	if (test == 0)
	{
		cout << "months are equal";
	}
	test = march;
	Triangle tri1;
	Triangle tri2;
	float base;
	float height;
	cout << "Enter the height for the first triangle: ";
	cin >> height;
	tri1.SetHeight(height);
	cout << "Enter the base for the first triangle: ";
	cin >> base;
	tri1.SetBase(base);
	tri1.SetArea(tri1.GetBase(), tri1.GetHeight());
	
	cout << "Enter the height for the second triangle: ";
	cin >> height;
	tri2.SetHeight(height);
	cout << "Enter the base for the second triangle: ";
	cin >> base;
	tri2.SetBase(base);
	tri2.SetArea(tri2.GetBase(), tri2.GetHeight());
	if (tri1.GetArea() > tri2.GetArea())
	{
		cout << "Triangle one has a larger area of: " << tri1.GetArea() <<endl;
	}
	else
	{
		cout << "Triangle two has a larger area of: " << tri2.GetArea() << endl; 
	}
	system("pause");
	return 0;
}