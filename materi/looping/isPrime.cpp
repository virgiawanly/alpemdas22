#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Masukan bilangan : ";
    cin >> n;

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " adalah bilangan prima";
    else
        cout << n << " bukan bilangan prima";

    return 0;
}