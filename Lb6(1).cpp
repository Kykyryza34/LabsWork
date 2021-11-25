#include<iostream>
using namespace std;
void main()
{
	int code;
	char ch, prev, next;
	cout << "Type characters and press Enter:";
	cin >> ch;
	code = (int)ch;
	prev = (char)code - 1;
	next = (char)code + 1;
	cout << "ASCII-code is:" << code << endl;
	cout << "The previous character is:" << prev << endl;
	cout << "The next character is:" << next << endl;
	cin.get();
	cin.get();
}
