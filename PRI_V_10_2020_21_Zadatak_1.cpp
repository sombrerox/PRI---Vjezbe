#include <iostream>

using namespace std;

/*
Zadatak 1:
Napišite program u kojem ćete:
o Omogućiti korisniku da unese vrijednost N (broj članova niza);
o Alocirati niz operacijom new (članovi niza su tipa double);
o Omogućiti inicijalizaciju članova niza unosom vrijednosti s tastature (koristiti
funkciju);
o Izračunati i ispisati prosječnu vrijednost elemenata niza (koristiti funkciju);
o Dealocirati memorijski blok upotrijebljen za kreiranje niza.
*/

void init(double*, int);
double average(double*, int);

int main(void)
{
	// o Omogućiti korisniku da unese vrijednost N (broj članova niza);
	int numOfElements;
	cout << "Unesite broj clanova niza: ";
	cin >> numOfElements;

	// o Alocirati niz operacijom new (članovi niza su tipa double);
	double* arr = new double[numOfElements];

	// pozovi funkcije
	init(arr, numOfElements);
	cout << "Prosjecna vrijednost elemenata niza je: " << average(arr, numOfElements);

	// o Dealocirati memorijski blok upotrijebljen za kreiranje niza.
	delete[] arr;
}

// o Omogućiti inicijalizaciju članova niza unosom vrijednosti s tastature (koristiti funkciju);
void init(double* arr, int length) {
	for (int i = 0; i < length; i++) {
		cout << "Unesite vrijednost za index " << i << ": ";
		cin >> arr[i];
	}
}

// o Izračunati i ispisati prosječnu vrijednost elemenata niza (koristiti funkciju);
double average(double* arr, int length) {
	double sum = 0;

	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	return sum / length;
}
