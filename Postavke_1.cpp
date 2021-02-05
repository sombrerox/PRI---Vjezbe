#include <iostream>

using namespace std;

/*
Napišite program, poštujući sve faze procesa programiranja, koji će ispisati sve troznamenkaste brojeve koji su jednaki sumi faktorijela svojih znamenki – ABC = A! + B! + C! Upotrijebite funkcije:

bool provjera(int);
int faktorijel(int);
*/

bool provjera(int);
int faktorijel(int);

int main()
{
	for (int i = 100; i < 1000; i++) {
		if (provjera(i)) {
			cout << i << "\n";
		}
	}
}

bool provjera(int n) {
	int sum = 0;
	int originalValue = n;

	while (n != 0) {
		sum += faktorijel(n % 10);
		n /= 10;
	}

	return sum == originalValue;
}

int faktorijel(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	return n * faktorijel(n - 1);
}
