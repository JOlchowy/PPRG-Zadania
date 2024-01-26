#include <iostream>
#include <cmath>
using namespace std;

void sumy_ciagu(double pierwszy_wyraz, double roznica_iloraz, int liczba_elementow) {
    double suma_arytmetyczna = liczba_elementow * (2 * pierwszy_wyraz + (liczba_elementow - 1) * roznica_iloraz) / 2;

    double suma_geometryczna;
    if (roznica_iloraz != 1.0) {
        suma_geometryczna = pierwszy_wyraz * (1 - pow(roznica_iloraz, liczba_elementow)) / (1 - roznica_iloraz);
    } else {
        suma_geometryczna = liczba_elementow * pierwszy_wyraz;
    }
    cout << "Suma ciągu arytmetycznego: " << suma_arytmetyczna << endl;
    cout << "Suma ciągu geometrycznego: " << suma_geometryczna << endl;
}

int main() {
    double pierwszy_wyraz;
    double roznica_iloraz;
    int liczba_elementow;

    cout << "Wpisz pierwszy element ciagu: ";
    cin >> pierwszy_wyraz;
    cout << "Wpisz roznice / iloraz ciagu: ";
    cin >> roznica_iloraz;
    cout << "Wpisz liczbe wyrazow ciagu: ";
    cin >> liczba_elementow;
    sumy_ciagu(pierwszy_wyraz, roznica_iloraz, liczba_elementow);
}