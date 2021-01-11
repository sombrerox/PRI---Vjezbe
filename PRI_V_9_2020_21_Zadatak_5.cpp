#include <iostream>

using namespace std;

/*
Zadatak 5
Napišite program u kojem ćete :
• omogućiti unos niza od 7 isključivo velikih slova engleske abecede pomoću
funkcije: void unos (char *, int);
• definirati funkciju char * posljednji(char *, int); koja će vratiti adresu onog
člana niza (slovo) koji se u abecednom poretku pojavljuje posljednji;
• ispišite element niza koji se u abecednom poretku pojavljuje zadnji u funkciji
main().
*/

void unos(char*, int);
char* posljednji(char*, int);

int main(void)
{
	char arr[7];
	unos(arr, 7);
	// • ispišite element niza koji se u abecednom poretku pojavljuje zadnji u funkciji main().
	cout << "Adresa elementa koji je zadnji u alfabetnom poretku je " << (void*) posljednji(arr, 7) << " a njegova vrijednost je " << *posljednji(arr, 7);
}

// • omogućiti unos niza od 7 isključivo velikih slova engleske abecede pomoću funkcije: void unos(char*, int);
void unos(char* arr, int length) {
	char c;
	for (int i = 0; i < length; i++) {
		cout << "Unesi veliko slovo za index " << i << ": ";
		cin >> c;
		if (c < 65 || c > 90) {
			cout << "Uneseni karakter nije veliko slovo, pokusajte ponovo." << "\n";
			i--;
			continue;
		}
		arr[i] = c;
	}
}

// • definirati funkciju char * posljednji(char *, int); koja će vratiti adresu onog člana niza(slovo) koji se u abecednom poretku pojavljuje posljednji;
char* posljednji(char* arr, int length) {
	char* max = arr;

	for (int i = 1; i < length; i++) {
		if (arr[i] > *max) {
			max = &arr[i];
		}
	}
	return max;
}
