#include <iostream>
#include <cstdlib> // Random
using namespace std;

/* Kepala
   Program Dadu Acak
   Program menampilkan angka dadu secara acak */

// Variabel
   char lanjut;

// Deskripsi
   int main(){
       cout << "===================================" << endl;
       cout << "\t PROGRAM DADU ACAK" << endl;
       cout << "=================================== \n" << endl;
       // Process
       while(true){
           cout << "Lempar dadu [y]/[n] ? ";
           cin >> lanjut;
           if (lanjut == 'y'){
               // Rumus dadu acak
               cout << "Angka " << (1 + rand ()%6) << endl;
           }else if (lanjut == 'n'){
               cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ^_^";
               break;
           }else{
               cout << "WARNING : Inputan yang dimasukkan salah (y/n)" << endl;
           }
       }
       cin.get();
       return 0;
   }