#include <iostream>
using namespace std;

int main() {
    int kuantumData; 
    cout << "Masukkan jumlah elemen array: ";
    cin >> kuantumData;

    int spektrumNilai[kuantumData]; 

    // Input elemen array
    for (int indeksOmega = 0; indeksOmega < kuantumData; indeksOmega++) {
        cout << "Masukkan elemen ke-" << indeksOmega+1 << ": ";
        cin >> spektrumNilai[indeksOmega];
    }

    // Variabel analisis
    int jumlahGenap = 0, jumlahGanjil = 0;
    int jumlahPositif = 0, jumlahNegatif = 0;
    int nilaiMaksimum = spektrumNilai[0];
    int nilaiMinimum = spektrumNilai[0];

    cout << "\nAnalisis elemen array:\n";

    // Proses dengan perulangan + percabangan
    for (int indeksOmega = 0; indeksOmega < kuantumData; indeksOmega++) {
        int elemenAktif = spektrumNilai[indeksOmega];

        // Cek genap/ganjil
        if (elemenAktif % 2 == 0) {
            cout << "Elemen ke-" << indeksOmega+1 << " (" << elemenAktif << ") adalah GENAP\n";
            jumlahGenap++;
        } else {
            cout << "Elemen ke-" << indeksOmega+1 << " (" << elemenAktif << ") adalah GANJIL\n";
            jumlahGanjil++;
        }

        // Cek positif/negatif
        if (elemenAktif >= 0) {
            jumlahPositif++;
        } else {
            jumlahNegatif++;
        }

        // Update maksimum dan minimum
        if (elemenAktif > nilaiMaksimum) {
            nilaiMaksimum = elemenAktif;
        }
        if (elemenAktif < nilaiMinimum) {
            nilaiMinimum = elemenAktif;
        }
    }

    // Ringkasan hasil
    cout << "\nRingkasan Analisis:\n";
    cout << "Jumlah bilangan GENAP   : " << jumlahGenap << endl;
    cout << "Jumlah bilangan GANJIL  : " << jumlahGanjil << endl;
    cout << "Jumlah bilangan POSITIF : " << jumlahPositif << endl;
    cout << "Jumlah bilangan NEGATIF : " << jumlahNegatif << endl;
    cout << "Nilai MAKSIMUM          : " << nilaiMaksimum << endl;
    cout << "Nilai MINIMUM           : " << nilaiMinimum << endl;

    return 0;
}