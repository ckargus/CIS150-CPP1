#include "Triangle.h"
#include <iostream>
using namespace std;
float Triangle::GetArea() const
{
	return area;
}
float Triangle::GetBase() const
{
	return base;
}
float Triangle::GetHeight() const
{
	return height;
}
void Triangle::SetBase(float base)
{
	while (base < 0.0)
	{
		cout << "No negative numbers" << endl;
		cout << "Enter new number: ";
		cin >> base;
	}
	this->base = base;
}
void Triangle::SetHeight(float height)
{
	while (height < 0.0)
	{
		cout << "No negative numbers" << endl;
		cout << "Enter new number: ";
		cin >> height;
	}
	this->height = height;
}
void Triangle::SetArea(float base, float height)
{
	area = .5 * base * height;
}