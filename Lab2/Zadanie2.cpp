#include <iostream>
using namespace std;

int main()
{
	int start, end;
	int suma1 = 0;
	int suma2 = 0;
	cout << "Poczatek zakresu: ";
	cin >> start;
	cout << "Koniec zakresu: ";
	cin >> end;
	if (start >= end || start <= 0)
	{
		cout << "Nieprawidłowy zakres";
		return 0;
	}
	for (int i = start; i <= end; i++)
	{
		for (int j = 1; j < i / 2 + 1; j++)
		{
			if (i % j == 0)
			{
				suma1 += j;
			}
		}
		for (int k = start; k <= i; k++)
		{
			for (int l = 1; l < k / 2 + 1; l++)
			{
				if (k % l == 0)
				{
					suma2 += l;
				}
			}
			if (suma1 == k && suma2 == i && k != i)
			{
				cout << k << " oraz " << i << endl;
			}
			suma2 = 0;
		}
		suma1 = 0;
	}
}