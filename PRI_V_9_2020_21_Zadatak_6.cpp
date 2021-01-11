#include <iostream>
#include <string>

using namespace std;

/*
Zadatak 6
Kreirajte strukturu učenik koja će imati sljedeća obilježja: redni broj, prezime, ime i
prosjecna ocjena. Deklarirajte 3 objekta tipa učenik. Omogućite unos obilježja za svakog
od učenika (pojedinačno) uz pomoć funkcije: void unos (ucenik *);
Omogućite ispis obilježja za svakog od učenika uz pomoć funkcije:
void ispis (ucenik );
Kreirajte funkciju ucenik * najgori(ucenik * , ucenik *, ucenik *); koja će vratiti
adresu onog objekta tipa ucenik koji ima najmanju prosječnu ocjenu. Ispišite vrijednost na
adresi koju vrati funkcija najgori.
Napomena: u slučaju objekata tipa neke strukture za pristup pojedinim
obilježjima se koristi operator ->, a ne operator .
*/

struct Ucenik {
	int redniBroj;
	string prezime;
	string ime;
	float prosjecnaOcjena;
};

void unos(Ucenik*);
void ispis(Ucenik);
Ucenik* najgori(Ucenik*, Ucenik*, Ucenik*);

int main(void)
{
	// Deklarirajte 3 objekta tipa učenik.
	Ucenik ucenik1, ucenik2, ucenik3;
	unos(&ucenik1);
	unos(&ucenik2);
	unos(&ucenik3);

	ispis(ucenik1);
	ispis(ucenik2);
	ispis(ucenik3);
	
	// Ispišite vrijednost na adresi koju vrati funkcija najgori.
	Ucenik* najgoriPtr = najgori(&ucenik1, &ucenik2, &ucenik3);
	cout << "Adresa najgoreg ucenika je: " << najgoriPtr << " a vrijednost je: " << najgoriPtr -> prosjecnaOcjena;
}

// Omogućite unos obilježja za svakog od učenika(pojedinačno) uz pomoć funkcije : void unos(ucenik*);
void unos(Ucenik* ucenik)  {
		cout << "Unesite redniBroj za ucenika: ";
		cin >> ucenik -> redniBroj;
		cout << "Unesite prezime za ucenika na indexu: ";
		cin >> ucenik -> prezime;
		cout << "Unesite ime za ucenika na indexu: ";
		cin >> ucenik -> ime;
		cout << "Unesite prosjecnu ocjenu za ucenika: ";
		cin >> ucenik -> prosjecnaOcjena;
}

// Omogućite ispis obilježja za svakog od učenika uz pomoć funkcije:void ispis(ucenik);
void ispis(Ucenik ucenik) {
	cout << "Redni broj: " << ucenik.redniBroj << "\n";
	cout << "Ime: " << ucenik.ime << "\n";
	cout << "Prezime: " << ucenik.prezime << "\n";
	cout << "Prosjecna ocjena: " << ucenik.prosjecnaOcjena << "\n";
}

// Kreirajte funkciju ucenik * najgori(ucenik * , ucenik *, ucenik *); koja će vratiti 
// adresu onog objekta tipa ucenik koji ima najmanju prosječnu ocjenu.Ispišite vrijednost na
// adresi koju vrati funkcija najgori.
Ucenik* najgori(Ucenik* ucenik1, Ucenik* ucenik2, Ucenik* ucenik3) {
	Ucenik* najgoriPtr = ucenik1;

	if (ucenik2->prosjecnaOcjena < najgoriPtr->prosjecnaOcjena) {
		najgoriPtr = ucenik2;
	}
	if (ucenik3->prosjecnaOcjena < najgoriPtr->prosjecnaOcjena) {
		najgoriPtr = ucenik3;
	}

	return najgoriPtr;
}
