

#include <iostream> 
#include <conio.h>
#include "windows.h"
using namespace std;
//коментар
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	cout << "Введіть порядковий номер дня тижня: ";
	cin >> x;
	switch (x)
	{
	case 1: cout << "\n15.00 Запис до перукаря\n"; break;
	case 2: cout << "\n13.00 Запис до стоматолога\n"; break;
	case 3: cout << "\n19:30 Похід в кінотеатр\n"; break;
	case 4: cout << "\n9.00 Запис до лікаря\n"; break;
	case 5: cout << "\n17.00 Похід до спортзали\n"; break;
	case 6: cout << "\n11.00 Ділова зустріч\n"; break;
	case 7: cout << "\nНа цей день нічого не заплановано\n"; break;
	default: cout << "\nТакого дня тижня не існує\n"; break;
	}

}



