#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete :

omogućiti unos niza od 5 isključivo malih slova pomoću funkcije: void unos (char [], int);
definirati i upotrijebiti funkciju void promijeni(char [], int [], int); koja će unesene karaktere (slova) promijeniti u odgovarajuće cijele brojeve (prema ASCII kodnoj shemi) i smjestiti ih u zaseban niz.
definirati i upotrijebiti funkciju void binarni(int [], int); u kojoj će niz prethodno dobivenih cijelih brojeva pretvoriti u ekvivalentne binarne brojeve (binarne brojeve smjestiti u isti niz u kojem su bile ASCII vrijednosti). Upotrijebite funkciju bin (funkciju ne treba prepisivati) čija je zadaća da pretvara jedan cijeli broj u binarni i izgleda ovako:
int bin(int broj)
{
	int binarni = 0, ostatak, brojac = 0;
	while(broj > 0)
	{
		ostatak = broj % 2;
		binarni = binarni + ostatak * pow(10.0, brojac);
		brojac++;
		broj /= 2;
	}
	return binarni;
}
*/

void unos(char[], int);
void promijeni(char[], int[], int);
void binarni(int[], int);
int bin(int);

int main()
{
	char arr[5] = {};
	int arr2[5] = {};
	
	unos(arr, 5);
	// ispis karaktera
	for (int i = 0; i < 5; i++) {
		cout << "Karakter na indexu " << i << " je: " << arr[i] << "\n";
	}

	promijeni(arr, arr2, 5);
	// ispis ascii vrijednosti
	for (int i = 0; i < 5; i++) {
		cout << "ASCII vrijednost na indexu " << i << " je: " << arr2[i] << "\n";
	}

	binarni(arr2, 5);
	// ispis binarnih vrijednosti
	for (int i = 0; i < 5; i++) {
		cout << "Binarna vrijednost na indexu " << i << " je: " << arr2[i] << "\n";
	}
}

void unos(char arr[], int length) {
	cout << "Unesite 5 malih slova: ";
	char c;
	for (int i = 0; i < length; i++) {
		cout << "Unesite slovo za index " << i << ": ";
		cin >> c;
		if (c < 97 || c > 122) {
			cout << "Morate unijeti malo slovo.";
			i--;
			continue;
		}
		arr[i] = c;
	}
	
}

void promijeni(char arr[], int arr2[], int length) {
	for (int i = 0; i < length; i++) {
		arr2[i] = int(arr[i]);
	}
}

void binarni(int arr[], int length) {
	for (int i = 0; i < 5; i++) {
		arr[i] = bin(arr[i]);
	}
}

int bin(int broj)
{
	int binarni = 0, ostatak, brojac = 0;
	while (broj > 0)
	{
		ostatak = broj % 2;
		binarni = binarni + ostatak * pow(10.0, brojac);
		brojac++;
		broj /= 2;
	}
	return binarni;
}

