#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int  num1, num2, result1, result2, result3, result4, result5, result6;
	cout << "Enter number 1: " << endl;
	cin >> num1;
	cout << "enter number 2: " << endl;
	cin >> num2;
	result1 = -num1 + sqrt(((num1 ^ 2) + 3 * num2)) / (2 * num2);
	result2 = sqrt((3 + num1 * num2 / 4 * (num1 ^ 2)));
	result3 = 6 - abs(num1 * num2) / sqrt(5 - (num2 ^ 2));
	result4 = (exp(num1 + 7)) * sqrt(37 * num2 - (num1 ^ 3));
	result5 = sin(num1) + ((num2 ^ 2) / cos(2 * num1) + 23);
	result6 = tan(num2) - abs(num1 - 3 * num2 + (2 / sqrt(num2 + 4)));
	cout << "result: " << result1 << endl << result2 << endl << result3 << endl << result4 << endl << result5 << endl << result6 << endl;
	cin.get();
}
