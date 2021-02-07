#include <iostream>

using namespace std;

/*
Napišite program, poštujući sve faze procesa programiranja, u kojem ćete za uneseni prirodni broj n izrčunati sumu: S = 1! + 2! + … +n! Upotrijebite funkciju:

float suma (int);
int faktorijel(int);
*/

float suma(int);
int faktorijel(int);

int main()
{
	cout << "Unesite prirodan broj: ";
	int n;
	cin >> n;
	
	cout << "Suma serije za broj " << n << " iznosi: " << suma(n);
}

float suma(int n) {
	float suma = 0;
	for (int i = 1; i <= n; i++) {
		suma += faktorijel(i);
	}
	return suma;
}

int faktorijel(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * faktorijel(n - 1);
}
