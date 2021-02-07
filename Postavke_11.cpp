#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete omogućiti unos dva prirodna broja. Provjerite čine li uneseni brojevi prijateljski par.
Prirodni brojevi a i b čine prijateljski par brojeva ako je zbir pravih djelitelja broja a (onih koji su manji od a)
jednak broju b i istovremeno zbir pravih djelitelja broja b jednak je broju a. Npr. Brojevi 220 i 284 su prijateljski brojevi.
Pravi djelitelji broja 220 su: 1, 2, 4, 5, 10, 11, 20, 22, 55, 110, a njihova suma iznosi 284; Pravi djelitelji broja 284 su: 1, 2, 4, 71, 142 a njihova suma iznosi 220. Upotrijebite funkcije:

int suma_pravih_djelitelja (int);
bool provjera (int, int);
*/

int suma_pravih_djelitelja(int);
bool provjera(int, int);

int main()
{
	cout << "Unesite dva prirodna broja: ";
	int a, b;
	cin >> a >> b;

	cout << "Brojevi " << a << " i " << b << " cine prijateljski par? " << boolalpha << provjera(a, b);
}

int suma_pravih_djelitelja(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	cout << "Suma djelitelja broja " << n << " iznosi: " << sum << "\n";
	return sum;
}

bool provjera(int n, int m) {
	return m == suma_pravih_djelitelja(n) && n == suma_pravih_djelitelja(m);
}
