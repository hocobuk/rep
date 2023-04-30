#pragma once
#include <cmath>
#include <iostream>

class rational
{
private:
	int a, b;
	friend rational operator-(rational& mass1, rational& mass2);
	friend int operator>(rational& mass1, rational& mass2);

public:
	rational();
	rational(int a1, int b1);
	void set(int a1, int b1);
	void show(int i);
	int nod(int a, int b);
	int nok(int a, int b);
	rational operator+(rational& mass);
	int out1();
	int out2();
	rational& operator++(const int);
	bool operator==(rational& mass);
	rational& operator=(rational const& mass);

protected:

};
