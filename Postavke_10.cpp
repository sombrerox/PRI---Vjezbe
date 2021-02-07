#include <iostream>

using namespace std;

/*
Napišite program koji će omogućiti kreiranje matrice prirodnih brojeva 5x5. Uz pomoć funkcije:

void unos (int [][5]); omogućite unos elemenata matrice; vodite računa da svi elementi matrice moraju biti prirodni brojevi;
bool pozicija(int[][5], int &); pronaći prvi redak koji sadrži vrijednost 5; u slučaju da u matrici nema vrijednosti 5 funkcija treba vratiti vrijednost false, a program treba ispisati odgovarajuću poruku;
float prosjecna(int [][5], int); izračunati prosječnu vrijednost u retku za koji ste prethodnom funkcijom utvrdili da sadrži vrijednost 5; u slučaju da ste prethodnom funkcijom ustanovili da u matrici nema broja 5 funkciju ne treba pozivati.
Ispis prvog retka koji sadrži vrijednost 5, prosječne vrijednosti u tom retku kao i zahtijevanih poruka vršite u funkciji main.
*/

void unos(int[][5]);
bool pozicija(int[][5], int&);
float prosjecna(int[][5], int);

int main()
{
	int arr[5][5] = {};
	int idx = -1;
	unos(arr);
	if (pozicija(arr, idx)) {
		cout << "Prvi red u kojem se pojavljuje vrijednost 5 se nalazi na indexu: " << idx << ".\n";
		cout << "Prosjecna vrijednost u redu u kojem se prvi put pojavljuje broj 5 je: " << prosjecna(arr, idx) << "\n";
	}
	else {
		cout << "Vrijednost 5 se ne pojavljuje ni u jednom redu.";
	}
}

void unos(int arr[][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "Unesite vrijednost za red " << i << " kolonu " << j << ": ";
			cin >> arr[i][j];
		}
	}
}

bool pozicija(int arr[][5], int& ref) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i][j] == 5) {
				ref = i;
				return true;
			}
		}
	}
	return false;
}

float prosjecna(int arr[][5], int idx) {
	float sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr[idx][i];
	}
	return sum / 5;
}
