#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    //using namespace std;
    char nama[10], kelas[10];
    system("cls");

    cout << "Nama  : "; cin >> nama;
    cout << "Kelas : "; cin >> kelas;
    system("cls");
    cout << "----------------------" << endl;
    cout << nama << " " << kelas << endl;
    cout << "----------------------" << endl;
    getch();
    return 0;
}