#include <iostream>

using namespace std;

int main()
{
    int input1, input2, input3, max, min;

    cout << "Input bilangan ke-1\t\t: ";
    cin >> input1;

    cout << "Input bilangan ke-2\t\t: ";
    cin >> input2;

    cout << "Input bilangan ke-3\t\t: ";
    cin >> input3;

    // if (input1 > input2 && input1 > input3)
    // {
    //     max = input1;
    // }
    // else if (input2 > input1 && input2 > input3)
    // {
    //     max = input2;
    // }
    // else
    // {
    //     max = input3;
    // }

    // if (input1 < input2 && input1 < input3)
    // {
    //     min = input1;
    // }
    // else if (input2 < input1 && input2 < input3)
    // {
    //     min = input2;
    // }
    // else
    // {
    //     min = input3;
    // }

    if (input1 > input2 && input1 > input3)
    {
        max = input1;
        min = input2 < input3 ? input2 : input3;
    }
    else if (input2 > input1 && input2 > input3)
    {
        max = input2;
        min = input3 < input1 ? input3 : input1;
    }
    else
    {
        max = input3;
        min = input1 < input2 ? input1 : input3;
    }

    // max = (input1 > input2 && input1 > input3) ? input1 : ((input2 > input3) ? input2 : input3);
    // min = (input1 < input2 && input1 < input3) ? input1 : ((input2 < input3) ? input2 : input3);

    cout << "Bilangan terbesarnya adalah\t: " << max << endl;
    cout << "Bilangan terkecilnya adalah\t: " << min << endl;
    cout << "Bilangan terbesarnya adalah\t: " << (max > 0 ? "Positif" : (max < 0 ? "Negatif" : "Nol")) << endl;
}
