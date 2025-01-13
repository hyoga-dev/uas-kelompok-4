#include <iostream>
#include <cmath>    // Untuk fungsi sqrt
#include <algorithm> // Untuk fungsi sort
#include <iomanip>  // Untuk pengaturan format output

using namespace std;

int main() {
    // Data mahasiswa
    string mahasiswa[] = { "Tono", "Ani", "Budi", "Cintia", "Lisa", "Senku", "Mariyadi" };
    int nilai[] = { 92, 65, 74, 80, 80, 70, 78 };
    int jumlahMahasiswa = 7;

    // Menghitung Mean
    double totalNilai = 0;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        totalNilai += nilai[i];
    }
    double mean = totalNilai / jumlahMahasiswa;

    // Menghitung Median
    sort(nilai, nilai + jumlahMahasiswa); // Mengurutkan nilai
    double median;
    if (jumlahMahasiswa % 2 == 0) { // Jika jumlah data genap
        median = (nilai[jumlahMahasiswa / 2 - 1] + nilai[jumlahMahasiswa / 2]) / 2.0;
    }
    else { // Jika jumlah data ganjil
        median = nilai[jumlahMahasiswa / 2];
    }

    // Menghitung Standard Deviasi
    double sumSquareDiff = 0;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        sumSquareDiff += pow(nilai[i] - mean, 2);
    }
    double stdDev = sqrt(sumSquareDiff / jumlahMahasiswa);

    // Output hasil
    cout << "Daftar Mahasiswa dan Nilainya:" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << i + 1 << ". " << mahasiswa[i] << ": " << nilai[i] << endl;
    }

    cout << fixed << setprecision(2); // Atur format output desimal
    cout << "\nHasil Perhitungan:" << endl;
    cout << "Mean (Rata-rata): " << mean << endl;
    cout << "Median          : " << median << endl;
    cout << "Standard Deviasi: " << stdDev << endl;

    return 0;
}
