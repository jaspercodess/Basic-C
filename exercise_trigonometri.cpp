#include <iostream>
#include <iomanip> // Symbol
#include <cmath> // Equation

using namespace std;

/* Kepala
   Program percepatan pada bidang miring
   Program untuk mencari percepatan benda di bidang miring */

// Variabel
   float miUK, sudut, nilai;
   const float g = 9.8;
   char ulang;

// Deskripsi
int main (){
    cout << "===============================================================" << endl;
    cout << "\t PROGRAM MENCARI PERCEPATAN PADA BIDANG MIRING" << endl;
    cout << "=============================================================== \n" << endl;

    cout << "Masukkan nilai [\346k] : "; // simbol dari miUK
    cin >> miUK;
    cout << "Masukkan nilai [\370]  : "; // simbol dari derajat
    cin >> sudut;
    
    /* Konversi Sudut ke Radian
       sudut ==> radian = sudut x phi/180 */
    sudut = sudut * M_PI/180;  

    /* Percepatan Benda pada Bidang Miring
       i ==> mg sin (0) - miUK N = ma
       j ==> N = mg cos (0)
       = mg sin (0) - miUK mg cos (0) = ma 
       a/g = sin (0)- miUK cos (0) 
       a   = (sin (0) - miUK cos (0))g 
       
       Keterangan !!
       miUK = Koefisien gesek pada benda */
    nilai = (sin(sudut)-miUK*cos(sudut))*g;

    // Output
    cout << fixed << setprecision(2); // Digunakan untuk membatasi angka belakang bilangan bilangan desimal
    cout << "Nilai percepatan benda pada bidang miring adalah " << nilai << " m/s\375 \n"; // simbol dari kuadrat
 
    // END
    cout << "Apakah anda ingin mengulang [y]/[n] ? ";
    cin >> ulang;
    cout << "\n";

    if (ulang == 'y'){
        cout << main();
    }else{
        cout << "TERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI ^_^ ";
    } 
    cin.get();
    return 0;
}
