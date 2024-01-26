#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

bool porownajOsoby(const Osoba &osoba1, const Osoba &osoba2) {
    if (osoba1.nazwisko != osoba2.nazwisko) {
        return osoba1.nazwisko < osoba2.nazwisko;
    } else if (osoba1.imie != osoba2.imie) {
        return osoba1.imie < osoba2.imie;
    } else {
        return osoba1.wiek < osoba2.wiek;
    }
}

void wyswietlOsobe(const Osoba &osoba) {
    cout << osoba.imie << " " << osoba.nazwisko << ", " << osoba.wiek << " lat" << endl;
}

void wyswietlTablice(const vector<Osoba> &osoby, int a = -1, int b = -1) {
    if (a < 0) {
        a = 0;
    }
    if (b >= osoby.size() || b < 0) {
        b = osoby.size() - 1;
    }
    for (int i = a; i <= b; ++i) {
        wyswietlOsobe(osoby[i]);
    }
}

void wyswietlOsobyMlodszeNiz(const vector<Osoba> &osoby, int wiek) {
    for (const auto &osoba: osoby) {
        if (osoba.wiek <= wiek) {
            wyswietlOsobe(osoba);
        }
    }
}

int main() {
    vector<Osoba> osoby;

    while (true) {
        cout << "\nMenu Glowne:\n";
        cout << "1. Dodaj osobe\n";
        cout << "2. Wyswietl wszystkie osoby\n";
        cout << "3. Wyswietl wybrane osoby\n";
        cout << "4. Wyswietl osoby mlodsze niz\n";
        cout << "5. Wyjdz z programu\n";

        int wybor;
        cout << "Wybierz opcje: ";
        cin >> wybor;

        switch (wybor) {
            case 1: {
                Osoba nowaOsoba;
                cout << "Podaj imie: ";
                cin >> nowaOsoba.imie;
                cout << "Podaj nazwisko: ";
                cin >> nowaOsoba.nazwisko;
                cout << "Podaj wiek: ";
                cin >> nowaOsoba.wiek;
                osoby.push_back(nowaOsoba);
                cout << "Osoba dodana.\n";
                break;
            }
            case 2: {
                sort(osoby.begin(), osoby.end(), porownajOsoby);
                wyswietlTablice(osoby);
                break;
            }
            case 3: {
                int a, b;
                cout << "Podaj indeks A: ";
                cin >> a;
                cout << "Podaj indeks B: ";
                cin >> b;
                if (a > osoby.size() || b > osoby.size()) {
                    cout << "Niepoprawny indeks";
                } else {
                    wyswietlTablice(osoby, a, b);
                }
                break;
            }
            case 4: {
                int wiek;
                cout << "Podaj wiek: ";
                cin >> wiek;
                wyswietlOsobyMlodszeNiz(osoby, wiek);
                break;
            }
            case 5: {
                cout << "Koniec programu.\n";
                return 0;
            }
            default:
                cout << "Nieprawidlowy wybor. Sprobuj ponownie.\n";
        }
    }

    return 0;
}
