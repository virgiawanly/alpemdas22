#include <iostream>
using namespace std;

int main()
{
    const int ROW_SIZE = 5;
    const int COL_SIZE = 5;

    int n;
    int matrix[ROW_SIZE][COL_SIZE];

    for (int i = 0; i < ROW_SIZE; i++)
    {
        n = i + 1;
        for (int j = 0; j < COL_SIZE; j++)
        {
            matrix[i][j] = n;
            n++;
        }
    }

    for (int i = 0; i < ROW_SIZE; i++)
    {
        for (int j = 0; j < COL_SIZE; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}