#include <iostream>
using namespace std;
int main()
{
    int high = 5;

    for (int i = 0; i < high; i++)
    {
        for (int j = high; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 0; k < ((i - 1) * 2) + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < high; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < ((high * 2) - (i * 2) - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}