#include <iostream>
using namespace std;

void printMatrix(int matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void multiplyMatrix(int matrix1[3][3], int matrix2[3][3], int result[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main()
{
    int matrix1[3][3];
    int matrix2[3][3];
    int result[3][3];
    cout << "Masukan matriks pertama:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukan angka\t: ";
            cin >> matrix1[i][j];
        }
    }
    cout << "Masukan matriks kedua:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Masukan angka\t: ";
            cin >> matrix2[i][j];
        }
    }
    multiplyMatrix(matrix1, matrix2, result);
    cout << "Hasil perkalian matriks:" << endl;
    printMatrix(result);
    return 0;
}