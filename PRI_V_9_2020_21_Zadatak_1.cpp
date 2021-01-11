#include <iostream>

using namespace std;

/*
Zadatak 1
Napišite program u kojem ćete:
a) Deklarirati dvije varijable tipa float (broj1 i broj2).
b) Inicijalizirati varijablu broj1 vrijednošću 7.3.
c) Deklarirati pokazivač na tip podatka float.
d) Inicijalizirati pokazivač na adresu varijable broj1.
e) Ispisati vrijednost varijable na koju upućuje pokazivač koristeći dereferenciranje
pokazivača.
f) Inicijalizirati vrijednost varijable broj2 na istu vrijednost na koju upućuje pokazivač,
te ju ispisati.
g) Ispisati adresu varijable broj1.

*/

int main(void)
{
	// a) Deklarirati dvije varijable tipa float (broj1 i broj2).
	float broj1;
	float broj2;

	// b) Inicijalizirati varijablu broj1 vrijednošću 7.3.
	broj1 = 7.3;

	// c) Deklarirati pokazivač na tip podatka float.
	float* ptr1;

	// d) Inicijalizirati pokazivač na adresu varijable broj1.
	ptr1 = &broj1;

	// e) Ispisati vrijednost varijable na koju upućuje pokazivač koristeći dereferenciranje pokazivača.
	cout << "Vrijednost ptr1 je: " << *ptr1 << "\n";

	// f) Inicijalizirati vrijednost varijable broj2 na istu vrijednost na koju upućuje pokazivač, te ju ispisati.
	broj2 = *ptr1;
	cout << "broj2 je: " << broj2 << "\n";

	// g) Ispisati adresu varijable broj1.
	cout << "Adresa varijable broj1 je " << &broj1 << "\n";
}

