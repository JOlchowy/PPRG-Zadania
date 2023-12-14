#include <iostream>
#include <cmath>

using namespace std;

bool szescian(int a, int b) {
    if (pow(a, 3) == b) {
        cout << "Liczba jest szescianem";
        return 1;
    } else {
        cout << "Liczba nie jest szescianem";
        return 0;
    }
}

int main() {
    szescian(2, 9);

}
