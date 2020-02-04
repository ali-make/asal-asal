#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <conio.h>
using namespace std;

void kop()
{
    cout << "\t      PROGRAM ACCESORIS SHOP" << endl;
    cout << "\t\t    EUNOIA ART" << endl;
    cout << "\t    --- VISUAL STUDIO CODE ---" << endl;
}

void line()
{
    cout << "--------------------------------------------------" << endl;
}

void kopAkhir();

int main()
{
    string namaCusto, produk[10];
    int order, jOrder[10], harga[10], sHarga[10];
    int i;
    char kode, add;
    int jHarga, uBay, uKem;

    awal:
    system("cls");
    jHarga = 0;
    uKem = 0;
    
    kop();
    line();
    cout << endl;
    cout << "SELAMAT DATANG DI EUNOIA ART" << endl << endl;
    cout << "Nama Customer            : "; cin >> namaCusto;
    cout << "Banyak Order             : "; cin >> order;
    cout << endl;
    line();
    cout << "Kode" << "  " << "Produk             " << "Harga" << endl;
    line();
    cout << "[G]" << "   " << "GANTUNGAN KUNCI    " << "Rp.5000" << endl;
    cout << "[P]" << "   " << "PIN                " << "Rp.5000" << endl;
    cout << "[S]" << "   " << "STIKER             " << "Rp.20000" << endl;
    cout << "[K]" << "   " << "KALENDER           " << "Rp.20000" << endl;
    line();
    for(i = 1; i <= order; i++){
        cout << "Produk Ke-" << i << endl;
        cout << "Kode Produk         : "; cin >> kode;
        if(kode == 'g' || kode == 'G'){
            produk[i] = "Gantungan Kunci";
            harga[i] = 5000;
        } else if(kode == 'p' || kode == 'P'){
            produk[i] = "Pin";
            harga[i] = 5000;
        } else if(kode == 's' || kode == 'S'){
            produk[i] = "Stiker";
            harga[i] = 20000;
        } else if(kode == 'k' || kode == 'K'){
            produk[i] = "Kalender";
            harga[i] = 20000;
        } else {
            produk[i] = "null";
            harga[i] = 0;
        }
        cout << "Jumlah Order        : "; cin >> jOrder[i];
        line();
    }
    system("cls");
    kopAkhir();
    line();
    cout << endl;
    cout << "Nama Pembeli            : " << namaCusto << endl;
    cout << endl;
    line();
    cout << "No.|    Kode Produk    |  Harga  | Pcs |   Sub   |" << endl;
    cout << "   |      Eunoia       |         |     |  Harga  |" << endl;
    line();
    for(i = 1; i <= order; i++){
        cout << setiosflags(ios::left) << setw(1) << " ";
        cout << setiosflags(ios::left) << setw(4) << i;
        cout << setiosflags(ios::left) << setw(20) << produk[i];
        cout << setiosflags(ios::left) << setw(11) << harga[i];
        cout << setiosflags(ios::left) << setw(5) << jOrder[i];
        sHarga[i] = harga[i]*jOrder[i];
        cout << setiosflags(ios::left) << setw(0) << sHarga[i] << endl;
        jHarga = jHarga + sHarga[i];
    } 
    line();
    cout << setiosflags(ios::left) << setw(25) << " ";
    cout << setiosflags(ios::left) << setw(0) << "Jumlah Harga Rp." << jHarga << endl;
    cout << setiosflags(ios::left) << setw(25) << " ";
    cout << setiosflags(ios::left) << setw(0) << "Uang Bayar   Rp."; cin >> uBay;
    uKem = uBay - jHarga;
    cout << setiosflags(ios::left) << setw(25) << " ";
    cout << setiosflags(ios::left) << setw(0) << "Uang Kembali Rp." << uKem;
    cout << endl << endl;
    cout << "Tambah Order ? [Y/n] : "; cin >> add;
    if(add == 'y' || add == 'Y'){
        goto awal;
    } else {
        cout << "Terimakasih telah berbelanja di toko kami~ <3" << endl;
        getch();
    }

    return 0;
}

void kopAkhir()
{
    cout << "******************* EUNOIA ART *******************" << endl;
    cout << "**     Jl. Raya Klari No.99 Karawang - Jawa     **" << endl;
}
