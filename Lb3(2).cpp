#include <iostream>
using namespace std;
void main()
{
	long int x = 64310, y = 10, z = 0;
	z = x + y;
	cout << x << "+" << y << "=" << z << endl;
	cout << "Size of double: " << sizeof(double) << " bytes" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of short: " << sizeof(short) << " bytes" << endl;
	cout << "Size of char: " << sizeof(char) << " bytes" << endl;
	cout << "Size of float: " << sizeof(float) << " bytes" << endl;
	cin.get();

}
