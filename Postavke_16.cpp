#include <iostream>

using namespace std;

/*
Napišite program koji će omogućiti kreiranje matrice prirodnih brojeva 2x3. Pretpostavka je da postoji funkcija koja omogućava unos prirodnih brojeva (ne treba ju definirati); Kreirajte funkcije:

void kopiraj(int[][3], int [][5]); zadaća funkcije da kopira sve elemente iz jedne matrice (2x3) u drugu matricu (2x5) pri čemu se prve dvije kolone prve matrice kopiraju dva puta;
funkcije: int suma(int [], int); čija je zadaća izračunati sumu retka kojeg izabere korisnik za matricu koju izabere korisnik; obavezno onemogućiti korisnika da izabere nepostojeću matricu i nepostojeći redak;
Ispis sume i izbor matrice i retka vršite u funkciji main.
*/

void kopiraj(int[][3], int[][5]);
int suma(int[], int);

int main()
{
	int arr1[2][3] = { {1,2,3}, {4,5,6} };
	int arr2[2][5] = {};

	kopiraj(arr1, arr2);

	cout << "Unesi broj matrice za racunanje sume [1 ili 2]: ";
	int arrNum;
	cin >> arrNum;

	cout << "Unesi index reda u matrici za koji zelis izracunati sumu: ";
	int rowNum;
	cin >> rowNum;

	while ((arrNum != 1 && arrNum != 2) || (rowNum < 0 || rowNum > 4)) {
		cout << "Vrijednosti koje ste unijeli nisu validne. Pokusajte ponovo.\n";
		cout << "Unesi broj matrice: ";
		cin >> arrNum;
		cout << "Unesi index reda: ";
		cin >> rowNum;
	}

	cout << "Suma elemenata u matrici " << arrNum << " i redu na indexu " << rowNum << " je: " << suma(arrNum == 1 ? arr1[rowNum] : arr2[rowNum], arrNum == 1 ? 3 : 5);
}

void kopiraj(int arr1[][3], int arr2[][5]) {
	for (int i = 0; i < 2; i++) {
		int targetIndex = -1;
		for (int j = 0; j < 3; j++) {
			if (j < 2) {
				arr2[i][++targetIndex] = arr1[i][j];
			}
			arr2[i][++targetIndex] = arr1[i][j];
		}
	}
}

int suma(int arr[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	return sum;
}
