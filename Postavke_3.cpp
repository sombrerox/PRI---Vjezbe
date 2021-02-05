#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete omogućiti unos prirodnog broja.
Provjerite je li broj trivijalan (prost) uz pomoć funkcije: bool trivijalan (int);.
U slučaju da broj nije trivijalan (prost) odredite i ispište sve njegove djelitelje uz pomoć funkcije: void djelitelji(int);
*/

bool trivijalan(int);
void djelitelji(int);

int main()
{
	cout << "Unesite prirodan broj: ";
	int n;
	cin >> n;

	if (!trivijalan(n)) {
		djelitelji(n);
	}
}

bool trivijalan(int n) {
	int LIMIT = n / 2;
	for (int i = 2; i <= LIMIT; i++) {
		if (n % i == 0) {
			return false;
		}
		return true;
	}
}

void djelitelji(int n) {
	int LIMIT = n / 2;
	cout << "Trazenje djelitelja za broj " << n << "...\n";
	for (int i = 2; i <= LIMIT; i++) {
		if (n % i == 0) {
			cout << i << "\n";
		}
	}
}
