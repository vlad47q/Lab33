// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, R;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    if (x <= -1 - R) {
        y = -x - 1 - R;
    }
    else if (x > -1 - R && x <= -1) {
        y = sqrt(R * R - x + 1 * x + 1);
    }
    else if (x > -1 && x < 1) {
        y = R;
    }
    else if (x > 1 && x < 2){
        y = R + 1 - x;
    }
    else {
        y = -1;
    }

    cout << "y = " << y << endl;

    return 0;
}
