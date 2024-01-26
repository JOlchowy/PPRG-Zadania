#include <iostream>
#include <valarray>

using namespace std;

struct Punkt {
    int x;
    int y;

    Punkt(int x, int y) : x(x), y(y) {}

};

double obliczanie_odleglosci(Punkt punkt1, Punkt punkt2) {

    //d=√((x_2-x_1)²+(y_2-y_1)²)
    double odleglosc = sqrt(pow((punkt2.x - punkt1.x), 2) + pow((punkt2.y - punkt1.y), 2));
    return odleglosc;
}

int main() {

    Punkt punkt1(1, 3);
    Punkt punkt2(3, 1);

//    punkt1.x = 1;
//    punkt1.y = 3;
//
//    punkt2.x = 3;
//    punkt2.y = 1;

    cout << "Odleglosc miedzy punktami: " << obliczanie_odleglosci(punkt1, punkt2) << endl;

    return 0;
}
