#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
    float mat[2][2];
    float det;

    cout << "=== Invers Matriks 2x2 ===" << endl;

    cout << "Isi Matriks:" << endl;
    cout << "Data Baris 1 Kolom 1 : "; cin >> mat[0][0];
    cout << "Data Baris 1 Kolom 2 : "; cin >> mat[0][1];
    cout << "Data Baris 2 Kolom 1 : "; cin >> mat[1][0];
    cout << "Data Baris 2 Kolom 2 : "; cin >> mat[1][1];

    cout << "\nMatriks Awal:" << endl;
    cout << "[" << setw(4) << mat[0][0] << setw(4) << mat[0][1] << "   ]" << endl;
    cout << "[" << setw(4) << mat[1][0] << setw(4) << mat[1][1] << "   ]" << endl;

    det = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);

    if (det == 0) {
        cout << "\nDeterminan 0 -> Tidak punya invers!" << endl;
    } else {
        cout << "\nMatriks Invers:" << endl;
        cout << fixed << setprecision(2); 
        
        cout << "[   " << setw(4) << (mat[1][1] / det) 
             << setw(4) << (-mat[0][1] / det) << "   ]" << endl;
             
        cout << "[   " << setw(4) << (-mat[1][0] / det) 
             << setw(4) << (mat[0][0] / det) << "   ]" << endl;
    }

    return 0;
}