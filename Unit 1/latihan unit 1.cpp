#include <iostream>

using namespace std;
 int menu;
    int jarak, waktu, kecepatan;
int main() {
    
   

    
    cout << "Pilih Operasi yang digunakan" << endl;
    cout << "1. Menghitung Kecepatan:" << endl;
    cout << "2. Menghitung Jarak:" << endl;
    cout << "3. Menghitung Waktu" << endl;
    cout << "Masukkan nomor : ";
    cin >> menu;

    
    cout << "Masukkan nilai jarak: ";
    cin >> jarak;
    cout << "Masukkan nilai waktu: ";
    cin >> waktu;
    cout << "Masukkan nilai kecepatan: ";
    cin >> kecepatan;

 
    switch (menu) {
        case 1:
            kecepatan = static_cast<float>(jarak) / static_cast<float>(waktu);
            cout << "Kecepatan: " << kecepatan << endl;
            break;
        case 2:
            jarak = static_cast<float>(kecepatan) * static_cast<float>(waktu);
            cout << "Jarak: " << jarak << endl;
            break;
        case 3:
            waktu = static_cast<float>(jarak) / static_cast<float>(kecepatan);
            cout << "Waktu: " << waktu << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
