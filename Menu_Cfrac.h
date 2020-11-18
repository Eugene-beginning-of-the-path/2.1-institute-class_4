#include <iostream>
#include "Cfrac.h"

using namespace std;

void Cfrac :: SetQ(int q) { this->q = q; }
void Cfrac::SetP(int p) { this->p = p; }
void Cfrac :: Enter_value()
{
	cout << "Enter numerator= ";
	cin >> p;

	cout << endl;

	cout << "Enter denominator= ";
	cin >> q;

	cout << endl;
}
void Cfrac :: Fraction()
{
	cout << "Your fraction " << p << "/" << q << "=" << (double)p / q << endl;
}
void Cfrac :: Reduction_Fraction()
{
	for (int i = 9; 1 < i; i--)
		if (p % i == 0 && q % i == 0)
		{
			while (p % i == 0 && q % i == 0)
			{
				q /= i;
				p /= i;
			}
		}
	cout << "\nReduction fraction =" << p << "/" << q << endl;
}

void manu_cfrac()
{

}