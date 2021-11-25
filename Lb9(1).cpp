#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	char ch, YesNo;
	do
	{
		cout << "Введите символ:";
		cin >> ch;
		do
		{
			if (ch == '.')
			{
				cout << "Неудачные попытки:" << n << endl;
				break;
			}
			else
			{
				cout << "ASCII:" << (int)ch << endl;
				n++;
			}
			cout << "Попробуйте другой символ:";
			cin >> ch;
		} while (ch != '.');
		cout << "Неудачные попытки:" << n << endl;
		cout << "Продолжить/Выйти ('Y'/'N')\n";
		cin >> YesNo;
	} while ((YesNo == 'Y' || YesNo == 'y'));
	cin.get();
	return;
}