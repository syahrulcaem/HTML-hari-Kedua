#include <stdio.h>

int main() {
    // Mendefinisikan array
    int angka[] = {8, 3, 5};

    // Menghitung jumlah elemen dalam array
    int panjangArray = sizeof(angka) / sizeof(angka[0]);

    // Menginisialisasi variabel untuk menyimpan hasil penjumlahan
    int hasilJumlah = 0;

    // Menjumlahkan elemen-elemen dalam array
    for (int i = 0; i < panjangArray; i++) {
        hasilJumlah += angka[i];
    }

    float rata = hasilJumlah/panjangArray;

    // Menampilkan hasil penjumlahan
    printf("Hasil rata-rata: %f\n", rata);

    return 0;
}
