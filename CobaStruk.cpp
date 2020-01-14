#include <iostream>
#include <string>

using namespace std;
int kategori, unit, harga;
string kategori_1, meal, meal_1;

void line()
{
    std::cout << "----------------------------------------" << std::endl;
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
    cout << "Pilih Kategori               : "; cin >> kategori;
    if(kategori == 1)
    {
        kategori_1 = "Pizza Mania";
    } else {
        kategori_1 = "Super Value Pizza";
    }
    cout << "Pilih Pesanan                : "; cin >> meal;
    if(meal == "1A" || meal == "1a"){
        meal_1 = "Chili Chicken";
    } else if(meal == "2A" || meal == "2a"){
        meal_1 = "Chicken Sausage";
    } else {
        meal_1 = "Beef Rasher";
    }

    if(meal == "1B" || meal == "1b"){
        meal_1 = "Margherita";
    } else if(meal == "2B" || meal == "2b"){
        meal_1 = "Beef Delight";
    } else if(meal == "3B" || meal == "3b"){
        meal_1 = "Chicken Pepperoni Feast";
    } else if(meal == "4B" || meal == "4b"){
        meal_1 = "Cheesy Sausage";
    } else {
        meal_1 = "Sambal Beef";
    }

    cout << "Berapa Unit                  : "; cin >> unit; 
    cout << endl;

    cout << kategori_1 << endl;
    cout << meal_1 << endl;
    return 0;
}