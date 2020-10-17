// Lab_03_1.cpp
// Колмикова Катерина Сергіївна
// Лабораторна робота № 3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 12
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x = "; cin >> x;
	A = (2 + x) / (x * x);
	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = x * x * x - 2 * x * x * x * x;
	if (x >= 0 && x <= 2)
		B = (fabs(x) + exp(x)) * (fabs(x) + exp(x)) * (fabs(x) + exp(x));
	if (x > 2)
		B = 4 * cos(x * x - 2);

	y = A + 1 + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгауження в повінй формі
	if (x < 0)
		B = x * x * x - 2 * x * x * x * x;
	else
		if (x >= 0 && x <= 2)
			B = (fabs(x) + exp(x)) * (fabs(x) + exp(x)) * (fabs(x) + exp(x));
		else 
			B = 4 * cos(x * x - 2);

	y = A + 1 + B;
	cout << endl;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
