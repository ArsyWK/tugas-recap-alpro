#include <stdio.h>

int menu;
int jarak, waktu, kecepatan;

int main() {
    printf("Pilih Operasi yang digunakan\n");
    printf("1. Menghitung Kecepatan:\n");
    printf("2. Menghitung Jarak:\n");
    printf("3. Menghitung Waktu\n");
    printf("Masukkan nomor : ");
    scanf("%d", &menu);

    printf("Masukkan nilai jarak: ");
    scanf("%d", &jarak);
    printf("Masukkan nilai waktu: ");
    scanf("%d", &waktu);
    printf("Masukkan nilai kecepatan: ");
    scanf("%d", &kecepatan);

    switch (menu) {
        case 1:
            kecepatan = (float)jarak / (float)waktu;
            printf("Kecepatan: %d\n", kecepatan);
            break;
        case 2:
            jarak = (float)kecepatan * (float)waktu;
            printf("Jarak: %d\n", jarak);
            break;
        case 3:
            waktu = (float)jarak / (float)kecepatan;
            printf("Waktu: %d\n", waktu);
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
