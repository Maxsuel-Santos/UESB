#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float area, litrosTintaTotal, galoesTres;
    int galoesDezoito;

    cout << "INFORME A ÁREA A SER PINTADA EM M²: ";
    cin >> area;

    litrosTintaTotal = (area / 6) * 1.1; // Folga de 10%

    cout << fixed << setprecision(2);

    cout << "Quantidade de latas de 18 litros: " 
    << ceil(litrosTintaTotal / 18) 
    << "\nValor total: " 
    << ceil(litrosTintaTotal / 18) * 80;
    
    cout << "\nQuantidade de latas de 3,6 litros: " 
    << ceil(litrosTintaTotal / 3.6) 
    << "\nValor total: " 
    << ceil(litrosTintaTotal / 3.6) * 25;

    galoesDezoito = (int)(litrosTintaTotal / 18);
    galoesTres = ceil((litrosTintaTotal - (galoesDezoito * 18)) / 3.6);

    cout << "-----------------------------------------------------------";

    cout << "\nQUANT. GALÕES DE 18L: " 
    << galoesDezoito 
    << "\nQUANT. GALOES DE 3.6L: " 
    << galoesTres << "\nCUSTO TOTAL: " 
    << galoesDezoito * 80 + galoesTres * 25;

    return 0;
}