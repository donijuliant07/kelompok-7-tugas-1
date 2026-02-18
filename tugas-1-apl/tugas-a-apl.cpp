#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matriks[10][10];
    int baris, kolom, min, max;
    float total = 0, rata_rata;

    cout << "=== Program Statistik Matriks ===" << endl;
    cout << "Masukkan jumlah baris: "; cin >> baris;
    cout << "Masukkan jumlah kolom: "; cin >> kolom; 

    cout << "\n--- Input Elemen ---" << endl;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            cout << "Data Baris " << i+1 << " Kolom " << j+1 << ": ";
            cin >> matriks[i][j];
        }
        cout << endl;
    }

    cout << "\n--- Matriks Anda ---" << endl;
    for(int i = 0; i < baris; i++) {
        cout << "[";
        for(int j = 0; j < kolom; j++) {
            cout << setw(4) << matriks[i][j] << " "; 
        }
        cout << "  ]" << endl;
    }

    min = matriks[0][0];
    max = matriks[0][0];

    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            if(matriks[i][j] < min) min = matriks[i][j];
            if(matriks[i][j] > max) max = matriks[i][j];
            total += matriks[i][j];
        }
    }

    rata_rata = total / (baris * kolom);

    cout << "\n--- Statistik ---" << endl;
    cout << "Min       : " << min << endl;
    cout << "Max       : " << max << endl;
    cout << "Rata-rata : " << rata_rata << endl;

    return 0;
}