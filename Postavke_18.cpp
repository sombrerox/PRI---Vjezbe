#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete omogućiti kreiranje niza od 6 cjelobrojnih elemenata. Pretpostavka je da postoji funkcija koja omogućava unos brojeva u niz (ne treba ju definirati);

definirati i upotrijebiti funkciju void pronaci(int[], int); koja će pronaći i ispisati dva najveća elementa u nizu;
definirati i upotrijebiti funkciju float suma(int [], int); koja će izračunati sumu recipročnih vrijednosti elemenata niza;
definirati i upotrijebiti funkciju int prebroji(int [], int) koja treba ispisati sve pozitivne elemente niza i njihove indekse, te prebrojati koliko takvih elemenata ima;
Ispis sume recipročnih vrijednosti i broja pozitivnih elemenata vršiti u funkciji main.
*/

void pronaci(int[], int);
float suma(int[], int);
int prebroji(int[], int);

int main()
{
	int arr[6] = {3,2,4,17,-3,14};
	pronaci(arr, 6);
	cout << "Suma reciprocnih vrijednosti niza iznosi: " << suma(arr, 6) << "\n";
	cout << "U nizu se nalazi ukupno " << prebroji(arr, 6) << " pozitivnih vrijednosti.\n";
}

void pronaci(int arr[], int length) {
	int greatest = arr[0];
	int secondGreatest = arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] > secondGreatest) {
			if (arr[i] > greatest) {
				secondGreatest = greatest;
				greatest = arr[i];
			}
			else {
				secondGreatest = arr[i];
			}
		}
	}
	cout << "Najveci element niza je " << greatest << " a drugi najveci je " << secondGreatest << "\n";
}

float suma(int arr[], int length) {
	float sum = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] != 0) {
			sum += (float(1) / arr[i]);
		}
	}
	return sum;
}

int prebroji(int arr[], int length) {
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] > 0) {
			cout << "Broj " << arr[i] << " na indexu " << i << "\n";
			count++;
		}
	}
	return count;
}
