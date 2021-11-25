#include<iostream>
using namespace std;
void main()
{
	cout << "Type characters and press Enter" << endl;
	char st[6];
	char ch;
	cin >> st;
	ch = st[0];
	st[0] = st[4];
	st[4] = ch;
	st[4] = st[2];
	st[2] = ch;
	st[2] = st[0];
	st[0] = ch;
	cout << "The result is" << endl;
	cout << st;
	cin.get();
	cin.get();
}
