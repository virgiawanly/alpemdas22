#include <iostream>
using namespace std;

int main()
{
    const int SIZE_MHS = 10;

    string npm[SIZE_MHS];
    string mahasiswa[SIZE_MHS];

    for (int i = 0; i < SIZE_MHS; ++i)
    {
        cout << "Masukan NPM Mahasiswa ke " << (i + 1) << " :\t";
        cin >> npm[i];
        cout << "Masukan Nama Mahasiswa ke " << (i + 1) << " :\t";
        cin >> mahasiswa[i];
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < SIZE_MHS; ++i)
    {
        cout << "Mahasiswa ke " << (i + 1) << endl;
        cout << "NPM\t: " << npm[i] << endl;
        cout << "Nama\t: " << mahasiswa[i] << endl;
        cout << endl;
    }
    cout << endl;

    return 0;
}