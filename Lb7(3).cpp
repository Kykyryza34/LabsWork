#include<iostream>
using namespace std;
void main()
{
	char sign;
	double num1, num2, result;
	cout << "Enter number 1:";
	cin >> num1;
	cout << "Enter sign:";
	cin >> sign;
	cout << "Enter number 2:";
	cin >> num2;
	switch (sign)
	{
	case '+':
	{
		result = num1 + num2;
		cout << "Result:" << result;
		break;
	}
	case '-':
	{
		result = num1 - num2;
		cout << "Result:" << result;
		break;
	}
	case '*':
	{
		result = num1 * num2;
		cout << "Result:" << result;
		break;
	}
	case '/':
		if (num2 == 0)
		{
			cout << "Error: division by zero.";
			break;
		}
		else
		{
			result = num1 / num2;
			cout << "Result:" << result;
			break;
		}

	default:
	{
		cout << "Error: wrong symbol.";
		break;
	}
	}
	cin.get();
	cin.get();

}
