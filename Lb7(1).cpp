#include <iostream>
using namespace std;
void main()
{
	setlocale(0, "");
	double num;
	cout << "������� ������������ �����: ";
	cin >> num;
	if (num < 10)
	{
		cout << "��� ����� ������ 10." << endl;
	}
	else if (num > 10)
	{
		cout << "��� ����� ������ 10." << endl;
	}
	else if (num = 10)
	{
		cout << "��� �����  ����� 10." << endl;
	}
	cin.get();
}