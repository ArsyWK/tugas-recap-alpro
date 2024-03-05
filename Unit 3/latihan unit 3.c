#include <stdio.h>

int main() {
  
    int jumlahElemen, total = 0;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &jumlahElemen);

    int array[jumlahElemen];

    for (int i = 0; i < jumlahElemen; i++) {
        printf("Masukkan nilai elemen ke-%d: ", i + 1);
        scanf("%d", &array[i]);
        total += array[i];
    }

    printf("Hasil jumlah seluruh elemen pada array: %d\n", total);

    return 0;
}
