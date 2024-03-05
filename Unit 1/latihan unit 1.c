#include <stdio.h>

int main() {
    int jarak, waktu, kecepatan, jarak2, waktu2, kecepatan2;

    printf("Masukkan jarak, waktu, dan kecepatan: ");
    scanf("%d %d %d", &jarak, &waktu, &kecepatan);

    printf("Masukkan jarak dan waktu untuk menghitung kecepatan: ");
    scanf("%d %d", &jarak, &waktu);
    
    printf("Masukkan kecepatan dan waktu untuk menghitung jarak: ");
    scanf("%d %d", &kecepatan2, &waktu2);
    
    printf("Masukkan jarak dan kecepatan untuk menghitung waktu: ");
    scanf("%d %d", &jarak2, &kecepatan2);
    
    float kecepatan_float = (float)jarak / (float)waktu;
    float jarak_float = (float)kecepatan2 * (float)waktu2;
    float waktu_float = (float)jarak2 / (float)kecepatan2;

    printf("Kecepatan: %.2f\n", kecepatan_float);
    printf("Jarak: %.2f\n", jarak_float);
    printf("Waktu: %.2f\n", waktu_float);

    return 0;
}
