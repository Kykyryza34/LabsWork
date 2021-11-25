#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int x, y, f, t = 0;
	char YesNo;
	cout << "Введите Часы:";
	cin >> x;
	cout << "Введите Минуты:";
	cin >> y;
	cout << "Введите Секунды:";
	cin >> f;
	do
	{
		while (x > 24 || x < 0)
		{
			cout << "Некорректно введены ЧАСЫ!";
			return;
		}
		while (y > 60 || y < 0)
		{
			cout << "Некорректно введены МИНУТЫ!";
			return;
		}
		while (f > 60 || f < 0)
		{
			cout << "Некорректно введены СЕКУНДЫ!";
			return;
		}
		t = t + (x * 3600) + (y * 60) + f;
		cout << "Ваш результат в секундах:" << t << endl;
		cout << "Повторить/Выйти ('Y'/'N')\n";
		cin >> YesNo;
	} while ((YesNo == 'Y' || YesNo == 'y'));
	cin.get();
	return;
}
