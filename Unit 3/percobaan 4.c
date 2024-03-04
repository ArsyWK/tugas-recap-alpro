#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}//program tersebut bekerja dengan cara mendefinisi agar yg bernama tsb berubah menjadi value yang sudah didefinisikan lalu membuat array  yang berisi maksimum "isi" 
dan maksimum panjang nama , lalu menggunakan loop agar membuat matrix sesuai dengan baris yang sudah didbuat pada array
