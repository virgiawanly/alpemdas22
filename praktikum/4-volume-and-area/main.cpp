#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float sisi, r, tinggi, volumeKubus, luasLingkaran, volumeSilinder, phi = 3.14;

    cout << "Pilih salah satu : " << endl;
    cout << "1. Volume kubus" << endl;
    cout << "2. Luas Lingkaran" << endl;
    cout << "3. Volume Silinder" << endl;
    cout << "Pilihan : ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Masukkan sisi kubus : ";
            cin >> sisi;
            volumeKubus = sisi * sisi * sisi;
            cout << "Volume kubus = " << volumeKubus << endl;
            break;
        case 2:
            cout << "Masukkan jari-jari lingkaran : ";
            cin >> r;
            luasLingkaran = phi * r * r;
            cout << "Luas lingkaran = " << luasLingkaran << endl;
            break;
        case 3:
            cout << "Masukkan jari-jari silinder : ";
            cin >> r;
            cout << "Masukkan tinggi silinder : ";
            cin >> tinggi;
            volumeSilinder = phi * r * r * tinggi;
            cout << "Volume silinder = " << volumeSilinder << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
    }

    return 0;
}