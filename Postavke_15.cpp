#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete :

omogućiti unos niza od 6 realnih brojeva u intervalu od -7.0 do +7.0 pomoću funkcije: void unos (float [], int);
definirati i upotrijebiti funkciju int najvecineg(float [], int); koja će pronaći i vratiti poziciju najvećeg negativnog elementa u nizu; (Moguće je da u nizu uopće ne bude negativnih brojeva – ispisati odgovarajuću poruku.)
definirati i upotrijebiti funkciju float suman(float[], int); koja treba izračunati i vratiti sumu negativnih elemenata niza; (Moguće je da u nizu uopće ne bude negativnih brojeva.)
Ispis pozicije najvećeg negativnog elementa, sume negativnih elemenata kao i odgovarajućih poruka vršite u funkciji main.
*/

void unos(float[], int);
int najvecineg(float[], int);
float suman(float[], int);

int main()
{
	float arr[6] = {};
	unos(arr, 6);
	float maxNeg = najvecineg(arr, 6);
	if (maxNeg != 1) {
		cout << "Najveci negativan broj u nizu je: " << maxNeg << "\n";
	}
	else {
		cout << "U nizu nema negativnih brojeva.";
	}
	cout << "Suma negativnih brojeva je: " << suman(arr, 6);
}

void unos(float arr[], int n) {
	for (int i = 0; i < 6; i++) {
		cout << "Unesi broj u rangu od -7.0 do 7.0: ";
		float n;
		cin >> n;

		while (n < -7 || n > 7) {
			cout << "Broj mora biti u rangu od -7.0 do 7.0, unesite broj ponovo: ";
			cin >> n;
		}
		arr[i] = n;
	}
}

int najvecineg(float arr[], int length) {
	int max = 1;

	for (int i = 0; i < length; i++) {
		if (arr[i] < 0 && arr[i] < max) {
			max = arr[i];
		}
	}
	return max;
}

float suman(float arr[], int length) {
	float sum = 0;

	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			sum += arr[i];
		}
	}
	return sum;
}
