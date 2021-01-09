#include <iostream>

using namespace std;

/*
Zadatak 2:
Napišite program u kojem ćete:
o Kreirati dinamički niz od onoliko cjelobrojnih elemenata koliko želi korisnik;
o Omogućiti inicijalizaciju članova niza unosom s tastature;
o Utvrditi (prebrojati) koliko elemenata niza je zadovoljava uvjet (element niza%7>4);
o Kreirati novi niz čiji će elementi biti elementi prvog niza koji zadovoljavaju prethodni
uvjet (element niza%7>4);
o Koristite funkcije.
*/

void init(int*, int);
int checkCondition(int*, int);


int main(void)
{
	// o Kreirati dinamički niz od onoliko cjelobrojnih elemenata koliko želi korisnik;
	int numOfElements;
	cout << "Unesite broj elemenata niza: ";
	cin >> numOfElements;
	int* arr = new int[numOfElements];

	init(arr, numOfElements);
	int resultsMatchingPredicate = checkCondition(arr, numOfElements);
	cout << "Ukupno " << resultsMatchingPredicate << " elemenata niza zadovoljava uslov: (element niza % 7 > 4)" << "\n";

}

void init(int* arr, int length) {
	// o Omogućiti inicijalizaciju članova niza unosom s tastature;
	for (int i = 0; i < length; i++) {
		cout << "Unesite vrijednost za index " << i << ": ";
		cin >> arr[i];
	}
}

int checkCondition(int* arr, int length) {
	// o Utvrditi(prebrojati) koliko elemenata niza je zadovoljava uvjet(element niza % 7 > 4);
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] % 7 > 4) {
			count++;
		}
	}
	return count;
}

// o Kreirati novi niz čiji će elementi biti elementi prvog niza koji zadovoljavaju prethodni uvjet(element niza % 7 > 4);
void createNewArray(int* arr, int length, int lengthOfNewArray) {
	int* newArr = new int[lengthOfNewArray];

	int currIndex = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] % 7 > 4) {
			newArr[currIndex++] = arr[i];
		}
	}

	// do whatever is needed with new array...
}
