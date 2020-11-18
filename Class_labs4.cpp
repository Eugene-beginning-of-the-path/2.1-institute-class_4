#include <iostream>

using namespace std;

void menu_1();
void menu_2();

char Decision_1()
{
	char x;

	cout << "Выберите, какой из подпунктов запустить - '1' '2'\n";
	cout << "Вы ввели:";
	cin >> x;
	while (x != '1' && x != '2')
	{
		cout << "Введите один из предложенных вариантов: ";
		cin >> x;
	}

	return x;
}

int main()
{
	setlocale(LC_ALL, "rus");
	switch (Decision_1())
	{
		case '1':
		{
			cout << "Вы запустили 1ый подраздел" << endl;
			menu_1();
		}
		break;

		case '2':
		{
			cout << "Вы запустили 2ый подраздел" << endl;
			menu_2();
		}
	}
}