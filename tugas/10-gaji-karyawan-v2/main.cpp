/**
 * Soal
 *
 * Gaji yang diterima pegawai terdiri dari gaji pokok, tunjangan dan upah lembur.
 * (*) Gaji pokok ditentukan berdasarkan jabatan dari pegawai yang bersangkutan
 *      - Operator : Rp2.000.000
 *      - Manajer  : Rp3.500.000
 * (*) Tujangan ditentukan berdasarkan status pernikahan pegawai yang bersangkutan
 *      - Jika pegawai belum menikah maka tunjangan yang didapat 5% dari gaji pokok
 *      - Jika pegawai sudah menikah maka tunjangan yang didapat 10% dari gaji pokok
 *      - Jika pegawai sudah menikah dan mempunyai anak maka tunjangan yang didapat 15% dari gaji pokok
 * (*) Upah lembur ditentukan berdasarkan:
 *      - Besarnya uang lembur 2.5% dari gaji pokok
 *      - Seorang pegawai tidak boleh lembur lebih dari 20 jam per bulannya
 *
 */

#include <iostream>

using namespace std;

int main()
{
    const string JABATAN_OPERATOR = "Operator";
    const string JABATAN_MANAGER = "Manager";

    const string STATUS_LAJANG = "Lajang";
    const string STATUS_MENIKAH = "Sudah Menikah";
    const string STATUS_BERANAK = "Mempunyai Anak";

    const long GAJI_OPERATOR = 2000000;
    const long GAJI_MANAGER = 3500000;

    const float TUNJANGAN_LAJANG_PERCENT = 5;
    const float TUNJANGAN_MENIKAH_PERCENT = 10;
    const float TUNJANGAN_BERANAK_PERCENT = 15;

    const short MAX_JAM_LEMBUR = 20;
    const float HONOR_LEMBUR_PERCENT = 2.5;

    string nomorPegawai, namaPegawai, jabatanPegawai, statusPegawai;
    short jamLembur;
    long gajiPokok, tunjangan, honorLembur;

    bool selectMode;
    char optionInput;

    cout << "Program Penggajian Pegawai PT ABC" << endl;
    cout << endl;

    cout << "Nomor Pegawai\t\t: ";
    getline(cin >> ws, nomorPegawai);

    cout << "Nama Pegawai\t\t: ";
    getline(cin >> ws, namaPegawai);

    cout << "Jabatan\t\t\t: ";
    cout << "1. " << JABATAN_MANAGER << endl;
    cout << "\t\t\t: ";
    cout << "2. " << JABATAN_OPERATOR << endl;

    selectMode = true;
    while (selectMode)
    {
        selectMode = false;
        cout << "Pilih Jabatan (\033[0;32m1/2\033[0m)\t: ";
        cin >> optionInput;

        switch (optionInput)
        {
        case '1':
            jabatanPegawai = JABATAN_MANAGER;
            gajiPokok = GAJI_MANAGER;
            break;
        case '2':
            jabatanPegawai = JABATAN_OPERATOR;
            gajiPokok = GAJI_OPERATOR;
            break;
        default:
            cout << "* \033[0;31mPilihan tidak valid, coba lagi\033[0m" << endl;
            selectMode = true;
            break;
        }
    }

    cout << "Status Pernikahan\t: ";
    cout << "1. " << STATUS_LAJANG << endl;
    cout << "\t\t\t: ";
    cout << "2. " << STATUS_MENIKAH << endl;
    cout << "\t\t\t: ";
    cout << "3. " << STATUS_BERANAK << endl;

    selectMode = true;
    while (selectMode)
    {
        selectMode = false;
        cout << "Pilih Status (\033[0;32m1/2/3\033[0m)\t: ";
        cin >> optionInput;

        switch (optionInput)
        {
        case '1':
            statusPegawai = STATUS_LAJANG;
            tunjangan = gajiPokok * (TUNJANGAN_LAJANG_PERCENT / 100);
            break;
        case '2':
            statusPegawai = STATUS_MENIKAH;
            tunjangan = gajiPokok * (TUNJANGAN_MENIKAH_PERCENT / 100);
            break;
        case '3':
            statusPegawai = STATUS_BERANAK;
            tunjangan = gajiPokok * (TUNJANGAN_BERANAK_PERCENT / 100);
            break;
        default:
            cout << "* \033[0;31mPilihan tidak valid, coba lagi\033[0m" << endl;
            selectMode = true;
            break;
        }
    }

    selectMode = true;
    while (selectMode)
    {
        selectMode = false;
        cout << "Jumlah Jam Lembur\t: ";
        cin >> jamLembur;

        if (jamLembur < 0)
        {
            cout << "* \033[0;31mJam lembur tidak boleh kurang dari 0\033[0m" << endl;
            selectMode = true;
            continue;
        }

        if (jamLembur > MAX_JAM_LEMBUR)
        {
            cout << "* \033[0;31mPegawai tidak boleh lembur lebih dari " << MAX_JAM_LEMBUR << " jam perbulan\033[0m" << endl;
            selectMode = true;
            continue;
        }

        honorLembur = jamLembur * (gajiPokok * (HONOR_LEMBUR_PERCENT / 100));
    }

    // Clear console, ganti ke system("cls") untuk windows CMD
    system("clear");

    cout << "Program Penggajian Pegawai PT ABC" << endl;
    cout << endl;

    cout << "Nomor Pegawai\t\t: " << nomorPegawai << endl;
    cout << "Nama Pegawai\t\t: " << namaPegawai << endl;
    cout << "Jabatan\t\t\t: " << jabatanPegawai << endl;
    cout << "Status Pernikahan\t: " << statusPegawai << endl;
    cout << "Gaji Pokok\t\t: Rp. " << gajiPokok << endl;
    cout << "Tujangan\t\t: Rp. " << tunjangan << endl;
    cout << "Honor Lembur\t\t: Rp. " << honorLembur << endl;
    cout << "Total Gaji\t\t: Rp. " << (gajiPokok + tunjangan + honorLembur) << endl;
}