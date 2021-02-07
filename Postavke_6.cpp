#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete deklarirati matricu 5x4. Redak u matrici je student, a kolona predmet. Uz pomoć funkcije:

void unos (int [] [4]); omogućite unos samo prolaznih ocjena (6-10) za sve studente;
float prosjek(int []); izračunati prosječnu ocjenu jednog studenta; za kojeg od studenta će se računati prosjek bira korisnik;
int prebroji (int [][4], int); prebrojati koliko studenata ima ocjenu 8 i više na predmetu po izboru korisnika.
*/

void unos(int[][4]);
float prosjek(int[]);
int prebroji(int[][4], int);

int main()
{
	int arr[5][4] = {};
	unos(arr);
	cout << "Prosjek ocjena za ucenika na indexu 2 je: " << prosjek(arr[2]) << "\n";
	cout << "Broj ucenika koji iz predmeta na indexu 2 imaju ocjenu 8 ili vecu je: " << prebroji(arr, 2) << "\n";

}

void unos(int arr[][4]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << "Unesite prolaznu ocjenu [6-10] za ucenika na indexu " << i << " i predmet na indexu " << j << ": ";
			int n;
			cin >> n;

			while (n < 6 || n > 10) {
				cout << "Morate unijeti ocjenu izmedju 6 i 10. Unesite ocjenu ponovo: ";
				cin >> n;
			}

			arr[i][j] = n;
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
		if (arr[i][idx] >= 8) {
			count++;
		}
	}
	return count;
}
