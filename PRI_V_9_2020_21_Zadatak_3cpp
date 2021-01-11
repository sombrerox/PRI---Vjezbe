#include <iostream>

using namespace std;

/*
Zadatak 3
Napišite program koji će vrijednost unesenog cijelog broja mijenjati u trostruko veću – kub
unesenog broja. Neka funkcija za računanje kuba ima jedan argument i neka njeno
zaglavlje izgleda ovako:
void cube ( int * );


*/

void cube(int*);

int main(void)
{
	int num;
	cout << "Unesi cijeli broj: " << "\n";
	cin >> num;
	cout << "Broj prije kubiranja: " << num << "\n";
	cube(&num);
	cout << "Broj poslije kubiranja: " << num;
}

void cube(int* numPtr) {
	*numPtr = *numPtr * *numPtr * *numPtr;
}
