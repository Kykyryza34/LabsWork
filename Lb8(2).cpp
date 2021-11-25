#include<iostream>
using namespace std;
void main()
{
	int n, i, y = 0;
	double t, a, f = 0;
	cout << " Enter n :";
	cin >> n;
	cout << "Enter t :";
	cin >> t;
	for (i = 0; i <= n; i++)
	{
		int pow = t;
		cout << " Enter a :";
		cin >> a;
		if (n - i == 0)
		{
			cout << 1; pow = 1;
		}
		else for (y = 1; y < n - i; y++)
		{
			pow *= t;
		}
		f = f + a * pow;
	}
	cout << "f = " << f;
	cin.get();
	cin.get();
}
