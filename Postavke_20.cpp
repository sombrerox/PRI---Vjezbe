#include <iostream>

using namespace std;

/*
Napisati program koji izračunava aritmetičku sredinu svih savršenih brojeva iz zadatog intervala.
Za neki broj se kaže da je savršen ukoliko je jednak sumi svih svojih djelilaca (ne uključujući njega samog).
Na primjer, 28 je savršen broj: njegovi djelioci su 1, 2, 4, 7 i 14, a 1 + 2 + 4 + 7 + 14 = 28.
Jedini savršeni brojevi u opsegu od 1 do 100 su brojevi 6 i 28. U rješenju koristiti funkciju sljedećeg prototipa:

bool IsSavrsen(int);
*/

bool isSavrsen(int);

int main() {
	int sum = 0;
	int count = 0;
	for (int i = 1; i <= 100; i++) {
		if (isSavrsen(i)) {
			sum += i;
			count++;
		}
	}
	cout << "Aritmeticka sredina savrsenih brojeva u intervalu od 1 do 100 iznosi: " << (float(sum) / count);
}

bool isSavrsen(int n) {
	int sum = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
	return sum == n;
}
