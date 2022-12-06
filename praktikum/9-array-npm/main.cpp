#include <iostream>
using namespace std;

int main()
{
    const int SIZE_MHS = 5;
    string mhs[SIZE_MHS][2];

    for (int i = 0; i < SIZE_MHS; i++)
    {
        cout << "NPM mahasiswa ke " << (i + 1) << " :\t";
        cin >> mhs[i][0];
        cout << "Nama mahasiswa ke " << (i + 1) << " :\t";
        cin >> mhs[i][1];
    }
    cout << endl;

    for (int i = 0; i < SIZE_MHS; i++)
    {
        cout << "Mahasiswa ke " << (i + 1) << endl;
        cout << "NPM\t: " << mhs[i][0] << endl;
        cout << "Nama\t: " << mhs[i][1] << endl;
        cout << endl;
    }
    cout << endl;

    return 0;
}