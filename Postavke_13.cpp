#include <iostream>

using namespace std;

/*
Napišite program koji će omogućiti kreiranje matrice negativnih brojeva 5 x 5. Uz pomoć funkcije:

void unos (int [][5]); omogućite unos elemenata matrice; vodite računa da svi elementi matrice moraju biti negativni brojevi;
bool pozicija(int[][5], int &); pronaći prvi redak koji sadrži vrijednost -7; u slučaju da u matrici nema vrijednosti -7 funkcija treba vratiti vrijednost false, a program treba ispisati odgovarajuću poruku;
float prosjecna(int [][5], int); izračunati prosječnu vrijednost u retku za koji ste prethodnom funkcijom utvrdili da sadrži vrijednost -7;
u slučaju da ste prethodnom funkcijom ustanovili da u matrici nema broja -7 funkciju ne treba pozivati.
Ispis prvog retka koji sadrži vrijednost -7, prosječne vrijednosti u tom retku kao i zahtijevanih poruka vršite u funkciji main.
}
*/

void unos(int[][5]);
bool pozicija(int[][5], int&);
float prosjecna(int[][5], int);

int main()
{
	int arr[5][5] = {};
	unos(arr);
	int idxRef = -1;
	if (pozicija(arr, idxRef)) {
		cout << "Pozicija prve vrijednosti od -7 se nalazi u redu na indexu " << idxRef << "\n";
		cout << "Prosjecna vrijednost u redu na indexu " << idxRef << " iznosi: " << prosjecna(arr, idxRef) << "\n";
	}
}

void unos(int arr[][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int n;
			cout << "Unesi negativan broj za red " << i << " kolonu " << j << ": ";
			cin >> n;
			while (n >= 0) {
				cout << "Niste unijeli negativan broj. Unesite negativan broj: ";
				cin >> n;
			}
			arr[i][j] = n;
		}
	}
}

bool pozicija(int arr[][5], int& idxRef) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == -7) {
				idxRef = i;
				return true;
			}
		}
	}
	// reda radi
	idxRef = -1;
	cout << "Vrijednost -7 se ne nalazi ni u jednom redu.";
	return false;
}

float prosjecna(int arr[][5], int rowIdx) {
	float sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[rowIdx][i];
	}
	return sum / 5;
}

