#include <iostream>
using namespace std;

// Variabel
int a;
int b;
float hasil;

// Deskripsi
int main () {
   
    // Input
    cout << "masukkan bilangan pertama = ";
    cin >> a;
    cout << "masukkan bilangan kedua = ";
    cin >> b;
    
    // Operasi Penjumlahan
    cout << "=====================================" << endl;
    cout << "\t Operasi Penjumlahan" << endl;
    cout << "=====================================" << endl;
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // Operasi Pengurangan
    cout << "=====================================" << endl;
    cout << "\t Operasi Pengurangan" << endl;
    cout << "=====================================" << endl;
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // Operasi Perkalian
    cout << "=====================================" << endl;
    cout << "\t Operasi Perkalian" << endl;
    cout << "=====================================" << endl;
    hasil = a * b;
    cout << a << " x " << b << " = " << hasil << endl;

    // Operasi Pembagian
    cout << "=====================================" << endl;
    cout << "\t Operasi Pembagian" << endl;
    cout << "=====================================" << endl;
    hasil = a / b;
    cout << a << " : " << b << " = " << hasil << endl;
    /* Untuk menampilkan angka di belakang koma
       *pilih salah satu
       int a = 
       float b = 

       float hasil;
       kekurangannya tidak dapat digunakan di operasi sisa hasil*/

    // Operasi Sisa Hasil 
    cout << "=====================================" << endl;
    cout << "\t Operasi Sisa Hasil" << endl;
    cout << "=====================================" << endl;
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    cin.get();
    return 0;
}