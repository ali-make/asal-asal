#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int unit, harga, ukuran;
string meal, meal_1, ukuran_1;

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
    cout << "[A]PIZZA MANIA" << endl;
    line();
    cout << "[A1]Chili Chicken" << endl;
    cout << "[A2]Chicken Sausage" << endl;
    cout << "[A3]Beef Rasher" << endl << endl;
}

void SuperValuePizza()
{
    cout << "[B]SUPER VALUE PIZZA" << endl;
    line();
    cout << "[B1]Margherita" << endl;
    cout << "[B2]Beef Delight" << endl;
    cout << "[B3]Chicken Pepperoni Feast" << endl;
    cout << "[B4]Cheesy Sausage" << endl;
    cout << "[B5]Sambal Beef" << endl << endl;
}

void ukur(){
    cout << "Ukuran                       : ";
    cin >> ukuran;
}

int main()
{
    //cout << "Program Struk Belanja!" << endl;
    PizzaMania();
    SuperValuePizza();
    cout << "Pesanan                      : "; cin >> meal;
    if(meal == "A1" || meal == "a1"){
        meal_1 = "CHILI CHICKEN";
        harga = 14546;
    } else if(meal == "A2" || meal == "a2"){
        meal_1 = "CHICKEN SAUSAGE";
        harga = 14546;
    } else if(meal == "A3" || meal == "a3"){
        meal_1 = "BEEF RASHER";
        harga = 14546;
    } else if(meal == "B1" || meal == "b1"){
        meal_1 = "MARGHERITA";
        ukur();
        switch(ukuran){
            case 1:
            ukuran_1 = "PERSONAL";
            harga = 18637;
            case 2:
            ukuran_1 = "MEDIUM";
            harga = 41364;
            case 3:
            ukuran_1 = "LARGE";
            harga = 59546;
        }
    } else if(meal == "B2" || meal == "b2"){
        meal_1 = "BEEF DELIGHT";
        ukur();
        switch (ukuran)
        {
        case 1:
            ukuran_1 = "PERSONAL";
            harga = 18637;
        case 2:
            ukuran_1 = "MEDIUM";
            harga = 41364;
        case 3:
            ukuran_1 = "LARGE";
            harga = 59546;
        }
    }

    cout << "Unit                         : "; cin >> unit;
    cout << endl;

    cout << unit << " " << ukuran << setw(20);
    cout << setiosflags(ios::left) << harga << endl;
    cout << '(' << meal_1 << ')' << endl;
    return 0;
}