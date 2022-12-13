// C++ program to convert a number into terbilang format
#include <iostream>
#include <string>
using namespace std;

string terbilang(int n)
{
    string bilangan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string hasil;
    if (n < 20)
    {
        hasil = bilangan[n];
    }
    else if (n < 100)
    {
        hasil = terbilang(n / 10) + " puluh " + terbilang(n % 10);
    }
    else if (n < 200)
    {
        hasil = "seratus " + terbilang(n - 100);
    }
    else if (n < 1000)
    {
        hasil = terbilang(n / 100) + " ratus " + terbilang(n % 100);
    }
    else if (n < 2000)
    {
        hasil = "seribu " + terbilang(n - 1000);
    }
    else if (n < 1000000)
    {
        hasil = terbilang(n / 1000) + " ribu " + terbilang(n % 1000);
    }
    else if (n < 1000000000)
    {
        hasil = terbilang(n / 1000000) + " juta " + terbilang(n % 1000000);
    }
    else if (n < 1000000000000)
    {
        hasil = terbilang(n / 1000000000) + " milyar " + terbilang(n % 1000000000);
    }
    else if (n < 1000000000000000)
    {
        hasil = terbilang(n / 1000000000000) + " trilyun " + terbilang(n % 1000000000000);
    }
    return hasil;
}

int main()
{
    int n;
    cout << "Masukan angka\t: ";
    cin >> n;
    cout << "Terbilang\t: " << terbilang(n) << endl;
    return 0;
}