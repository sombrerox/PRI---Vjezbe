#include <iostream>

using namespace std;

/*
Zadatak 2
Napišite program u kojem ćete:
a) deklarirati niz tipa double koji ima 10 elemenata:
double niz [10]={0.0, 1.1, 2.2, 3.3., 4.4, 5.5, 6.6, 7.7, 8.8, 9.9}
pokazivač P
lokacija
6
b) provjeriti koliko prostora u memoriji zauzima tip podatka double i koliko prostora u
memoriji zauzima cijeli niz
(upotrijebite operator sizeof)
c) deklarirati pokazivač koji pokazuje na objekt tipa double
d) inicijalizirate pokazivač na adresu prvog elementa niza
(pokušajte ovu inicijalizaciju napraviti na dva načina)
e) ispišite 4 element niza na barem 3 različita načina
(koristite indeksaciju elemenata niza, dereferenciranje pokazivača i operacije nad pokazivačem)
f) ispišite adrese svih elemenata niza koristeći operator inkrementa na pokazivač
(vodite računa da ukoliko dekrementirate pokazivač – rezultat je adresa pomaknuta za onoliko bajta
koliko zauzima tip podatka na koji upućuje pokazivač)
g) ispišite elemente niza koristeći dereferenciranje pokazivača.


*/

int main(void)
{
	// a) deklarirati niz tipa double koji ima 10 elemenata: double niz[10] = { 0.0, 1.1, 2.2, 3.3., 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 }
	double niz[10] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };

	// b) provjeriti koliko prostora u memoriji zauzima tip podatka double i koliko prostora u memoriji zauzima cijeli niz (upotrijebite operator sizeof)
	cout << "Double size " << sizeof(double) << " and array size: " << sizeof niz << "\n";

	// c) deklarirati pokazivač koji pokazuje na objekt tipa double
	double* dPtr;

	// d) inicijalizirate pokazivač na adresu prvog elementa niza (pokušajte ovu inicijalizaciju napraviti na dva načina)
	// #1
	dPtr = niz;
	// #2
	dPtr = &niz[0];

	// e) ispišite 4 element niza na barem 3 različita načina (koristite indeksaciju elemenata niza, dereferenciranje pokazivača i operacije nad pokazivačem)
	cout << niz[3] << "\n";
	cout << dPtr[3] << "\n";
	cout << *(dPtr + 3) << "\n";

	// f) ispišite adrese svih elemenata niza koristeći operator inkrementa na pokazivač (vodite računa da ukoliko dekrementirate pokazivač – rezultat je adresa pomaknuta za onoliko bajta
	//	koliko zauzima tip podatka na koji upućuje pokazivač)
	for (int i = 0; i < 10; i++) {
		cout << "Adresa elementa na indexu " << i << " je: " << (niz + i) << "\n";
	}

	// g) ispišite elemente niza koristeći dereferenciranje pokazivača.
	for (int i = 0; i < 10; i++) {
		cout << *(niz + i) << "\n";
	}
}

