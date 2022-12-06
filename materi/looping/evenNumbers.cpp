#include <iostream>
using namespace std;

int main()
{
    int max;

    cout << "Masukan batas angka\t: ";
    cin >> max;

    // for (int i = 2; i <= max; i += 2)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 1; i <= max; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }

    int i = 1;
    while (i <= max)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}