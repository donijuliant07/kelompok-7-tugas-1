#include <iostream>
using namespace std;

// Prosedur untuk menggambar segitiga siku-siku
void gambarSiku(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Menggambar segitiga sama kaki
void gambarSamaKaki(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        // spasi kiri
        for (int s = 1; s <= tinggi - i; s++) {
            cout << "  ";
        }
        // bintang
        for (int b = 1; b <= (2 * i - 1); b++) {
            cout << "* ";
        }
        cout << endl;
    }
}

//menggambar segitiga sembarang
void gambarSembarang(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        // spasi kiri (miring)
        for (int s = 1; s <= tinggi - i; s++) {
            cout << " ";
        }

        // sisi kiri
        cout << "*";

        // bagian tengah
        if (i > 1 && i < tinggi) {
            for (int m = 1; m <= (2 * i - 3); m++) {
                cout << " ";
            }
            cout << "*";
        }

        // alas
        if (i == tinggi) {
            for (int a = 1; a <= (2 * i - 2); a++) {
                cout << "*";
            }
        }

        cout << endl;
    }
}

// Prosedur untuk menentukan jenis segitiga
void cekSegitiga(int s1, int s2, int s3) {

    // Cek apakah bisa membentuk segitiga
    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)) {

        // Cek segitiga siku-siku
        if ((s1*s1 + s2*s2 == s3*s3) ||
            (s1*s1 + s3*s3 == s2*s2) ||
            (s2*s2 + s3*s3 == s1*s1)) {

            cout << "Segitiga siku-siku\n";
            gambarSiku(5);
        }
        // Cek segitiga sama kaki
        else if ((s1 == s2) || (s1 == s3) || (s2 == s3)) {

            cout << "Segitiga sama kaki\n";
            gambarSamaKaki(5);
        }
        // Segitiga sembarang
        else {

            cout << "Segitiga sembarang\n";
            gambarSembarang(5);
        }

    } else {

        cout << "Tidak bisa membentuk segitiga" << endl;
    }
}

int main() {
    int sisi1, sisi2, sisi3;

    cout << "Masukkan sisi 1: ";
    cin >> sisi1;

    cout << "Masukkan sisi 2: ";
    cin >> sisi2;

    cout << "Masukkan sisi 3: ";
    cin >> sisi3;

    cekSegitiga(sisi1, sisi2, sisi3);

    return 0;
}
