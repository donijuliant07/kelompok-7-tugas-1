#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int matriks[3][3];
    int i, j;
    float total = 0;
    float rata_rata;

    cout << "=== Program Array Multidimensi & Rata-rata ===" << endl;
    cout << "Matriks Ordo 3x3" << endl;

    cout << "\n--- Silakan Input Elemen ---" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << "Data Baris " << i+1 << " Kolom " << j+1 << ": ";
            cin >> matriks[i][j];

            total = total + matriks[i][j];
        }
        cout << endl;
    }

    cout << "--- Tampilan Array Multidimensi ---" << endl;
    for(i = 0; i < 3; i++) {
        cout << "[";
        
        for(j = 0; j < 3; j++) {
            cout << setw(4) << matriks[i][j] << " "; 
        }
        
        cout << "  ]" << endl;
    }

    rata_rata = total / 9;

    cout << "\n--- Hasil Perhitungan ---" << endl;
    cout << "Total Jumlah Elemen : " << total << endl;
    cout << "Rata-rata Nilai     : " << rata_rata << endl;

    return 0;
}