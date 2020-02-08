/*
 *Magma Kas ver. 1
*/
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

//Fungsi

void kop()
{
    cout << "PT. MAGMA NUSANTARA" << endl;
    cout << "Jl. Banten No. 1, Karangpawitan" << endl;
    cout << "Kec. Karawang Barat, Kab. Karawang" << endl;
    cout << "Jawa Barat - 41361" << endl
         << endl
         << endl;
}

void menu_satu()
{
    cout << "\t\t\t\tMENU-1 KAS MAGMA" << endl;
    cout << "================================================================================" << endl;
    cout << '\n';
}

void menu_dua()
{
    cout << "\t\t\t\tMENU-2 KAS MAGMA" << endl;
    cout << "================================================================================" << endl;
    cout << '\n';
}

void menu_tiga()
{
    cout << "\t\t\t\tMENU-3 KAS MAGMA" << endl;
    cout << "================================================================================" << endl;
    cout << '\n';
}

void garis_l()
{
    cout << "--------------------------------------------------------------------------------" << endl;
}

void garis_s()
{
    cout << "---------------------------------------------------------------------" << endl;
}

void kas_masuk()
{
    cout << "KAS MASUK.." << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << setiosflags(ios::left) << setw(5) << "No.";
    cout << setiosflags(ios::left) << setw(15) << "   ";
    cout << setiosflags(ios::left) << setw(8) << "OKI R";
    cout << setiosflags(ios::left) << setw(8) << "ALI N";
    cout << setiosflags(ios::left) << setw(8) << "CINDY";
    cout << setiosflags(ios::left) << setw(8) << "TEBE";
    cout << setiosflags(ios::left) << setw(8) << "HABIL";
    cout << setiosflags(ios::left) << setw(8) << "NAMAN";
    cout << setiosflags(ios::left) << "Jumlah" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
}

void kas_keluar()
{
    cout << "KAS KELUAR.." << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << setw(2) << " ";
    cout << setiosflags(ios::left) << setw(5) << "No.";
    cout << setiosflags(ios::left) << setw(30) << "Description";
    cout << setiosflags(ios::left) << setw(5) << "QTY";
    cout << setiosflags(ios::left) << setw(7) << "Unit";
    cout << setiosflags(ios::left) << setw(10) << "Harga";
    cout << setiosflags(ios::left) << setw(10) << "Jumlah" << endl;
    cout << "---------------------------------------------------------------------" << endl;
}

struct
{
    string tgl;
    int oki, ali, habil, naman, cindy, tebe, subtotal;
} ssatu[100];

struct
{
    string des;
    int qty;
    char unit[10];
    int harga;
    int j_harga;
} sdua[100];

