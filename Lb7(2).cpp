#include<iostream>
using namespace std;
void main()
{
	double x, y;
	setlocale(LC_ALL, "Russian");
	cout << "Enter point coordinates X :";
	cin >> x;
	cout << "Enter point coordinates Y :";
	cin >> y;
	if ((((x > -1) && (x < 0)) && (y < -1) && (y > 0)) || (((x < 1)) && (x > 0)) && ((y > -1) && (y < 0))))
	{
	cout << " ��� �����  ��������� � �������.";
	}
	else
	{
		cout << "  ��� ����� �� ��������� � �������.";
	}
	cin.get();
	cin.get();
}