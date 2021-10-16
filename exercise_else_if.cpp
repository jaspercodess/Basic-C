#include <iostream>
using namespace std;

/* Kepala 
   PROGRAM MENENTUKAN BESAR BILANGAN
   Program untuk menentukan angka yang dipilih merupakah bilangan yang besar atau kecil  */

// Variabel
int a;
char ulang;

// Deskripsi
int main (){
     cout <<"======================================================" << endl;
    cout << "\t PROGRAM MENENTUKAN BESAR BILANGAN" << endl;
    cout << "======================================================\n" << endl;
    cout << "Pilih Angka 1-10 = ";
    cin >> a;
    if (a<=5 and a>0){
        cout << "Angka yang anda masukkan kecil :( \n" << endl;
    }else if (a>=5 and a<=10){
        cout << "Angka yang anda masukkan besar :D \n" << endl;
    }else{
        cout << "Anda salah memasukkan inputan -_-' \n" << endl; 
    }
    cout << "Apakah Anda ingin mengulang [y/n] ? ";
    cin >> ulang;
    cout << "\n";
    if (ulang == 'y') {
        main ();
    }else {
     cout << "=== TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ^_^ ===" << endl;
    } 
   
    cin.get();
    return 0;
}