#include <iostream>

using namespace std;

/*
* Zadatak 3:
Napišite program u kojem ćete:
• Kreirati statički niz od pet (5) cjelobrojnih vrijednosti;
• Kreirati dinamički niz od dva pokazivača;
• Inicijalizirati jedan od pokazivača da pokazuje na najmanji element u statičkom
nizu;
• Inicijalizirati drugi pokazivač da pokazuje na najveći element u statičkom nizu;
• Koristite funkcije.
*/

void setToMax(int*, int[], int);
void setToMin(int*, int[], int);

int main(void)
{
	// • Kreirati statički niz od pet (5) cjelobrojnih vrijednosti;
	int arr[5] = { 1,2,3,4,5 };

	// • Kreirati dinamički niz od dva pokazivača;
	int** ptrArr = new int*[2];

	for (int i = 0; i < 2; i++) {
		ptrArr[i] = new int();
	}

	// • Inicijalizirati jedan od pokazivača da pokazuje na najmanji element u statičkom nizu;
	setToMin(ptrArr[1], arr, 5);

	// • Inicijalizirati drugi pokazivač da pokazuje na najveći element u statičkom nizu;
	setToMax(ptrArr[0], arr, 5);

	cout << "Ptr to min is: " << ptrArr[1] << " with value: " << *ptrArr[1] << endl;
	cout << "Ptr to max is: " << ptrArr[0] << " with value: " << *ptrArr[0] << endl;
}

// • Koristite funkcije.
void setToMax(int* ptr, int arr[], int length) {
	int max = arr[0];
	ptr = &arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] > max) {
			max = arr[i];
			ptr = &arr[i];
		}
	}
	cout << "Inside setToMax ptr is: " << ptr << " with value: " << *ptr << endl;
}

// • Koristite funkcije.
void setToMin(int* ptr, int arr[], int length) {
	int min = arr[0];
	ptr = &arr[0];
	for (int i = 1; i < length; i++) {
		if (arr[i] < min) {
			min = arr[i];
			ptr = &arr[i];
		}
	}
	cout << "Inside setToMin ptr is: " << ptr << " with value: " << *ptr << endl;
}
