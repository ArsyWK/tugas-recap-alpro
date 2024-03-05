#include <stdio.h>

int sisi;
int menu;

void keliling_Persegi(int a) {
    int klp = 4 * a;
    printf("%d\n", klp);
}

void luas_persegi(int a) {
    int ss = a * a;
    printf("%d\n", ss);
}

void volume_kubus(int a) {
    int vlb = a * a * a;
    printf("%d\n", vlb);
}

int main() {
    printf("masukan menu 1.kelilingpersegi,2.luaspersegi,3.volumekubus\n");
    scanf("%d", &menu);
    switch(menu) {
        case 1:
            printf("masukan sisi:\n");
            scanf("%d", &sisi);
            keliling_Persegi(sisi);
            break;
            
        case 2:
            printf("masukan sisi:\n");
            scanf("%d", &sisi);
            luas_persegi(sisi);
            break;

        case 3:
            printf("masukan sisi:\n");
            scanf("%d", &sisi);
            volume_kubus(sisi);
            break;
            
        default:
            break;
    }
    return 0;
}
