#include <iostream>
using namespace std;

float getCircleArea(float radius)
{
    float area;
    area = 3.14 * radius * radius;
    return area;
}

int main()
{
    float radius, area;
    cout << "Masukan jari-jari\t: ";
    cin >> radius;
    area = getCircleArea(radius);
    cout << "Luas lingkaran\t: " << area << endl;
    return 0;
}