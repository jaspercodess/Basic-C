#include <iostream>
using namespace std;

/* Kepala
   Program Batasan Usia
   Program untuk pembagian kelompok usia*/

// Variabel
int x;

// Deskripsi
int main(){
    cout << "=====================================================" << endl;
    cout << "\t PROGRAM PENGELOMPOKAN BATASAN USIA" << endl;
    cout << "===================================================== \n" << endl;
    // Process
    cout << "Berapa umur anda ? ";
    cin >> x;
    if (x>=0 and x<=5){
        cout << "Balita \n" << endl;
    }else if (x>=5 and x<=11){
        cout << "Anak-Anak \n" << endl;
    }else if (x>=12 and x<=25){
        cout << "Remaja \n" << endl;
    }else if (x>=26 and x<=45){
        cout << "Dewasa \n" << endl;
    }else if (x>=46 and x<=100){
        cout << "Lansia \n" << endl;
    }else{
        cout << "WARNING !! \n" << "Inputan yang anda masukkan salah :( \n" << endl;
    }
    cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ^_^ " << endl;
    cin.get();
    return 0;
}