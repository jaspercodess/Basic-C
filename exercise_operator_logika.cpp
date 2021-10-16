#include <iostream>
using namespace std;

// Variabel
int a = 4;
int b = 5;
bool hasil;

// Deskripsi
int main () {
    cout << "Diketahui : \n" << "a = 4 \n" << "b = 5" << endl;
    cout << "Catatan !!\n" << "0 = false \n" << "1 = true" << endl;
    // Operator Logika [AND]
    cout << "======================================" << endl;
    cout << "\t Operator Logika [AND]" << endl;
    cout << "======================================" << endl;
    hasil = (a==4) && (b==5); // True
    cout << hasil << endl;
    hasil = (a==4) && (b==4); // False
    cout << hasil << endl;
    hasil = (a==3) and (b==5); // False
    cout << hasil << endl;
    hasil = (a==3) and (b==4); // False
    cout << hasil << endl;
    // Operator Logika [OR]
    cout << "======================================" << endl;
    cout << "\t Operator Logika [OR]" << endl;
    cout << "======================================" << endl;
    hasil = (a==4) || (b==5); // True
    cout << hasil << endl;
    hasil = (a==4) || (b==4); // True
    cout << hasil << endl;
    hasil = (a==3) or (b==5); // True
    cout << hasil << endl;
    hasil = (a==3) or (b==4); // False
    cout << hasil << endl;
    // Operator Logika [NOT]
    cout << "======================================" << endl;
    cout << "\t Operator Logika [NOT]" << endl;
    cout << "======================================" << endl;
    hasil = !(a==4); // True ==> False
    cout << hasil << endl;

    cin.get();
    return 0;
}