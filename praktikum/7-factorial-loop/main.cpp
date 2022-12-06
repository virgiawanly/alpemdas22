// Create factorial loop from given input number

#include <iostream>
using namespace std;

int main()
{
    int number;
    int factorial = 1;

    cout << "Masukan faktorial : ";
    cin >> number;

    for (int i = 1; i <= number; ++i)
    {
        factorial *= i;
    }

    cout << "Angka faktorial dari " << number << " adalah " << factorial << endl;
    return 0;
}