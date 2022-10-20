#include <iostream>

using namespace std;

int main()
{
    float score;
    char grade;

    cout << "Masukan nilai [0-100]\t: ";
    cin >> score;

    if (score >= 0 && score <= 100)
    {
        if (score >= 80 && score <= 100)
        {
            grade = 'A';
        }
        else if (score >= 65 && score <= 79)
        {
            grade = 'B';
        }
        else if (score >= 50 && score <= 64)
        {
            grade = 'C';
        }
        else if (score >= 35 && score <= 49)
        {
            grade = 'D';
        }
        else
        {
            grade = 'D';
        }
        cout << "Nilai anda adalah\t: " << grade;
    }
    else
    {
        cout << "Nilai tidak valid";
    }

    return 0;
}