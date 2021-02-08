#include <iostream>

using namespace std;

/*
Napišite program koji omogućava da se ispišu svi brojevi koji zadovoljavaju uvjet da im je zapis jednak zapisu posljednjih znamenki njihovog kvadrata.
(Npr. 6^2=36, 25^2=625 … ) Provjeru vršiti za prvih 150 prirodnih brojeva.

Upotrijebite funkciju:
bool provjera (int);
*/

bool provjera(int);

int main()
{
	for (int i = 1; i <= 150; i++) {
		if (provjera(i)) {
			cout << i << "\n";
		}
	}
}

bool provjera(int n) {
	int kvadrat = n * n;

	while (n != 0) {
		int cifraOriginala = n % 10;
		int cifraKvadrata = kvadrat % 10;
		n /= 10;
		kvadrat /= 10;

		if (cifraKvadrata != cifraOriginala) {
			return false;
		}
	}
	return true;
}
