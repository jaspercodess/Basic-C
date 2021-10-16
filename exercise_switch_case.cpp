#include <iostream>
using namespace std;

/* Kepala
   Program Ganjil/Genap
   Program memilah bilangan ganjil atau bilangan genap*/

// Variabel
   int a;
   char lanjut;
int main (){
    cout << "====================================" << endl;
    cout << "\tPROGRAM GANJIL/GENAP" << endl;
    cout << "====================================" << endl;
    cout << "Catatan !!" << endl;
    cout << "1 : Bilangan Ganjil" << endl;
    cout << "2 : Bilangan Genap \n" << endl;
    cout << "Pilih 1 atau 2 : " ;
    cin >> a;
    switch (a){
        case 1:
        cout << "Bilangan yang termasuk bilangan ganjil" << endl;
        cout << " = 1,3,5,7,9 \n" << endl;
        cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ^_^" << endl;
        break;
        case 2:
        cout << "Bilangan yang termasuk bilangan ganjil" << endl;
        cout << " = 2,4,6,8,10 \n" << endl;
        cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ^_^" << endl;
        break;
        default:
        cout << "Input yang anda masukkan salah :) \n";
        cout << "Apakah anda ingin mengulang [y]/[n]? ";
        cin >> lanjut;
        cout << "\n";

        if (lanjut =='y') {
            main();
        }else{
        cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ^_^" << endl;  
        }
        break;
    }
    cin.get();
    return 0;
}