#include <iostream>

using namespace std;

template <class Atype> class Set
{
    Atype* a; // Тип элементов и количество
    int len; 

public:
    Set(int size) // Конструктор
    {
        len = size;

        a = new Atype[size];
    }

    ~Set() // Деструктор
    {
        delete[]a;
    }

    bool In_Set(Atype T) // Принадлежность элемента
    {
        for (int i = 0; i < len; i++)
        {
            if (a[i] == T)
            {
                return true;
            }
        }
        return false;
    }

    bool Add(Atype T) // Добавление элемента
    {
        if (!In_Set(T))
        {
            Atype* tmp = new Atype[len + 1];
            for (int i = 0; i < len; i++)
            {
                tmp[i] = a[i];
            }
            tmp[len++] = T;
            delete[] a;
            a = tmp;
            return true;
        }
        return false;
    }

    bool Get(Atype T) // Извлечение элемента
    {
        if (In_Set(T))
        {
            Atype* tmp = new Atype[len - 1];
            int j = 0;
            for (int i = 0; i < len; i++)
            {
                if (a[i] != T)
                {
                    tmp[j++] = a[i];
                }
            }
            delete[]a;
            a = tmp;
            len--;
            return true;
        }
        return false;
    }

    bool Is_Full() // Проверка на заполнение
    {
        if (len > 0)
        {
            return true;
        }
        return false;
    }

    bool Is_Empty() // Проверка на пустоту
    {
        if (len == 0)
        {
            return true;
        }
        return false;
    }


    Set& operator+(Atype T) // Оператор добавления
    {
        Add(T);
        return *this;
    }

    Atype& operator[](int n) // Выход за пределы
    {
        if (n < 0 || n > len - 1)
        {
            cout << "Выход за пределы";
            exit(1);
        }
        return a[n];
    }

    int Size() const // Длина 
    {
        return len;
    }
};

class Point
{
    int x, y;
public:
    Point(int x1, int y1)
    {
        this->x = x1;
        this->y = y1;
    }
    Point()
    {
       
    }

    friend ostream& operator<<(ostream& mass, Point& mass1)
    {
        mass << mass1.x << "," << mass1.y;
        return mass;
    }
    Point& operator=(Point& my_Point1)
    {
        this->x = my_Point1.x;
        this->y = my_Point1.y;
        return *this;
    }

    bool operator==(Point const& my_Point1)
    {
        return (this->x == my_Point1.x && my_Point1.y == this->y);
    }

    bool operator!=(Point const& my_Point1)
    {
        return (this->x != my_Point1.x || my_Point1.y != this->y);
    }
};