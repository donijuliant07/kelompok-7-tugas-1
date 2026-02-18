#include <iostream>
using namespace std;

// Prosedur untuk menentukan jenis segitiga
void cekSegitiga(int s1, int s2, int s3) {

    // Cek apakah bisa membentuk segitiga
    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)) {

        // Cek segitiga siku-siku
        if ((s1*s1 + s2*s2 == s3*s3) ||
            (s1*s1 + s3*s3 == s2*s2) ||
            (s2*s2 + s3*s3 == s1*s1)) {

            cout << "Segitiga siku-siku" << endl;
        }
        // Cek segitiga sama kaki
        else if ((s1 == s2) || (s1 == s3) || (s2 == s3)) {

            cout << "Segitiga sama kaki" << endl;
        }
        // Segitiga sembarang
        else {

            cout << "Segitiga sembarang" << endl;
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
