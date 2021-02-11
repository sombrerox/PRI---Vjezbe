#include <iostream>

using namespace std;

/*
Napisati program koji na osnovu unesenog cijelog broja N formira i ispisuje broj sastavljen od istih cifara u rastućem poretku uzimajući samo neparne cifre. Za sortiranje cifara koristiti pomoćni niz od najviše 10 elemenata.

Unesite cijeli broj N: 4513982
Broj sa sortiranim ciframa: 1359
Unesite cijeli broj N: 109225
Broj sa sortiranim ciframa: 159
*/

bool isSavrsen(int);

int main() {
	cout << "Unesi broj: ";
	int n;
	cin >> n;

	int digits[10] = {};
	int count = 0;
	while (n != 0) {
		int digit = n % 10;
		if (digit % 2 != 0) {
			digits[count++] = n % 10;
		}
		n /= 10;
	}

	// bubble sort, because it's 22:13 and I want to sleep
	for (int i = 0; i < 9; i++) {
		if (digits[i] == 0 || digits[i + 1] == 0) {
			break;
		}
		// save sizeof(int) space here to make up for bubble sort :D
		if (digits[i] > digits[i + 1]) {
			digits[i] ^= digits[i + 1];
			digits[i + 1] ^= digits[i];
			digits[i] ^= digits[i + 1];
			i = -1;
		}
	}

	cout << "Broj je: ";

	for (int i = 0; i < 10; i++) {
		if (digits[i] == 0) {
			break;
		}
		cout << digits[i];
	}
}
