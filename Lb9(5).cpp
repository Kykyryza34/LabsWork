#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, f, t = 0;
	char YesNo;
	cout << "������� ����:";
	cin >> x;
	cout << "������� ������:";
	cin >> y;
	cout << "������� �������:";
	cin >> f;
	do
	{
		while (x > 24 || x < 0)
		{
			cout << "����������� ������� ����!";
			return;
		}
		while (y > 60 || y < 0)
		{
			cout << "����������� ������� ������!";
			return;
		}
		while (f > 60 || f < 0)
		{
			cout << "����������� ������� �������!";
			return;
		}
		t = t + (x * 3600) + (y * 60) + f;
		cout << "��� ��������� � ��������:" << t << endl;
		cout << "���������/����� ('Y'/'N')\n";
		cin >> YesNo;
	} while ((YesNo == 'Y' || YesNo == 'y'));
	cin.get();
	return;
}
