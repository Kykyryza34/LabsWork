#include<iostream>
using namespace std;
void main()
{
	cout << "Type characters and press Enter" << endl;
	double a, b, ch1, ch2;
	cin >> ch1;
	cin >> ch2;
	a = ch1 + ch2;
	b = ch1 - ch2;
	cout << "The result is" << endl;
	cout << ch1 << "+" << ch2 << "=" << a << endl;
	cout << ch1 << "-" << ch2 << "=" << b << endl;
	cin.get();
	cin.get();
}
