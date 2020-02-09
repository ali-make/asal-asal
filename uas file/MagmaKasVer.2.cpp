/*
 *Kas Magma Program 0.1.1
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
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
    cout << "\t\t\t[1]" << endl;
    cout << ">>>>>>>>>>      MASUKAN UANG KAS      <<<<<<<<<<" << endl;
    line();
    cout << "\t\t\t[2]" << endl;
    cout << ">>>>>>>>>  DAFTAR PENGELUARAN UANG KAS  <<<<<<<<<" << endl;
    line();
    cout << "\t\t\t[3]" << endl;
    cout << ">>>>>>>>>>      STATUS KAS MAGMA      <<<<<<<<<<" << endl;
    line();
    cout << "\t\t       [EXIT]" << endl;
    line();
}

int main()
{
    line();
    kop();
    line();
    cout << endl;
    menu();

    return 0;
}
