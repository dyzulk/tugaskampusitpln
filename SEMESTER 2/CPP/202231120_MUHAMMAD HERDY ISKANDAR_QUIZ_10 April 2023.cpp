#include <iostream>
#include <string>
using namespace std;

int main() {
    // deklarasi array 2 dimensi untuk produk
    string produk[2][3];

    // input informasi produk dari user
    for (int i = 0; i < 2; i++) {
        cout << "Masukan Kode Produk ke-" << i+1 << "\t: ";
        cin >> produk[i][0];
        cout << "Masukan Nama Produk ke-" << i+1 << "\t: ";
        getline (cin>> ws, produk[i][1]);
        cout << "Masukan Jumlah Produk ke-" << i+1 << "\t: ";
        cin >> produk[i][2];
    }

    // menampilkan informasi produk
    cout << "\nHasil inputan produk 2 dimensi\n";
    cout << "Kode Produk\t\tNama Produk\t\tJumlah Produk\n";
    for (int i = 0; i < 2; i++) {
        cout << produk[i][0] << "\t\t\t" << produk[i][1] << "\t\t\t" << produk[i][2] << endl;
    }

    return 0;
}

