#include <iostream>
#include <stdio.h>

using namespace std;

void clearConsole()
{
#if defined _WIN32
    system("cls");
#elif defined(__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
    system("clear");
#elif defined(__APPLE__)
    system("clear");
#endif
}

void printTitle()
{
    cout << "-------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\033[0;96m";
    cout << "          ___  _       _            ___  ___           _           " << endl;
    cout << "         / _ \\| |     | |           |  \\/  |          | |          " << endl;
    cout << "        / /_\\ \\ |_ __ | |__   __ _  | .  . | __ _ _ __| |_         " << endl;
    cout << "        |  _  | | '_ \\| '_ \\ / _` | | |\\/| |/ _` | '__| __|        " << endl;
    cout << "        | | | | | |_) | | | | (_| | | |  | | (_| | |  | |_         " << endl;
    cout << "        \\_| |_/_| .__/|_| |_|\\__,_| \\_|  |_/\\__,_|_|   \\__|        " << endl;
    cout << "                | |                                                " << endl;
    cout << "                |_|                                                " << endl;
    cout << "\033[0m";
    cout << "             Jl. Siliwangi no 123, Cianjur, Jawa Barat             " << endl;
    cout << endl;
    cout << "-------------------------------------------------------------------" << endl;
}

int main()
{
    string namaKasir, namaBarang, noBarang;
    long hargaBarang, subtotal, discount, payment, change;
    short qty;

    char repeatInput;
    bool repeat = true;

    clearConsole();

    while (repeat)
    {
        printTitle();

        cout << " # Nama Kasir\t\t: ";
        getline(cin >> ws, namaKasir);

        cout << " # No. Barang\t\t: ";
        getline(cin >> ws, noBarang);

        cout << " # Nama Barang\t\t: ";
        getline(cin >> ws, namaBarang);

        cout << " # Harga Barang\t\t: ";
        cin >> hargaBarang;

        cout << " # Jumlah Barang\t: ";
        cin >> qty;

        subtotal = hargaBarang * qty;
        cout << "-------------------------------------------------------------------" << endl;
        cout << " Subtotal\t\t: " << subtotal << endl;

        cout << " Potongan\t\t: ";
        cin >> discount;

        cout << endl;

        cout << " Pembayaran\t\t: ";
        cin >> payment;

        change = (subtotal - discount) > 0 ? payment - (subtotal - discount) : 0;
        cout << " Kembalian\t\t: " << change;

        cout << endl;
        cout << "Transaksi lagi? [\033[0;32mY/n\033[0m] : ";
        cin >> repeatInput;

        repeat = (repeatInput == 'Y' || repeatInput == 'y');

        clearConsole();
    }

    return 0;
}