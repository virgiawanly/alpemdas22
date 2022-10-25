#include <iostream>
using namespace std;

int main()
{
    long total, grandTotal, discount = 0;
    const long MINIMUM_DISCOUNT = 100000;
    const float DISCOUNT_PERCENT = 0.1;

    cout << "Masukan nominal belanja\t: ";
    cin >> total;

    if (total > MINIMUM_DISCOUNT)
    {
        discount = DISCOUNT_PERCENT * total;
        cout << "Anda mendapatkan diskon " << discount << endl;
    }

    grandTotal = total - discount;
    cout << "Total bayar adalah " << grandTotal << endl;

    return 0;
}