#include <stdio.h>

int main() {
    // Mendefinisikan array
    int angka[] = {5,3,7};

    // Menghitung jumlah elemen dalam array
    int panjangArray = sizeof(angka) / sizeof(angka[0]);

    // Menginisialisasi nilai maksimum dengan elemen pertama dari array
    int maksimum = angka[0];

    // Mencari nilai maksimum dalam array
    for (int i = 1; i < panjangArray; i++) {
        if (angka[i] > maksimum) {
            maksimum = angka[i];
        }
    }

    // Menampilkan nilai maksimum
    printf("Nilai maksimum dalam array: %d\n", maksimum);

    return 0;
}
