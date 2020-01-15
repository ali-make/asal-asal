#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int kategori, unit, harga;
string kategori_1, meal, meal_1;
char ukuran;

void line()
{
    cout << "----------------------------------------" << endl;
}

void toko() 
{
    cout << "Domino's Pizza Galuh Mas 91954" << endl;
}

void alamat_pusat()
{
    cout << "Sahid Sudirman Center Lt.27" << endl;
    cout << "Jl. Jend Sudirman Kav.86 Jakarta" << endl;
    cout << "ABN: NPWP: 02.505.566.6-022.00" << endl;
}

void PT()
{
    cout << "PT. Dom Pizza Indonesia" << endl;
    cout << "www.dominos.co.id" << endl;
}

// Kategori Menu Pizza
void PizzaMania()
{
    cout << "[1]PIZZA MANIA" << endl;
    line();
    cout << "[1A]Chili Chicken" << endl;
    cout << "[2A]Chicken Sausage" << endl;
    cout << "[3A]Beef Rasher" << endl << endl;
}

void SuperValuePizza()
{
    cout << "[2]SUPER VALUE PIZZA" << endl;
    line();
    cout << "[1B]Margherita" << endl;
    cout << "[2B]Beef Delight" << endl;
    cout << "[3B]Chicken Pepperoni Feast" << endl;
    cout << "[4B]Cheesy Sausage" << endl;
    cout << "[5B]Sambal Beef" << endl << endl;
}

int main()
{
    //cout << "Program Struk Belanja!" << endl;
    PizzaMania();
    SuperValuePizza();
    cout << "Pesanan                      : "; cin >> meal;
    cout << "Unit                         : "; cin >> unit;
    cout << "Ukuran                       : "; cin >> ukuran; 
    cout << endl;

    cout << unit << " " << ukuran;
    cout << setiosflags(ios::left) << setw(20) << harga << endl;
    cout << '(' << meal_1 << ')' << endl;
    return 0;
}