#include <iostream>

using namespace std;

int main() {
    int pilihan;
    double nilai, hasil;
    
    cout << "Pilih jenis konversi:\n";
    cout << "1. Kilometer ke Meter\n";
    cout << "2. Meter ke Kilometer\n";
    cout << "Masukkan pilihan (1 atau 2): ";
    cin >> pilihan;
    
    if (pilihan == 1) {
        // Konversi Kilometer ke Meter
        cout << "Masukkan jarak dalam kilometer: ";
        cin >> nilai;
        hasil = nilai * 1000;
        cout << nilai << " kilometer sama dengan " << hasil << " meter." << endl;
    } else if (pilihan == 2) {
        // Konversi Meter ke Kilometer
        cout << "Masukkan jarak dalam meter: ";
        cin >> nilai;
        hasil = nilai / 1000;
        cout << nilai << " meter sama dengan " << hasil << " kilometer." << endl;
    } else {
        cout << "Pilihan tidak valid. Harap pilih 1 atau 2." << endl;
    }
    
    return 0;
}