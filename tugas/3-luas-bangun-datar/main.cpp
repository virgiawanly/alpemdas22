#include <iostream>
#include <limits>

using namespace std;

float getLuasPersegi(float sisi)
{
    return sisi * sisi;
}

float getLuasPersegiPanjang(float panjang, float lebar)
{
    return panjang * lebar;
}

float getLuasSegiTiga(float alas, float tinggi)
{
    return 0.5 * alas * tinggi;
}

float getLuasLingkaran(float jari)
{
    return 3.14 * jari * jari;
}

float getFloatInput(string question = "", string errorMessage = "")
{
    float num;
    while (cout << question && !(cin >> num))
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << errorMessage << endl;
    }
    return num;
}

void showMainMenu()
{
    cout << "----------------------------------------------------------" << endl;
    cout << "           Program Menghitung Luas Bangun Datar           " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "[1] Persegi" << endl;
    cout << "[2] Persegi Panjang" << endl;
    cout << "[3] Segi Tiga" << endl;
    cout << "[4] Lingkaran" << endl;
    cout << "[Q] Exit" << endl;
    cout << "----------------------------------------------------------" << endl;
}

void showPersegiMenu()
{
    float sisi, luas;
    bool showMenu;
    char optionInput;

    showMenu = true;
    while (showMenu)
    {
        system("clear");
        cout << "----------------------------------------------------------" << endl;
        cout << "                  Menghitung Luas Persegi                 " << endl;
        cout << "----------------------------------------------------------" << endl;

        sisi = getFloatInput("Masukan sisi\t: ", "Input tidak valid, coba lagi");

        luas = getLuasPersegi(sisi);

        system("clear");
        cout << "----------------------------------------------------------" << endl;
        cout << "                  Menghitung Luas Persegi                 " << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Sisi Persegi\t: " << sisi << endl;
        cout << "Luas Persegi\t: " << luas << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Hitung lagi (Y/n)? default (n)\t: ";
        cin >> optionInput;

        showMenu = optionInput == 'Y' || optionInput == 'y';
    }
}

void showPersegiPanjangMenu()
{
    float panjang, lebar, luas;
    bool showMenu;
    char optionInput;

    showMenu = true;
    while (showMenu)
    {
        system("clear");
        cout << "----------------------------------------------------------" << endl;
        cout << "              Menghitung Luas Persegi Panjang             " << endl;
        cout << "----------------------------------------------------------" << endl;

        panjang = getFloatInput("Masukan panjang\t: ", "Input tidak valid, coba lagi");
        lebar = getFloatInput("Masukan lebar\t: ", "Input tidak valid, coba lagi");

        luas = getLuasPersegiPanjang(panjang, lebar);

        system("clear");
        cout << "----------------------------------------------------------" << endl;
        cout << "              Menghitung Luas Persegi Panjang             " << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Panjang\t: " << panjang << endl;
        cout << "Lebar\t: " << lebar << endl;
        cout << "Luas Persegi\t: " << luas << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Hitung lagi (Y/n)? default (n)\t: ";
        cin >> optionInput;

        showMenu = optionInput == 'Y' || optionInput == 'y';
    }
}

void showSegiTigaMenu()
{
    float alas, tinggi, luas;
    bool showMenu;
    char optionInput;

    showMenu = true;
    while (showMenu)
    {
        system("clear");
        cout << "----------------------------------------------------------" << endl;
        cout << "                Menghitung Luas Segi Tiga                 " << endl;
        cout << "----------------------------------------------------------" << endl;

        alas = getFloatInput("Masukan alas\t: ", "Input tidak valid, coba lagi");
        tinggi = getFloatInput("Masukan tinggi\t: ", "Input tidak valid, coba lagi");

        luas = getLuasSegiTiga(alas, tinggi);

        system("clear");
        cout << "----------------------------------------------------------" << endl;
        cout << "                Menghitung Luas Segi Tiga                 " << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Alas\t: " << alas << endl;
        cout << "Tinggi\t: " << tinggi << endl;
        cout << "Luas Segi Tiga\t: " << luas << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Hitung lagi (Y/n)? default (n)\t: ";
        cin >> optionInput;

        showMenu = optionInput == 'Y' || optionInput == 'y';
    }
}

void showLingkaranMenu()
{
    float jari, luas;
    bool showMenu;
    char optionInput;

    showMenu = true;
    while (showMenu)
    {
        system("clear");
        cout << "----------------------------------------------------------" << endl;
        cout << "                Menghitung Luas Lingkaran                 " << endl;
        cout << "----------------------------------------------------------" << endl;

        jari = getFloatInput("Masukan jari-jari\t: ", "Input tidak valid, coba lagi");

        luas = getLuasLingkaran(jari);

        system("clear");
        cout << "----------------------------------------------------------" << endl;
        cout << "                Menghitung Luas Lingkaran                 " << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Jari-jari\t: " << jari << endl;
        cout << "Luas Lingkaran\t: " << luas << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "Hitung lagi (Y/n)? default (n)\t: ";
        cin >> optionInput;

        showMenu = optionInput == 'Y' || optionInput == 'y';
    }
}

int main()
{
    char optionInput;
    bool showMenu, inputMode;

    showMenu = true;
    while (showMenu)
    {
        system("clear");
        showMainMenu();

        cout << "Pilih menu\t: ";
        cin >> optionInput;

        showMenu = true;
        switch (optionInput)
        {
        case '1':
            showPersegiMenu();
            break;
        case '2':
            showPersegiPanjangMenu();
            break;
        case '3':
            showSegiTigaMenu();
            break;
        case '4':
            showLingkaranMenu();
            break;
        case 'q':
        case 'Q':
            showMenu = false;
            break;
        default:
            cout << "Plilihan tidak diketahui, silahkan coba lagi\t: " << endl;
            break;
        }
    }

    return 0;
}