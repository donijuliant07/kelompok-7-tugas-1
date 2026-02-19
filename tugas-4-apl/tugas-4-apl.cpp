#include <iostream>
#include <iomanip>
using namespace std;

struct Barang {
    string nama;
    int harga;
    int jumlah;
};

int main() {
    int banyak;

    cout << "===== SISTEM KASIR MINIMARKET =====" << endl;
    cout << "Masukkan jumlah barang: ";
    cin >> banyak;

    Barang *data = new Barang[banyak];

    for(int i = 0; i < banyak; i++) {
        cout << "\nBarang ke-" << i+1 << endl;
        cout << "Nama Barang  : ";
        cin >> data[i].nama;
        cout << "Harga        : ";
        cin >> data[i].harga;
        cout << "Jumlah Beli  : ";
        cin >> data[i].jumlah;
    }

    int totalSemua = 0;

    cout << "\n===== STRUK BELANJA =====" << endl;
    cout << left << setw(15) << "Nama"
         << setw(10) << "Harga"
         << setw(10) << "Jumlah"
         << setw(10) << "Subtotal" << endl;

    for(int i = 0; i < banyak; i++) {
        int subtotal = (*(data + i)).harga * data[i].jumlah;
        totalSemua += subtotal;

        cout << left << setw(15) << data[i].nama
             << setw(10) << data[i].harga
             << setw(10) << data[i].jumlah
             << setw(10) << subtotal << endl;
    }

    cout << "----------------------------------------" << endl;
    cout << "Total Bayar: " << totalSemua << endl;

    int bayar;
    cout << "Uang Bayar : ";
    cin >> bayar;

    if(bayar >= totalSemua) {
        cout << "Kembalian  : " << bayar - totalSemua << endl;
    } else {
        cout << "Uang tidak cukup!" << endl;
    }
    
    delete[] data;

    return 0;
}