#include <iostream>
using namespace std;

// Variabel
int a;

// Deskripsi
int main (){
    
    cout << "Masukkan angka 1 " << endl;
    cin >> a;

    if (a==1){
        cout << "Angka yang anda masukkan benar :D \n" << endl;
    } else {
        cout << "Angka yang Anda masukkan salah :( \n" << endl;
    }
      cout << "Terima kasih telah menggunakan program ini ^_^ " << endl;

    cin.get();
    return 0;
}