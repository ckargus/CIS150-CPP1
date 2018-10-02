#include <iostream>
#include "Vector.h"
using namespace std;
 
Vector::Vector()
{
	size = 0;
	entries = new int[size];
}

Vector::Vector(int s)
{
	size = s;
	entries = new int[size]; 
}

Vector::Vector(const Vector & other)
{
	size = other.size;
	entries = other.entries;
	
}

void Vector::get()
{
	int temp;
	cout << "Enter numbers one at a time until the vector is full" << endl;
	for (int i = 0; i < size; i++)
	{
		temp = 0;
		cin >> temp;
		entries[i] = temp;
	}
}

Vector::~Vector()
{
	delete(entries);
}

void Vector::print()
{
	cout << "[";
	for (int i = 0; i < size; i++)
	{
		cout << " " << entries[i] <<" ";
	}
	cout << "]" << endl;
}

Vector& Vector::operator+(const Vector & other) const
{
	if (this->size == other.size)
	{
		Vector *temp = new Vector(other.size);
		temp->entries = new int[other.size];
		for (int i = 0; i < other.size; i++)
		{
			temp->entries[i] = this->entries[i] + other.entries[i];
		}
		return *temp;
	}
}

Vector& Vector::operator=(const Vector & other)
{
	size = other.size;
	entries = new int[other.size];
	for (int i = 0; i < size; i++)
	{
		
		entries[i] = other.entries[i];;
	} 
	return *this;
}