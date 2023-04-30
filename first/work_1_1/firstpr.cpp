#include "triangle.h"
#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    triangle mas[3];
    double a, b, c;

    for (int i = 0; i < 3; i++)
    {
        cout << "Введите стороны треугольника №" << (i + 1) << " через пробел: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);

        if (!(mas[i].exst_tr()))
        {
            mas[i].show();
            cout << "Треугольника с такими сторонами не существует, введите повторно: " << endl;
            i--;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        mas[i].show();
        cout << "Периметр треугольника: " << mas[i].perimetr() << endl;
        cout << "Площадь треугольника: " << mas[i].square() << endl;
    }
    return 0;
}

