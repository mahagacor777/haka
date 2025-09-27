#include <iostream>
using namespace std;

// Fungsi langsung didefinisikan sebelum fungsi main agar compiler membacanya terlebih dahulu sebelum bisa dipanggil di dalam main

int kuadrat(int x) {    //deklarasi fungsi untuk menghitung kuadrat bilangan 
    return x * x;
}

int kubik(int x) {     //deklarasi fungsi untuk menghitung  kubik bilangan
    return x * x * x;
}

int faktorial(int x) { //deklarasi fungsi untuk menghitung faktorial bilangan
    int hasil = 1;     //inisialisasi hasil
    for (int i = 1; i <= x; i++) { //looping untuk mengalikan berderet dari 1 hingga mencapai bilangan yang di inputkan
        hasil *= i;
    }
    return hasil;          //mengembalikan hasil operasi agar bisa dipanggil di fungsi main
}

int main() {
    int angka;        //deklarasi variabel angka dengan tipe integer
    cout << "Masukkan bilangan: ";
    cin >> angka;     //masukkan angka yang ingin dihitung kuadrat, kubik, dan faktorialnya

    cout << "Kuadrat: " << kuadrat(angka) << endl;    //menampilkan teks di terminal agar orang tau tempat input angka
    cout << "Kubik: " << kubik(angka) << endl;        
    cout << "Faktorial: " << faktorial(angka) << endl;
  
  
  //untuk input bilangan yang cukup besar, program ini mungkin tidak bisa menangani input tersebut. dikarenakan faktorial akan memiliki hasil yang sangat besar
  //karena pada tugas peer group ini diintruksikan menggunakan tipe data int, yang hanya menangani -32000 - 32000

    return 0;
}
