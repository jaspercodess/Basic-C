#include <iostream>
using namespace std;

int main (){
    cout << "\t ====== TIPE DATA FUNDAMENTAL ======= \n" << endl;
    
    // Tipe Data [Bilangan Bulat]
    int a;
    cout << "A. Bilangan Bulat" << endl;
    cout << "   Masukkan bilangan bulat = ";
    cin >> a;
    cout << "   Tipe data [int] memiliki " << sizeof(a) << " byte" << endl;

    long b;
    cout << "   Tipe data [long] memiliki " << sizeof(b) << " byte" << endl;

    short c;
    cout << "   Tipe data [short] memiliki " << sizeof(c) << " byte" << endl;

    // Tipe Data [Bilangan Desimal]
    float d;
    cout << "B. Bilangan Desimal" << endl;
    cout << "   Masukkan bilangan desimal = ";
    cin >> d;
    cout << "   Tipe data [float] memiliki " << sizeof(d) << " byte" << endl;
 
    double e;
    cout << "   Tipe data [long] memiliki " << sizeof(e) << " byte" << endl;

    // Tipe Data [Karakter]
    char f;
    cout << "C. Karakter" << endl;
    cout << "   Pilih salah satu abjad [a-z] = ";
    cin >> f;
    cout << "   Tipe data [char] memiliki " << sizeof(f) << " byte" << endl;

    // Tipe Data [Boolean]
    bool g;
    cout << "D. Boolean" << endl;
    cout << "   Pilih salah satu nilai [0-1] = ";
    cin >> g;
    cout << "   Tipe data [float] memiliki " << sizeof(g) << " byte \n" << endl;

    // Selain Tipe Data
    string h;
    cout << "** Tipe data selain fundamental" << endl;
    cout << "   Apa warna favorit anda = ";
    cin >> h;
    cout << "   Tipe data [string] memiliki " << sizeof(h) << " byte \n" << endl;

    // Exit
    cout << "====================================================\n" << endl;
    cout << "Terima kasih telah menggunakan program ini ^_^" << endl;
 
    return 0;
}
