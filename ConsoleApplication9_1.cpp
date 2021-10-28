

#include <iostream> 
#include <conio.h>
#include "windows.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, b, c, x;
	double f;
    cout << "¬вед≥ть a: ";
    cin >> a;
    cout << "¬вед≥ть b: ";
    cin >> b;
    cout << "¬вед≥ть c: ";
    cin >> c;
    cout << "¬вед≥ть x: ";
    cin >> x;
    if (a < 0 && c != 0)
        f = a * pow(x, 2) + b * x + c;
    else
        if (a > 0 && c == 0 && x != 0)
            f = -a / x - c;
        else
            f = a * (x + c);
    cout << "F = " << f << endl;

}




