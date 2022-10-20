#include <iostream>

using namespace std;

int main()
{
    string laluLintas, lampu;
    char optionInput;

    cout << "Warna Lampu Lalu Lintas" << endl;
    cout << "1. Merah\t \033[1;31m[*]\033[0m" << endl;
    cout << "2. Kuning\t \033[1;33m[*]\033[0m" << endl;
    cout << "3. Hijau\t \033[1;32m[*]\033[0m" << endl;

selectOption:

    cout << "Pilih warna lampu\t: ";
    cin >> optionInput;
    switch (optionInput)
    {
    case '1':
        laluLintas = "Berhenti";
        break;
    case '2':
        laluLintas = "Siap-siap";
        break;
    case '3':
        laluLintas = "Berjalan";
        break;
    default:
        cout << "Pilihan tidak sesuai, coba lagi" << endl;
        goto selectOption;
        break;
    }

    cout << "Laju kendaraan\t: " << laluLintas;
}