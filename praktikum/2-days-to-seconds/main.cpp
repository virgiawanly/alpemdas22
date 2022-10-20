#include <iostream>
using namespace std;

int main()
{
    int days, seconds;

    cout << "Masukan total hari\t: ";
    cin >> days;

    seconds = days * 24 * 60 * 60;
    cout << days << " hari = " << seconds << " detik" << endl;

    return 0;
}


