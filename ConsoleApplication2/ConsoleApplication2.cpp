﻿#include <iostream>
using namespace std;

const double a = -2;
const double b = 3;

int g = 231213123213;
int dent

double calculateValue(double x)
{
	double rezult = 4 * x - 7 * sin(x);
	return rezult;
}

int main()
{
	setlocale(0, "");
	int n;
	cout << "Введите колличество разбиений: "; cin >> n;
	double h = (b-a )/ n;
	double first = a;
	double rezult = 0;
	
	for(int i=0;i<n;i++)
	{		
		rezult += calculateValue(first+h/2+i*h);		
	}
	cout << "Ответ: " << h* rezult;
}
double vectors()
{
	string as = "hello";
}

