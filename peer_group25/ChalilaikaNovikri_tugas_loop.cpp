#include <iostream>
using namespace std;

int main()
{
    int tinggi_segitiga;
    cout << "Masukkan tinggi pola swegitiga: ";
    cin >> tinggi_segitiga;

    // Pola 1 : Segitiga miring ke kanan

    cout << "Pola 1 (miring ke kanan):" << endl;

    for (int i = 1; i <= tinggi_segitiga; i++)
    { // loop baris (1 sampai n)

        // cetak spasi di depan agar bintang bergeser ke kanan
        for (int spasi = 1; spasi <= tinggi_segitiga - i; spasi++)
        {
            cout << " ";
        }

        // cetak bintang sesuai nomor baris
        for (int bintang = 1; bintang <= i; bintang++)
        {
            cout << "*";
        }

        cout << endl; // pindah baris setelah selesai satu baris
    }

    // Pola 2 : Segitiga menurun

    cout << "\nPola 2 (menurun kiri):\n";

    for (int i = tinggi_segitiga; i >= 1; i--)
    { // loop baris (dari n sampai 1)

        // cetak bintang sesuai nilai i (menurun tiap baris)
        for (int bintang = 1; bintang <= i; bintang++)
        {
            cout << "*";
        }

        cout << endl; // pindah baris setelah selesai satu baris
    }

    // Pola 3 : Segitiga sama kaki (piramida)

    cout << "\nPola 3 (sama kaki / piramida):\n";

    for (int i = 1; i <= tinggi_segitiga; i++)
    { // loop baris (1 sampai n)

        // cetak spasi di kiri untuk meratakan piramida di tengah
        for (int spasi = 1; spasi <= tinggi_segitiga - i; spasi++)
        {
            cout << " ";
        }

        // cetak bintang dengan jumlah ganjil (rumus: 2*i - 1)
        for (int bintang = 1; bintang <= (2 * i - 1); bintang++)
        {
            cout << "*";
        }

        cout << endl; // pindah baris setelah selesai satu baris
    }

    return 0;
}
