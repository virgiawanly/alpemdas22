#include <iostream>

using namespace std;

int main()
{
    int input1, input2, input3, max;

    cout << "Input bilangan ke-1\t\t: ";
    cin >> input1;

    cout << "Input bilangan ke-2\t\t: ";
    cin >> input2;

    cout << "Input bilangan ke-3\t\t: ";
    cin >> input3;

    /**
     * If else
     */
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

    /**
     * If
     */
    // max = input1;
    //
    // if (input2 > max)
    // {
    //     max = input2;
    // }
    //
    // if (input3 > max)
    // {
    //     max = input3;
    // }

    /**
     * Ternary operator 1
     */
    // max = (input1 > input2)
    //           ? ((input1 > input3) ? input1 : input3)
    //           : ((input2 > input3) ? input2 : input3);

    /**
     * Ternary operator 2
     */
    max = (input1 > input2 && input1 > input3) ? input1 : ((input2 > input3) ? input2 : input3);

    cout << "Bilangan terbesarnya adalah\t: " << max;
}
