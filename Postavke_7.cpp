#include <iostream>

using namespace std;

/*
Napišite program u kojem ćete omogućiti unos prirodnog broja. Provjerite je li broj trivijalan (prost)uz pomoć funkcije:

bool trivijalan (int);
U slučaju da broj nije trivijalan (prost) prebrojite sve njegove djelitelje uz pomoć funkcije:

int djelitelji(int);
*/

bool trivijalan(int);
int djelitelji(int);

int main()
{
	cout << "Unesite neki prirodan broj: ";
	int n;
	cin >> n;

	if (!trivijalan(n)) {
		cout << "Broj " << n << " ima " << djelitelji(n) << " djelitelja.\n";
	}
}


bool trivijalan(int n) {
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int djelitelji(int n) {
	int count = 0;
	cout << "Djelitelji broja " << n << " su:\n";
	// preskacemo 1 i n
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			cout << i << "\n";
			count++;
		}
	}
	return count;
}
