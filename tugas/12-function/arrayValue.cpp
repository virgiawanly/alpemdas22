#include <iostream>
using namespace std;

bool checkValue(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value;

    cout << "Masukan angka\t: ";
    cin >> value;
    if (checkValue(arr, size, value))
    {
        cout << "Angka " << value << " ada di dalam array" << endl;
    }
    else
    {
        cout << "Angka " << value << " tidak ada di dalam array" << endl;
    }
    return 0;
}