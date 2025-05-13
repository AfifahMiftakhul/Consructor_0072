#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
    mahasiswa(int nim, string nama); // Constructor dengan parameter
};

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "Constructor Parameter Terpanggil" << endl;
    cout << "NIM : " << endl;
    cout << "Nama : " << endl;
}

int main(){
    mahasiswa(12345, "Pascal");    // Memanggil Constructor dengan parameter
    return 0;
}