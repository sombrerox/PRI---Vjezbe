#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete kreirati tri cjelobrojna niza i to – prvi niz od 3 elementa, drugi niz od 4 elementa i treći niz od 7 elemenata. Uz pomoć funkcije:

void unos (int [], int); omogućite unos elemenata u prvi i drugi niz;
void inicijalizacija (int [], int[], int []); omogućite inicijalizaciju elemenata trećeg niza tako što ćete kopirati sve elemente prvog i drugog niza u treći;
int sumiraj (int [], int); koja će omogućiti sumiranje svih elementa niza; korisnik bira niz čije elemente treba sumirati;
*/

void unos(int[], int);
void inicijalizacija(int[], int[], int[]);
int sumiraj(int[], int);

int main()
{
	int firstArr[3] = {};
	int secondArr[4] = {};
	int thirdArr[7] = {};

	unos(firstArr, 3);
	unos(secondArr, 4);
	inicijalizacija(firstArr, secondArr, thirdArr);

	cout << sumiraj(thirdArr, 7);
}

void unos(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << "Unesi broj za index " << i << ": ";
		int n;
		cin >> n;
		arr[i] = n;
	}
}

void inicijalizacija(int firstSource[], int secondSource[], int destination[]) {
	for (int i = 0; i < 7; i++) {
		if (i < 3) {
			destination[i] = firstSource[i];
		}
		else {
			destination[i] = secondSource[i % 7 - 3];
		}
	}
}

int sumiraj(int arr[], int length) {
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	return sum;
}
