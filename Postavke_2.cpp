#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete deklarirati matricu 5x4. Redak u matrici je učenik, a kolona predmet. Uz pomoć funkcije:

void unos (int [] [4]); omogućite unos samo prolaznih ocjena (2-5) za sve učenike;
float prosjek(int []); izračunati prosječnu ocjenu učenika; za kojeg od učenika će se računati prosjek bira korisnik;
int prebroji (int [][4], int); prebrojati koliko učenika ima ocjenu 4 i više na predmetu po izboru korisnika.
*/

void unos(int[][4]);
float prosjek(int[]);
int prebroji(int[][4], int);

int main()
{
	int arr[5][4]{};
	unos(arr);
	cout << "Prosjek ocjena za ucenika na indexu 3 iznosi: " << prosjek(arr[3]) << "\n";
	cout << "Broj ucenika koji imaju ocjenu 4 ili 5 iz predmeta na indexu 2 iznosi: " << prebroji(arr, 2) << "\n";
}

void unos(int arr[][4]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Unesite prolaznu ocjenu [2-5] za ucenika na indexu " << i << " i predmet na indexu " << j << ": ";
			int ocjena;
			cin >> ocjena;

			while (ocjena < 2 || ocjena >> 5) {
				cout << "Morate unijeti ocjenu od 2 do 5 (ukljucujuci 2 i 5), unesite ocjenu ponovo: ";
				cin >> ocjena;
			}

			arr[i][j] = ocjena;
		}
	}
}

float prosjek(int arr[]) {
	float sum = 0;

	for (int i = 0; i < 4; i++) {
		sum += arr[i];
	}

	return sum / 4;
}

int prebroji(int arr[][4], int idx) {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i][idx] >= 4) {
			count++;
		}
	}
	return count;
}
