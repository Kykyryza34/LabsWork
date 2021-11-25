#include<iostream> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int x, y = 0;
	cout << "Введите последовательность чисел:\n";
	while (y <= 100)
	{
		cin >> x;
		if (x > 0)
		{
			y = y + x;
		}
		else
		{
			y = y + x * x;
		}
	}
	cout << "Результат:" << y;
	cin.get();
}
