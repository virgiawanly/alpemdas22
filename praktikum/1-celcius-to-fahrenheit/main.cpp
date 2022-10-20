#include <iostream>
using namespace std;

int main()
{
    float celcius, fahrenheit;

    cout << "Inputkan suhu dalam satuan ceclius\t: ";
    cin >> celcius;

    fahrenheit = (1.8 * celcius) + 32;
    cout << "Suhu dalam fahrenheit\t\t\t: " << fahrenheit << endl;

    return 0;
}