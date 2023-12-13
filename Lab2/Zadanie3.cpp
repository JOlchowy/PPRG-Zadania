#include <iostream>
using namespace std;

int seriesF(int n) {
    if (n <= 0) {
        cout << "Nieprawidłowa wartość";
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int wynik;
        int a = 0;
        int b = 1;
        for (int i = 3; i <= n; i++) {
            wynik = a + b;
            a = b;
            b = wynik;
        }
        return b;
    }
}

int main() {
    int n;
    cout << "Podaj wartość: ";
    cin >> n;
    cout << n <<" element ciagu to: "<< seriesF(n);
}
