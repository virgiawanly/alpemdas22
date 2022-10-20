#include <iostream>
#include <stdlib.h>

using namespace std;

void printTitle()
{
    cout << " /$$$$$$$  /$$                 /$$             /$$              " << endl;
    cout << "| $$__  $$|__/                | $$            | $$              " << endl;
    cout << "| $$  \\ $$ /$$  /$$$$$$   /$$$$$$$  /$$$$$$  /$$$$$$    /$$$$$$ " << endl;
    cout << "| $$$$$$$ | $$ /$$__  $$ /$$__  $$ |____  $$|_  $$_/   |____  $$" << endl;
    cout << "| $$__  $$| $$| $$  \\ $$| $$  | $$  /$$$$$$$  | $$      /$$$$$$$" << endl;
    cout << "| $$  \\ $$| $$| $$  | $$| $$  | $$ /$$__  $$  | $$ /$$ /$$__  $$" << endl;
    cout << "| $$$$$$$/| $$|  $$$$$$/|  $$$$$$$|  $$$$$$$  |  $$$$/|  $$$$$$$" << endl;
    cout << "|_______/ |__/ \\______/  \\_______/ \\_______/   \\___/   \\_______/" << endl;
}

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

int main()
{
    string nama;
    char jenisKelamin;
    long npm;
    short usia;
    int tahunKelahiran;
    float tinggiBadan;
    double beratBadan;
    bool bahagia;

    printTitle();

    cout << endl;
    cout << "Selamat datang, silahkan masukan biodata anda!";
    cout << endl;

    cout << " * \033[0;32mMasukan Nama\t\t\t\033[0m: ";
    getline(cin, nama);

    cout << " * \033[0;32mMasukan NPM\t\t\t\033[0m: ";
    cin >> npm;

    cout << " * \033[0;32mMasukan jenis kelamin [L,P]\t\033[0m: ";
    cin >> jenisKelamin;

    cout << " * \033[0;32mMasukan usia\t\t\t\033[0m: ";
    cin >> usia;

    cout << " * \033[0;32mMasukan tahun kelahiran\t\033[0m: ";
    cin >> tahunKelahiran;

    cout << " * \033[0;32mMasukan tinggi badan\t\t\033[0m: ";
    cin >> tinggiBadan;

    cout << " * \033[0;32mMasukan berat badan\t\t\033[0m: ";
    cin >> beratBadan;

    cout << " * \033[0;32mApakah anda bahagia? [0/1]\t\033[0m: ";
    cin >> bahagia;

    clearConsole();
    printTitle();

    cout << endl;
    cout << "Biodata anda:" << endl;
    cout << endl;

    cout << " * \033[0;32mNama\t\t\t\033[0m: " << nama << endl;
    cout << " * \033[0;32mNPM\t\t\t\033[0m: " << npm << endl;
    cout << " * \033[0;32mJenis Kelamin\t\033[0m: " << (jenisKelamin == 'L' ? "Laki-laki" : "Perempuan") << endl;
    cout << " * \033[0;32mUsia\t\t\t\033[0m: " << usia << endl;
    cout << " * \033[0;32mTahun Kelahiran\t\033[0m: " << tahunKelahiran << endl;
    cout << " * \033[0;32mTinggi Badan\t\t\033[0m: " << tinggiBadan << endl;
    cout << " * \033[0;32mBerat Badan\t\t\033[0m: " << beratBadan << endl;
    cout << " * \033[0;32mKondisi \t\t\033[0m: " << (bahagia ? "Bahagia" : "Tidak bahagia") << endl;

    return 0;
}