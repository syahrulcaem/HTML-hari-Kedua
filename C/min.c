#include <stdio.h>

int main() {
    // Mendefinisikan array
    int angka[] = {5,3,7};

    // Menghitung jumlah elemen dalam array
    int panjangArray = sizeof(angka) / sizeof(angka[0]);

    // Menginisialisasi nilai maksimum dengan elemen pertama dari array
    int minimum = angka[0];

    // Mencari nilai maksimum dalam array
    for (int i = 1; i < panjangArray; i++) {
        if (angka[i] < minimum) {
            minimum = angka[i];
        }
    }

    // Menampilkan nilai maksimum
    printf("Nilai mainimum dalam array: %d\n", minimum);

    return 0;
}
