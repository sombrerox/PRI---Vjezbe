#include <iostream>

using namespace std;

/*
Zadatak 4
Napišite program u kojem ćete deklarirati niz od 5 cjelobrojnih elemenata te uz pomoć:
• funkcije: void unos (int *, int); omogućiti unos elemenata niza

• funkcije: void ispis (int *, int); omogućiti ispis elemenata niza
• funkcije: int * najveci (int *, int); vratiti adresu najvećeg elementa u nizu;
obavezno provjerite je li funkcija vratila korektnu adresu.


*/

void unos(int*, int);
void ispis(int*, int);
int* najveci(int*, int);

int main(void)
{
	// Napišite program u kojem ćete deklarirati niz od 5 cjelobrojnih elemenata
	int arr[5];

	unos(arr, 5);
	ispis(arr, 5);
	cout << "Najveci element u nizu je: " << *najveci(arr, 5) << " na adresi: " << najveci(arr, 5) << "\n";
}

// • funkcije: void unos (int *, int); omogućiti unos elemenata niza
void unos(int* arrPtr, int length) {
	for (int i = 0; i < length; i++) {
		cout << "Unesi vrijednost za index " << i << ": ";
		cin >> arrPtr[i];
	}
}

// • funkcije: void ispis (int *, int); omogućiti ispis elemenata niza
void ispis(int* arrPtr, int length) {
	for (int i = 0; i < length; i++) {
		cout << "Vrijednost na indexu " << i << " je: " << arrPtr[i] << "\n";
	}
}

// • funkcije: int * najveci (int *, int); vratiti adresu najvećeg elementa u nizu;
int* najveci(int* arrPtr, int length) {
	int* max = arrPtr;

	for (int i = 1; i < length; i++) {
		if (arrPtr[i] > *max) {
			max = &arrPtr[i];
		}
	}
	return max;
}

