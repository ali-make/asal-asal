#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void kop()
{
    cout << "\t\t  PROGRAM AKSESORIS SHOP" << endl;
    cout << "\t\t\tEUNOIA ARTS" << endl;
    cout << "\t\t==== VISUAL STUDIO CODE ===" << endl;
}

void garis()
{
    cout << "----------------------------------------------------------" << endl;
}

void kopAkhir();

string nama;
int order, harga[10], pcs[10], subHarga[10];
char kode, jawab;
string namaProduk[10];
int i;
int jHarga, uBayar, uKembali;

int main()
{
    awal:
    jHarga = 0;
    uBayar = 0;
    uKembali = 0;
    system("clear");
    kop();
    garis();
    cout << "SELAMAT DI EUNOIA ARTS" << endl << endl;
    cout << "Nama             : "; cin >> nama;
    cout << "Banyak Order     : "; cin >> order;
    cout << endl;
    garis();
    cout << "Kode" << "  " << "Produk" << "                    " << "Harga" << endl;
    garis();
    cout << "[G]" << "   " << "Gantungan Kunci" << "           " << "Rp. 5000" << endl;
    cout << "[P]" << "   " << "Pin" << "                       " << "Rp. 5000" << endl;
    cout << "[S]" << "   " << "Stiker" << "                    " << "Rp. 20000" << endl;
    cout << "[K]" << "   " << "Kalender" << "                  " << "Rp. 20000" << endl;
    garis();
    if(order > 0){
        for(i = 1; i <= order; i++ ){
            cout << "Produk Ke- " << i << endl;
            cout << "Kode Produk        : "; cin >> kode;
            if(kode == 'g' || kode == 'G'){
                namaProduk[i] = "Gantungan Kunci";
                harga[i] = 5000;
            } else if(kode == 'p' || kode == 'P'){
                namaProduk[i] = "Pin";
                harga[i] = 5000;
            } else if(kode == 's' || kode == 'S'){
                namaProduk[i] = "Stiker";
                harga[i] = 20000;
            } else {
                namaProduk[i] = "Kalender";
                harga[i] = 20000;
            }
            cout << "Jumlah Order       : "; cin >> pcs[i];
        }
    }

    system("clear");
    kopAkhir();
    garis();
    cout << endl;
    cout << "Nama Pembeli         : " << nama << endl;
    cout << endl;
    garis();
    cout << "No. |   Kode Produk   |    Harga    |Jumlah|     Sub     |" << endl;
    cout << "    |      Eunoia     |             | Order|    Harga    |" << endl; 
    garis();
    for(i = 1; i <= order; i++){
        cout << setiosflags(ios::left) << setw(2) << " ";
        cout << setiosflags(ios::left) << setw(5) << i;
        cout << setiosflags(ios::left) << setw(18) << namaProduk[i];
        cout << setiosflags(ios::left) << setw(14) << harga[i];
        cout << setiosflags(ios::left) << setw(6) << pcs[i];
        subHarga[i] = harga[i] * pcs[i];
        cout << setiosflags(ios::left) << setw(0) << subHarga[i] << endl;
        jHarga = jHarga + subHarga[i];
    }    
    garis();
    cout << setiosflags(ios::left) << setw(29) << " ";
    cout << setiosflags(ios::left) << setw(0) << "Jumlah Harga Rp." << jHarga << endl;
    cout << setiosflags(ios::left) << setw(29) << " ";
    cout << setiosflags(ios::left) << setw(0) << "Uang Bayar   Rp."; cin >> uBayar;
    uKembali = uBayar - jHarga;
    cout << setiosflags(ios::left) << setw(29) << " ";
    cout << setiosflags(ios::left) << setw(0) << "Uang Kembali Rp." << uKembali << endl;
    cout << endl;

    cout << "Nambah Lagi [Y/n] ? "; cin >> jawab;
    if(jawab == 'Y' || jawab == 'y'){
        goto awal;
    } else {
        cout << "Terimakasih Telah Berbelanja di sini <3" << endl;
        return 0;
    }
}

void kopAkhir(){
    cout << "********************** EUNOIA ARTS ***********************" << endl;
    cout << "****   Jl. Raya Kelari No. 99 Karawang - Jawa Barat   ****" << endl;
}



