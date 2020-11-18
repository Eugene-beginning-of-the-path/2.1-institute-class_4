#include <iostream>
#include "Ccomplex.h"

using namespace std;

Ccomplex::Ccomplex(int arrsize, int value)
{
	this->value = value;
	size = arrsize;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 32;
	}
}
void Ccomplex::showarr()
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << "\t";
	cout << endl;
}
int Ccomplex::GetValue() { return value; }
void Ccomplex::ShowObject()
{
	showarr();
	cout << "value= " << GetValue() << endl;
	cout << "-------------------------------\n";
}
void Ccomplex :: operator = (const Ccomplex& other)
{
	value = other.value;

	delete[] this->arr;
	size = other.size;
	this->arr = new int[size];
	for (int i = 0; i < size; i++)
		this->arr[i] = other.arr[i];
}
void Ccomplex :: operator / (const Ccomplex& other)
{
	for (int i = 0; i < size; i++)
		this->arr[i] /= other.arr[i];

	value /= other.value;
}

void menu_Ccomplex()
{
	Ccomplex a(5, 15);
	cout << "a object: ";
	a.ShowObject();

	Ccomplex b(3, 6);
	cout << "b object: ";
	b.ShowObject();

	Ccomplex c(8, 17);
	cout << "c object: ";
	c.ShowObject();

	cout << "a = b" << endl << endl;
	a = b;

	cout << "a object: ";
	a.ShowObject();

	cout << "a / b" << endl << endl;
	a / b;

	cout << "a object: ";
	a.ShowObject();

	cout << "b / c" << endl << endl;
	b / c;

	cout << "b object: ";
	b.ShowObject();
}