main()
{

    //deklarasi

    int a, c;
    int pilih, jwb1, jwb2;
    int tekan, total, total_1;
    total = 0;
    total_1 = 0;
    system("clear");

    //Magma Main Menu

menu:
    system("clear");
    cout << '\n';
    kop();
    cout << "[1] KAS MASUK" << endl;
    cout << "[2] KAS KELUAR" << endl;
    cout << "[3] DATA KAS" << endl;
    cout << '\n';
    cout << "[EXIT].." << endl;
    cout << '\n';

    cout << "Pilih Menu Nomor : ";
    cin >> pilih;
    system("clear");

    //seleksi kondisi

    switch (pilih)
    {
    case 1:
        cout << '\n';
        menu_satu();

        cout << "Input Kas Masukan.." << endl;
        cout << '\n';
        cout << "Masukan Berapa Banyak Data   : ";
        cin >> jwb1;
        system("clear");
        cout << '\n';
        if (jwb1 > 0)
        {
            for (a = 1; a <= jwb1; a++)
            {
                cout << "Data ke- " << a << endl
                     << endl;
                cin.ignore();
                cout << "Date                 : ";
                getline(cin, ssatu[a].tgl);
                cout << '\n';
                cout << "OKI                  : ";
                cin >> ssatu[a].oki;
                cout << "TEBE                 : ";
                cin >> ssatu[a].tebe;
                cout << "CINDY                : ";
                cin >> ssatu[a].cindy;
                cout << "ALI                  : ";
                cin >> ssatu[a].ali;
                cout << "HABIL                : ";
                cin >> ssatu[a].habil;
                cout << "NAMAN                : ";
                cin >> ssatu[a].naman;
                cout << endl;
            }
            system("clear");
        }
        cout << '\n';
        menu_satu();
        kas_masuk();

        for (a = 1; a <= jwb1; a++)
        {
            cout << setiosflags(ios::left) << setw(5) << a;
            cout << setiosflags(ios::left) << setw(15) << ssatu[a].tgl;
            cout << setiosflags(ios::left) << setw(8) << ssatu[a].oki;
            cout << setiosflags(ios::left) << setw(8) << ssatu[a].ali;
            cout << setiosflags(ios::left) << setw(8) << ssatu[a].cindy;
            cout << setiosflags(ios::left) << setw(8) << ssatu[a].tebe;
            cout << setiosflags(ios::left) << setw(8) << ssatu[a].habil;
            cout << setiosflags(ios::left) << setw(8) << ssatu[a].naman;
            ssatu[a].subtotal = ssatu[a].oki + ssatu[a].ali + ssatu[a].habil + ssatu[a].naman + ssatu[a].cindy + ssatu[a].tebe;
            cout << setiosflags(ios::left) << "Rp." << ssatu[a].subtotal << endl;
            total = total + ssatu[a].subtotal;
        }
        garis_l();
        cout << setiosflags(ios::left) << setw(60) << "     ";
        cout << setiosflags(ios::left) << setw(8) << "TOTAL";
        cout << setprecision(ios::left) << "Rp." << total;

        cout << '\n';
        cout << "Tekan 1 untuk kembali : ";
        cin >> tekan;
        if (tekan == 1)
        {
            goto menu;
        }
        else
        {
            goto menu;
        }
        break;

    case 2:
        cout << '\n';
        menu_dua();

        cout << "Input Kas Keluaran.." << endl;
        cout << '\n';
        cout << "Masukan Berapa Banyak Data       : ";
        cin >> jwb2;
        system("clear");
        cout << '\n';
        if (jwb2 > 0)
        {
            for (c = 1; c <= jwb2; c++)
            {
                cout << "Data ke- " << c << endl;
                cin.ignore();
                cout << "Masukan Description       : ";
                getline(cin, sdua[c].des);
                cout << "Masukan QTY               : ";
                cin >> sdua[c].qty;
                cout << "Masukan Unit              : ";
                cin >> sdua[c].unit;
                cout << "Masukan Harga per Unit    : ";
                cin >> sdua[c].harga;
                cout << '\n';
            }
            system("clear");
        }
        cout << '\n';
        menu_dua();
        kas_keluar();

        for (c = 1; c <= jwb2; c++)
        {
            cout << setw(2) << " ";
            cout << setiosflags(ios::left) << setw(5) << c;
            cout << setiosflags(ios::left) << setw(30) << sdua[c].des;
            cout << setiosflags(ios::left) << setw(5) << sdua[c].qty;
            cout << setiosflags(ios::left) << setw(7) << sdua[c].unit;
            cout << setiosflags(ios::left) << setw(10) << sdua[c].harga;
            sdua[c].j_harga = sdua[c].qty * sdua[c].harga;
            cout << setiosflags(ios::left) << "Rp." << sdua[c].j_harga << endl;
            total_1 = total_1 + sdua[c].j_harga;
        }
        garis_s();
        cout << setiosflags(ios::left) << setw(49) << "     ";
        cout << setiosflags(ios::left) << setw(10) << "Total";
        cout << setiosflags(ios::left) << "Rp." << total_1;

        cout << '\n';
        cout << "Tekan 1 untuk kembali : ";
        cin >> tekan;
        if (tekan == 1)
        {
            goto menu;
        }
        else
        {
            goto menu;
        }
        break;

    case 3:
        cout << '\n';
        menu_tiga();
        cout << "Total Kas : " << total << endl;
        cout << "Total Belanja : " << total_1 << endl;
        cout << '\n';
        cout << "Tekan 1 untuk kembali : ";
        cin >> tekan;
        if (tekan == 1)
        {
            goto menu;
        }
        else
        {
            goto menu;
        }
        break;

    default:
        cout << "Anda Yakin Keluar!?" << endl;
        cout << "Tekan Enter untuk EXIT this program" << endl;
        break;
    }

    return 0;
}