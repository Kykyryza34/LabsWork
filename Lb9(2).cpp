#include<iostream> 
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int x, y = 0;
	cout << "������� ������������������ �����:\n";
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
	cout << "���������:" << y;
	cin.get();
}
