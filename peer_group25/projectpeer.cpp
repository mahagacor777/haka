#include <iostream>
using namespace std;
// Fungsi untuk menghitung total pengeluaran 1 hari
int hitungHarian(int makan, int transportasi, int lain)
{
    return makan + transportasi + lain;
}

// Fungsi untuk menghitung total 1 minggu
int hitungMingguan(int arr[], int n)
{
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    return total;
}

int main()
{
    const int JUMLAH_HARI = 7; // inisialisasi jumlah hari(seminggu)
    int pengeluaran[JUMLAH_HARI];

    // Input pengeluaran per hari
    for (int i = 0; i < JUMLAH_HARI; i++)
    {
        int makan, transport, lain;

        cout << "\n=== Hari ke-" << (i + 1) << " ===\n";
        cout << "Masukkan pengeluaran makan       : Rp ";
        cin >> makan;
        cout << "Masukkan pengeluaran transportasi: Rp ";
        cin >> transport;
        cout << "Masukkan pengeluaran lain-lain   : Rp ";
        cin >> lain;

        // Simpan total pengeluaran hari ini ke array
        pengeluaran[i] = hitungHarian(makan, transport, lain);

        // Cetak total hari itu
        cout << "Total pengeluaran hari ke-" << (i + 1)
             << " = Rp " << pengeluaran[i] << endl;
    }

    // Hitung total seminggu
    int total_pengeluaran_Mingguan = hitungMingguan(pengeluaran, JUMLAH_HARI);

    // Tampilkan hasil akhir dengan menjumlahkan semua pengeluaran perhari yang sudah disimpan pada array pengeluaran
    cout << "\n========================================\n";
    cout << "Total pengeluaran selama 7 hari = Rp ";
    cout << "\n========================================\n";
    cout << total_pengeluaran_Mingguan << endl;

    return 0;
}
