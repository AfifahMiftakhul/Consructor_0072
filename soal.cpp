#include <iostream>
#include <string>
using namespace std;

class Barang {
public:
    
    Barang(string nama, int kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    void tampilkanInfo() {
        cout << "Informasi Barang:" << endl;
        cout << "Nama Barang: " << namaBarang << endl;
        cout << "Kode Barang: " << kodeBarang << endl;
    }

private:
    string namaBarang;
    int kodeBarang;
};

int main() {
    
    Barang barang("Laptop Apip ", 072);
    barang.tampilkanInfo();
    cout << endl;

    return 0;
}
