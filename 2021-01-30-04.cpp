#include <iostream>

using namespace std;

/*
Kreirati dinamicki dvodimenzionalni niz ciji su elementi objekti tipa student
(student je struktura cija su obiljezja data u nastavku).
Omoguciti kosirniku da unese dimenzije niza.
struct student
{
    char *ID;
    char *imePrezime;
    float *prosjek;
};
Kompletan 2D niz predstavlja univerzitet. Redovi dvodimenzionalnog niza predstavljaju razlicite fakultete.
(radi jednostavnosti rjesenja podrazumijevati da svaki fakultet ima isti broj studenata).
Omoguciti korisniku unos svih podataka za sve studente, te napraviti funkciju koja ce pronaci
fakultet sa najvecim prosjekom te ispisati koji je to redni broj fakulteta(index reda sa najvecim prosjekom).
Zatim pronaci i ispisati ID studenta koji ima najveci posjek na cijelom univerzitetu. U ovom zadatku je zabranjeno idexirati
elemente niza uglastim zagradama. Obavezno koristiti aritmetiku pokazivaca.
Obavezno voditi racuna o dealociranju dinamicki alocirane memorije.
*/

struct student
{
    char* ID;
    char* imePrezime;
    float* prosjek;
};

void input(student**, int, int);
void highestAverageCollege(student**, int, int);
void highestAverageStudent(student**, int, int);


int main() {
    int rows;
    int cols;

    cout << "Unesite broj redova: " << "\n";
    cin >> rows;
    cout << "Unesite broj kolona: " << "\n";
    cin >> cols;

    student** arr = new student * [rows];

    // init
    for (int i = 0; i < rows; i++) {
        *(arr + i) = new student[cols];
    }

    input(arr, rows, cols);
    highestAverageCollege(arr, rows, cols);
    highestAverageStudent(arr, rows, cols);
}

void input(student** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin.ignore();
            // ID
            cout << "Unesite ID za studenta na indexu " << j << " koji studira na fakultetu na indexu " << i << ": ";
            //student s = {};
            //*(*(arr + i) + j) = s;
            char* id = new char[10];
            cin.getline(id, 10);
            (*(arr + i) + j)->ID = new char[strlen(id) + 1];
            strcpy_s((*(arr + i) + j)->ID, strlen(id) + 1, id);

            // ime i prezime
            cout << "Unesite ime i prezime za studenta na indexu " << j << " koji studira na fakultetu na indexu " << i << ": ";
            char* name = new char[20];
            cin.getline(name, 20);
            (*(arr + i) + j)->imePrezime = new char[strlen(name) + 1];
            strcpy_s((*(arr + i) + j)->imePrezime, strlen(name) + 1, name);

            // prosjek
            cout << "Unesite prosjek za studenta na indexu " << j << " koji studira na fakultetu na indexu " << i << ": ";
            float* prosjek = new float;
            cin >> *prosjek;
            (*(arr + i) + j)->prosjek = prosjek;
        }
    }
}

void highestAverageCollege(student** arr, int rows, int cols) {
    float highestSum = 0;
    int highestSumIndex = 0;
    for (int i = 0; i < rows; i++) {
        float sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += *(*(arr + i) + j)->prosjek;
        }
        if (sum > highestSum) {
            highestSum = sum;
            highestSumIndex = i;
        }
    }
    cout << "Najveci prosjek ima fakultet na indexu " << highestSumIndex << " a prosjek iznosi: " << (highestSum / cols) << "\n";
}

void highestAverageStudent(student** arr, int rows, int cols) {
    float highest = 0;
    // used indices instead of copying ID to char array each time
    int highestRow = 0;
    int highestCol = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (*(*(arr + i) + j)->prosjek > highest) {
                highest = *(*(arr + i) + j)->prosjek;
                highestRow = i;
                highestCol = j;
            }
        }
    }
    cout << "Id studenta sa najvecim prosjekom iznosi: " << (*(*(arr + highestRow) + highestCol)->ID) << " a prosjek mu je: " << (*(*(arr + highestRow) + highestCol)->prosjek) << "\n";
}
