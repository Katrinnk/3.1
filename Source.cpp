// Lab_03_1.cpp
// ��������� �������� ���㳿���
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 12
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;
	A = (2 + x) / (x * x);
	// ����� 1: ������������ � ��������� ����
	if (x < 0)
		B = x * x * x - 2 * x * x * x * x;
	if (x >= 0 && x <= 2)
		B = (fabs(x) + exp(x)) * (fabs(x) + exp(x)) * (fabs(x) + exp(x));
	if (x > 2)
		B = 4 * cos(x * x - 2);

	y = A + 1 + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ����������� � ����� ����
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
