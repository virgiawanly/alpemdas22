#include <iostream>
using namespace std;

void countNumberPower()
{
    int num, power, result = 1;

    cout << "Masukkan angka: ";
    cin >> num;
    cout << "Masukkan jumlah pangkat: ";
    cin >> power;

    for (int i = 1; i <= power; i++)
    {
        result *= num;
    }

    cout << "Hasilnya adalah " << result << endl;
}

int main()
{
    countNumberPower();

    return 0;
}
