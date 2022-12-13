#include <iostream>
using namespace std;

int main()
{
    int n, a, b, sn;
    cout << "Masukkan angka pertama\t: ";
    cin >> a;
    cout << "Masukkan angka beda\t: ";
    cin >> b;
    cout << "Masukan jumlah suku\t: ";
    cin >> n;
    cout << "Deret\t\t\t: ";
    for (int i = 0; i < n; i++)
    {
        cout << a + i * b << " ";
    }
    sn = n * (2 * a + (n - 1) * b) / 2;
    cout << endl;
    cout << "Sigma N\t\t\t: " << sn << endl;

    return 0;
}