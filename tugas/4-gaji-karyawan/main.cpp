#include <iostream>
#include <stdlib.h>

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

int main()
{
    string nomorPegawai, namaPegawai;
    long gajiPokok, upahLembur, totalGaji, tunjangan;
    short jamLembur;

    const float TUNJANGAN_PERCENTAGE = static_cast<float>(10) / 100;
    const float UPAH_LEMBUR_PERCENTAGE = static_cast<float>(5) / 100;

    bool isRunning = true;
    char repeatInput;

    while (isRunning)
    {
        cout << "Program Hitung Gaji Pegawai" << endl;
        cout << endl;

        cout << "\033[0;33mIsi Data Pegawai:\033[0m" << endl;

        cout << " * \033[0;32mMasukan Nomor Pegawai\t\033[0m: ";
        getline(cin >> ws, nomorPegawai);

        cout << " * \033[0;32mMasukan Nama Pegawai\t\t\033[0m: ";
        getline(cin >> ws, namaPegawai);

        cout << " * \033[0;32mMasukan Gaji Pokok\t\t\033[0m: ";
        cin >> gajiPokok;

        cout << " * \033[0;32mMasukan Jumlah Jam Lembur\t\033[0m: ";
        cin >> jamLembur;

        tunjangan = gajiPokok * TUNJANGAN_PERCENTAGE;
        upahLembur = jamLembur * (gajiPokok * UPAH_LEMBUR_PERCENTAGE);
        totalGaji = gajiPokok + tunjangan + upahLembur;

        cout << endl;
        cout << "\033[0;33mInformasi Gaji Pegawai\033[0m" << endl;
        cout << " * \033[0;32mNomor Pegawai\t\t\033[0m: " << nomorPegawai << endl;
        cout << " * \033[0;32mNama Pegawai\t\t\t\033[0m: " << namaPegawai << endl;
        cout << " * \033[0;32mGaji Pokok\t\t\t\033[0m: " << gajiPokok << endl;
        cout << " * \033[0;32mTunjangan\t\t\t\033[0m: " << tunjangan << endl;
        cout << " * \033[0;32mUpah Lembur\t\t\t\033[0m: " << upahLembur << endl;
        cout << " * \033[0;32mTotal Gaji\t\t\t\033[0m: " << totalGaji << endl;

        cout << endl;
        cout << "Hitung lagi? [\033[0;32mY/n\033[0m] : ";
        cin >> repeatInput;

        isRunning = (repeatInput == 'Y' || repeatInput == 'y');

        clearConsole();
    }
}