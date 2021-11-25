#include<iostream>
using namespace std;
int main()
{
	int i, s = 0, j;
	for (i = 2; ; i += 2)
	{
		cout << "Enter j :";
		cin >> j;
		if (j != 0)
		{
			s = s + (i * j);
		}
		else
		{
			cout << "Result:" << s;
			break;
		}
		cin.get();
	}
}
