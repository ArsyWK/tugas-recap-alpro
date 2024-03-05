#include <stdio.h>

int sisi;
int menu;

void keliling_persegi(int a) {
    int klp = 4 * a;
    printf("Keliling Persegi: %d\n", klp);
}

void luas_persegi(int a) {
    int ss = a * a;
    printf("Luas Persegi: %d\n", ss);
}

void volume_kubus(int a) {
    int vlb = a * a * a;
    printf("Volume Kubus: %d\n", vlb);
}

int main() {
    printf("Masukkan sisi: ");
    scanf("%d", &sisi);
    
    keliling_persegi(sisi);
    luas_persegi(sisi);
    volume_kubus(sisi);
    
    return 0;
}
