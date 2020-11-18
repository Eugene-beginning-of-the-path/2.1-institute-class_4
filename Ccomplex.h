#include <iostream>

using namespace std;

class Ccomplex
{
	int size;
	int* arr;
	int value;
public:

	Ccomplex(int arrsize, int value);

	void showarr();

	int GetValue();

	void ShowObject();

	void operator = (const Ccomplex& other);

	void operator / (const Ccomplex& other);
};