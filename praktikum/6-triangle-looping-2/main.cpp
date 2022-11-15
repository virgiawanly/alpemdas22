#include <iostream>
using namespace std;

int main()
{
    int n, upLength, downLength;
    cout << "Masukan tinggi segitiga: ";
    cin >> n;

    upLength = n % 2 == 1 ? (n / 2) + 1 : n / 2;
    for (int i = 0; i < upLength; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    downLength = n / 2;
    for (int i = downLength; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}