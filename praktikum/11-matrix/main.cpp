#include <iostream>
using namespace std;
int main()
{
    int rowSize;
    int colSize;

    cout << "Matriks 1" << endl;
    cout << "Masukan jumlah baris\t: ";
    cin >> rowSize;
    cout << "Masukan jumlah kolom\t: ";
    cin >> colSize;

    int matrix1[rowSize][colSize];
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "Masukan angka\t: ";
            cin >> matrix1[i][j];
        }
    }
    cout << endl;

    cout << "Matriks 2" << endl;
    cout << "Masukan jumlah baris\t: ";
    cin >> rowSize;
    cout << "Masukan jumlah kolom\t: ";
    cin >> colSize;

    int matrix2[rowSize][colSize];
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << "Masukan angka\t: ";
            cin >> matrix2[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < sizeof(matrix1) / sizeof(matrix1[0]); i++)
    {
        for (int j = 0; j < sizeof(matrix1[i]) / sizeof(int); j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < sizeof(matrix2) / sizeof(matrix2[0]); i++)
    {
        for (int j = 0; j < sizeof(matrix2[i]) / sizeof(int); j++)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}