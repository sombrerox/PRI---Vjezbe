#include <iostream>

using namespace std;

/*
Zadatak 4:
Napišite program za zbrajanje dviju matrica (matrice A i matrice B)koji će:
• omogućiti unos željene veličine matrica (broj redova i kolona – sve matrice
moraju biti jednake veličine),
• omogućiti unos vrijednosti elemenata matrica s tastature,
• kreirati treću matricu čiji će elementi biti suma odgovarajućih elemenata
matrica A i B,
• dealocirajte dinamički kreirane objekte,
• koristite funkcije.
*/

void init(int**, int, int);
void createSumArray(int**, int**, int, int);
void deallocate(int**, int);

int main(void)
{
	// • omogućiti unos željene veličine matrica (broj redova i kolona – sve matrice moraju biti jednake veličine)
	int numOfRows;
	int numOfColumns;
	cout << "Enter number of rows: ";
	cin >> numOfRows;
	cout << "Enter number of columns: ";
	cin >> numOfColumns;

	int** arr1 = new int* [numOfRows];
	int** arr2 = new int* [numOfRows];

	// initialize
	for (int i = 0; i < numOfRows; i++) {
		arr1[i] = new int[numOfColumns];
		arr2[i] = new int[numOfColumns];
	}

	init(arr1, numOfRows, numOfColumns);
	init(arr2, numOfRows, numOfColumns);

	createSumArray(arr1, arr2, numOfRows, numOfColumns);

	// deallocate
	deallocate(arr1, numOfRows);
	deallocate(arr2, numOfRows);

}

// • omogućiti unos vrijednosti elemenata matrica s tastature
void init(int** arr, int rows, int columns) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << "Enter value for row " << i << " column " << j << ": ";
			cin >> arr[i][j];
		}
	}
}

// • kreirati treću matricu čiji će elementi biti suma odgovarajućih elemenata matrica A i B
void createSumArray(int** arr1, int** arr2, int rows, int columns) {
	int** sumArr = new int* [rows];

	for (int i = 0; i < rows; i++) {
		sumArr[i] = new int[columns];
		for (int j = 0; j < columns; j++) {
			sumArr[i][j] = arr1[i][j] + arr2[i][j];
			cout << "Sum array row " << i << " column " << j << " is: " << sumArr[i][j] << endl;
		}
	}
	// deallocate sum array
	deallocate(sumArr, rows);
}

// • dealocirajte dinamički kreirane objekte
void deallocate(int** arr,int rows) {
	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
		arr[i] = nullptr;
	}
	delete[] arr;
	arr = nullptr;
}
