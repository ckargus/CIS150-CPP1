#include <iostream>

#include "Vector.h"
using namespace std;

int main()
{
	Vector a, b(3), c(3);
	b.get(); // user enters 1 2 3 
	c.get(); // user enters -2 1 0 

	a = b + c;
	cout << "The sum of \n";
	b.print();

	cout << "\n and \n";
	c.print();

	cout << "\n is \n";
	a.print();

	return 0;

}