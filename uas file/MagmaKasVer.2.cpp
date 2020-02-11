/*
 *Kas Magma Program 0.1.1
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
using namespace std;

void kop()
{
    cout << "==========     PT. MAGMA NUSANTARA     ==========" << endl;
    cout << "=====     Jl. Banten No.1 Karangpawitan     =====" << endl;
}

void line()
{
    cout << "-------------------------------------------------" << endl;
}

void menu()
{
    line();
    cout << "[1]             MASUKAN UANG KAS              [1]" << endl;
    line();
    cout << "[2]        DAFTAR PENGELUARAN UANG KAS        [2]" << endl;
    line();
    cout << "[3]             STATUS KAS MAGMA              [3]" << endl;
    line();
}

int main()
{
    int no;
    char answer;
    start:
    system("cls");

    line();
    kop();
    line();
    cout << endl;
    menu();
    cout << endl;
    cout << "PILIH MENU TERSEDIA" << " NO : "; cin >> no;
    if(no == 1)
    {
        system("cls");
        line();
        kop();
        line();
        cout << endl;
        cout << "menu satu" << endl;
    }
    else if(no == 2)
    {
        system("cls");
        line();
        kop();
        line();
        cout << endl;
        cout << "menu dua" << endl;
    }
    else if(no == 3)
    {
        system("cls");
        line();
        kop();
        line();
        cout << endl;
        cout << "menu tiga" << endl;
    }
    else
    {
        system("cls");
        line();
        kop();
        line();
        cout << endl;
        cout << "mEnU tIdaK tErsDia!!" << endl;
        cout << "Anda Keluar dari Program..." << endl;
    }

    cout << endl;
    cout << "Kembali ke start [Y/n] : "; cin >> answer;
    if(answer == 'y' || answer == 'Y')
    {
        goto start;
    }
    
    getch();
    return 0;
}
