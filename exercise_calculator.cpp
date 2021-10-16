#include <iostream>
using namespace std;

/* Kepala
   PROGRAM SEDERHANA CALCUATOR
   Program menghitung*/ 

// Variabel
   float a, b, hasil;
   char aritmatika, lanjut;

// Deskripsi
int main () {
    cout << "==========================================" << endl;
    cout << "\t        CALCULATOR" << endl;
    cout << "========================================== \n" << endl;

    // Input
    cout << "Masukkan bilangan-1 : ";
    cin >> a;
    cout << "Pilih operator [+] [-] [x] [:] : ";
    cin >> aritmatika;
    cout << "Masukkan bilangan-2 : ";
    cin >> b;

    // Process & Otput
    if (aritmatika == '+'){
        hasil = a + b;
        cout << a << " + " << b << " = " << hasil << "\n" << endl;
    }else if (aritmatika == '-'){
        hasil = a - b;
        cout << a << " - " << b << " = " << hasil << "\n" << endl;
    }else if (aritmatika == 'x'){
        hasil = a * b;
        cout << a << " x " << b << " = " << hasil << "\n" << endl;
    }else if (aritmatika == ':'){
        hasil = a / b;
        cout << a << " / " << b << " = " << hasil << "\n" << endl;
    }else {
        cout << "Warning !! \n" << "Input yang anda masukkan salah :( \n" << endl; 
    }
    cout << "Apakah anda ingin mengulang [y]/[n] ? ";
    cin >> lanjut;
    cout << "\n";
    if (lanjut == 'y'){
        main();
    }else{
        cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ^_^" << endl;
    }
    cin.get();
    return 0;
}