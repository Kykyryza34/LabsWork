#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int  a, b, c, p, S;
	cout << "Enter number a: ";
	cin >> a;
	cout << "enter number b: ";
	cin >> b;
	cout << "enter number c: ";
	cin >> c;
	p = a + b + (c * 2);
	S = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "result:" << S;
	cin.get();
}
