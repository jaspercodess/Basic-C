#include <iostream>
using namespace std;

// Variabel 
int a;
int b;
bool hasil;

// Deskripsi
int main (){
    cout << "masukkan bilangan pertama = ";
    cin >> a;
    cout << "masukkan bilangan kedua = ";
    cin >> b;
    cout << "\n";
    cout << "Catatan !!\n" << "0 = False \n" << "1 = True \n";

    cout << "==============================="<< endl;
    // Komparasi [Sebanding]
    hasil = (a==b);
    cout << "1. Sebanding = " << hasil << endl;
    // Komparasi [Tidak sebanding]
    hasil = (a!=b);
    cout << "2. Tidak sebanding = " << hasil << endl;
    // Komparasi [Kurang dari]
    hasil = (a<b);
    cout << "3. Kurang dari = " << hasil << endl;
    // Komparasi [Lebih dari]
    hasil = (a>b);
    cout << "4. Lebih dari = " << hasil << endl;
    // Komparasi [Kurang dari sama dengan]
    hasil = (a<=b);
    cout << "5. Kurang dari sama dengan = " << hasil << endl;
    // Komparasi [Lebih dari sama dengan]
    hasil = (a>=b);
    cout << "6. Lebih dari sama dengan = " << hasil << endl;
    
    // Exit
     cout << "=============================== \n"<< endl;
    cout << "Terima kasih telah menggunakan program ini ^_^" << endl;
    
    cin.get();
    return 0;
}