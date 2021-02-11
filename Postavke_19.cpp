#include <iostream>

using namespace std;

/*
Napišite program koji omogućava da unese prirodni broj n i u slučaju da broj nije prost (broj koji je djeljiv samo sa 1 i sa samim sobom) potrebno ga je rastaviti na proste faktore.
Svaki složeni broj se može rastaviti na proste faktore (brojeve) koji množenjem daju taj broj. Npr.

48  = 2 * 2 * 2 * 2 * 3
100 = 2 * 2 * 5 * 5
60  = 2 * 2 * 3 * 5
Upotrijebite funkcije:

bool prost (int);
void ispis (int);
*/

bool prost(int);
void ispis(int);

void kopiraj(int[][3], int[][3]);

int main() {
	cout << "Unesi broj: ";
	int n;
	cin >> n;

	if (!prost(n)) {
		cout << "Prosti faktori broja " << n << " su: ";
		ispis(n);
	}
}

bool prost(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void ispis(int n) {
	int k = 2;
	while (k * k <= n) {
		if (n % k == 0) {
			cout << k << " ";
			n /= k;
		}
		else {
			k++;
		}
	}
	if (n > 1) {
		cout << n << "\n";
	}
}
