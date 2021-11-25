#include<iostream>
using namespace std;
int main()
{
	int i, s = 0, j, z = 1;
	for (i = 2; ; i += 2)
	{
		cout << "Enter j :";
		cin >> j;
		if (j != 0)
		{
			if ((j >= 10) && (j <= 25))
				s = s + j;
			if (j >= 15)
				z *= j;
		}
		else
		{
			cout << "Result:" << s << endl;
			break;
		}
		cin.get();
	}
