
#include <iostream>
using namespace std;

float countTubeVolume(float radius, float height)
{
    return 3.14 * radius * radius * height;
}

float countTubeSurfaceArea(float radius, float height)
{
    return 2 * 3.14 * radius * height + 2 * 3.14 * radius * radius;
}

int main()
{
    int choice;
    float radius, height, result;

    cout << "Masukkan jari-jari tabung: ";
    cin >> radius;
    cout << "Masukkan tinggi tabung: ";
    cin >> height;

    cout << "1. Luas permukaan tabung" << endl;
    cout << "2. Volume tabung" << endl;
    cout << "Pilihan anda <1-2> : ";
    cin >> choice;

    if (choice == 1)
    {
        result = countTubeSurfaceArea(radius, height);
        cout << "Luas permukaan tabung = 2 x 3.14 x " << radius << " x " << height << " + 2 x 3.14 x " << radius << " x " << radius << " = " << result << endl;
    }
    else if (choice == 2)
    {
        result = countTubeVolume(radius, height);
        cout << "Volume tabung = 3.14 x " << radius << " x " << radius << " x " << height << " = " << result << endl;
    }
    else
    {
        cout << "Pilihan tidak valid" << endl;
    }

    return 0;
}