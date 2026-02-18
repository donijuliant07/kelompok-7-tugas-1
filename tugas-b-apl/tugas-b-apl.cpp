#include <iostream>
#include <cmath>
using namespace std;

// Fungsi phytagoras
void phytagoras(int a, int b, int c) {
    int nilai = a*a + b*b;

    cout << "Nilai phytagoras (a^2 + b^2) = " << nilai << endl;

    if (nilai == c*c) {
        cout << "Termasuk tripel phytagoras" << endl;
    } else {
        cout << "Bukan tripel phytagoras" << endl;
    }
}

int main() {
    int a, b, c;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
    cin >> c;

    phytagoras(a, b, c);

    return 0;
}
