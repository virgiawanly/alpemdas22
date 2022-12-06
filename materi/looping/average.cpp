#include <iostream>
using namespace std;

int main()
{
    float num, total = 0;

    cout << "Masukan angka : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        total += i;
    }

    cout << "Rata-rata = " << (total / num) << endl;
}