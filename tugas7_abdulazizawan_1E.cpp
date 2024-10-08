#include <iostream>
using namespace std;

int main() {
    int angka[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Masukkan angka ke-" << (i + 1) << ": ";
        cin >> angka[i];
    }
    
    int max = angka[0];
    for (int i = 1; i < 5; i++) {
        if (angka[i] > max) {
            max = angka[i];
        }
    }
    cout << "Nilai tertinggi adalah: " << max << endl;

    int cari;
    cout << "Masukkan angka yang ingin dicari: ";
    cin >> cari;

    bool ditemukan = false;
    for (int i = 0; i < 5; i++) {
        if (angka[i] == cari) {
            cout << "Angka " << cari << " ditemukan di indeks: " << i << endl;
            ditemukan = true;
        }
    }
    
    if (!ditemukan) {
        cout << "Angka " << cari << " tidak ditemukan dalam array." << endl;
    }

    return 0;
}
