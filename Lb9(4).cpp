#include<iostream>
using namespace std;
void main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 5; j >= i; j--)
            cout << i << ' ';
        cout << endl;
    }
    cin.get();
}
