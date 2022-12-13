#include <iostream>
using namespace std;

bool isPrime(int num)
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout << "Masukan angka\t: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << "Angka " << num << " adalah bilangan prima" << endl;
    }
    else
    {
        cout << "Angka " << num << " bukan bilangan prima" << endl;
    }

    return 0;
}