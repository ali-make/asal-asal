#include <conio.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    char nama[10], kelas[10];
    system("cls");

    std::cout << "Nama  : "; std::cin >> nama;
    std::cout << "Kelas : "; std::cin >> kelas;
    system("cls");
    std::cout << "----------------------" << std::endl;
    std::cout << nama << " " << kelas << std::endl;
    std::cout << "----------------------" << std::endl;
    getch();
    return 0;
}