#include <iostream>
#include <cstdlib>

using namespace std;

void zadanie1() {
    int pierwszyElement, roznica, suma, liczbaElementow;
    cout << "Wprowadz pierwszy wyraz ciagu: ";
    cin >> pierwszyElement;
    cout << "Wprowadz roznice: ";
    cin >> roznica;
    cout << "Wprowadz liczbe elementow: ";
    cin >> liczbaElementow;

    for (int i = 0; i < liczbaElementow; i++) {
        suma += pierwszyElement + i * roznica;
    }
    cout << "SUMA: " << liczbaElementow << " elementow ciagu arytmetycznego = " << suma;
}

void zadanie2() {
    string haslo = "okon", poprawneHaslo;
    cout << "Podaj haslo: ";
    cin >> poprawneHaslo;
    while (poprawneHaslo != haslo) {
        cout << "Nieprawidlowe haslo" << endl << "Podaj haslo: ";
        cin >> poprawneHaslo;
    }
    cout << "Wprowadziles poprawne haslo";

}

void zadanie3() {
    string wybor, decyzjaGracza;
    int wyborProgramu, wyborGracza, wynikGracza = 0, wynikProgramu = 0;
    while (true) {
        cout << "Co wybierasz? (0 - papier, 1 - kamien, 2 - nozyce)";
        cin >> wybor;
        wyborGracza = stoi(wybor);
        if (wyborGracza != 0 && wyborGracza != 1 && wyborGracza != 2) {
            cout << "Nieprawidlowy wybor" << endl;
            break;
        }
        wyborProgramu = rand() % 2;
        if (wyborGracza == wyborProgramu) {
//            Jest remis
            cout << "Remis";
        } else if ((wyborGracza == 0 && wyborProgramu == 1) || (wyborGracza == 1 && wyborProgramu == 2) ||
                   (wyborGracza == 2 && wyborProgramu == 0)) {
//            Gracz wygrał
            wynikGracza += 1;
            cout << "Wygrales";
        } else {
//            Gracz przegrał
            wynikProgramu += 1;
            cout << "Przegrales";
        }
        cout << "Twoj wynik: " << wynikGracza << endl << "Wynik programu: " << wynikProgramu << endl;
        while (true) {
            cout << "Gramy dalej? (tak/nie): ";
            cin >> decyzjaGracza;
            if (decyzjaGracza == "tak") {
                break;
            } else if (decyzjaGracza == "nie") {
                cout << "Dziekuje za rozgrywke";
                break;
            } else {
                cout << "Nieprawidlowy wybor";
            }
        }
        if (decyzjaGracza == "nie")
            break;
    }
}


int main() {
    int choice;

    cout << "Wybierz opcje: " << endl;
    cout << "1. Opcja 1" << endl;
    cout << "2. Opcja 2" << endl;
    cout << "3. Opcja 3" << endl;

    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Wybrales zadanie 1" << endl;
            zadanie1();
            break;
        case 2:
            cout << "Wybrales zadanie 2" << endl;
            zadanie2();
            break;
        case 3:
            cout << "Wybrales zadanie 3" << endl;
            zadanie3();
            break;
        default:
            cout << "Niepoprawny wybor. Wybierz 1, 2 lub 3." << endl;
            break;
    }

    return 0;
}
