#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fungsi untuk menampilkan array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Fungsi untuk melakukan Shell Sort
void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}

int main() {
    clock_t start_total, end_total;
    double cpu_time_used_total;

    // Tentukan ukuran array yang cukup besar dari awal
    int arr[12500]; // 25 elemen awal + 10000 elemen tambahan
    int n = 25;     // Jumlah elemen awal

    srand(time(NULL));
    for (int i = 0; i < 10000; i++) {
        arr[n + i] = rand() % 100 + 1;  // Bilangan acak antara 1 dan 100
    }

    printf("Array sebelum diurutkan: \n");
    // printArray(arr, n + 10000); // Tampilkan seluruh array (mungkin tidak praktis)

    start_total = clock();

    // Panggil fungsi Shell Sort
    for (int iter = 0; iter < 10; iter++) {
        clock_t start_sort = clock();
        shellSort(arr, n + 10000);
        clock_t end_sort = clock();

        printf("Iterasi %d: Array setelah diurutkan\n", iter + 1);
        // printArray(arr, n + 10000); // Tampilkan seluruh array (mungkin tidak praktis)

        double cpu_time_used_sort = ((double)(end_sort - start_sort)) / CLOCKS_PER_SEC;
        printf("Waktu eksekusi Shell Sort (Iterasi %d): %.5lf seconds\n", iter + 1, cpu_time_used_sort);
    }

    end_total = clock();
    cpu_time_used_total = ((double)(end_total - start_total)) / CLOCKS_PER_SEC;

    printf("Waktu eksekusi total: %.5lf seconds\n", cpu_time_used_total);

    return 0;
}
