#include <iostream>

using namespace std;

int main()
/* Zadanie 1
{
	int n,i=1;
	float punkty = 0, suma = 0, srednia;

	cout << "Podaj liczbe studentow : ";
	cin >> n;

	while (i <= n)
	{
		i++;
		cout << "Podaj punkty : ";
		cin >> punkty;
		suma += punkty;
	}
	srednia = suma / n;
	cout << srednia;
}
*/

/* Zadanie 2 & 3
{
	int n, i=1;
	float punkty = 0, suma = 0, srednia;

	cout << "Podaj liczbe studentow : ";
	cin >> n;

	while (i <= n)
		{
		i++;
			cout << "Podaj punkty (z przedzialu 0 - 100) : ";
			cin >> punkty;
			if (punkty >= 0 && punkty <= 100)
			{
				suma += punkty;
			}
			else
			{
				cout << "Podaj wartosc z przedzialu 0-100." << endl;
				continue;
			}


		}
		srednia = suma / n;
		cout << srednia;

}
*/

/* Zadanie 3
{
	int  n;
	float punkty = 0, suma = 0;

	cout << "Podaj liczbe studentow : ";
	cin >> n;

	while (true)
		{

			cout << "Podaj punkty (z przedzialu 0 - 100) : ";
			cin >> punkty;
			if (true)
			{
				suma += punkty;
			}
			else
			{
				cout << "Podaj JEDYNIE wartosc z przedzialu 0-100." << endl;
				continue;
			}


		}

}

*/

/* Zadanie 4
{
	int  n;
	float punkty = 0, suma = 0;

	cout << "Podaj liczbe studentow : ";
	cin >> n;

	do
	{

		cout << "Podaj punkty (z przedzialu 0 - 100) : ";
		cin >> punkty;
		if (true)
		{
			suma += punkty;
		}
		else
		{
			cout << "Podaj JEDYNIE wartosc z przedzialu 0-100." << endl;
			continue;
		}
	} while (true)
		;
}
*/

/* Zadanie 4
{
int i;

for (i = 1; i <= 100; i++)
{
	cout << i << ",";
}
cout << endl << endl;
for (i = 100; i >= 0; i--)
{
	cout << i << ",";
}
cout << endl << endl;
for (i = 7; i <= 77; i = i + 7)
{
	cout << i << ",";
}
cout << endl << endl;
for (i = 20; i >= 0; i = i - 2)
{
	cout << i << ",";
}
cout << endl << endl;
return 0;
}
*/