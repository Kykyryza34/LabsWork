#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	char ch, YesNo;
	do
	{
		cout << "������� ������:";
		cin >> ch;
		do
		{
			if (ch == '.')
			{
				cout << "��������� �������:" << n << endl;
				break;
			}
			else
			{
				cout << "ASCII:" << (int)ch << endl;
				n++;
			}
			cout << "���������� ������ ������:";
			cin >> ch;
		} while (ch != '.');
		cout << "��������� �������:" << n << endl;
		cout << "����������/����� ('Y'/'N')\n";
		cin >> YesNo;
	} while ((YesNo == 'Y' || YesNo == 'y'));
	cin.get();
	return;
}