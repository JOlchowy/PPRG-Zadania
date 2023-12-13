#include <iostream>
using namespace std;

int main()
{
    bool is_prime = true;
    int start, end;
    cout << "Podaj poczatek zakresu: ";
    cin >> start;
    cout << "Podaj koniec zakresu: ";
    cin >> end;

    if (start > end || start <= 0)
    {
        cout << "Nieprawidłowy zakres";
        return 0;
    }
    for (int i = start; i <= end; i++)
    {
        if (i == 1) continue;
        for (int j = 2; j < i / 2 + 1; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            cout << i << endl;
        }
        is_prime = true;
    }
}