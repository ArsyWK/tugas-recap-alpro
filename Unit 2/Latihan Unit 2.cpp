#include <stdio.h>

int main() {
    
    int jumlahTransaksi, nominalTransaksi, totalTransaksi = 0;

   
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlahTransaksi);

   
    if (jumlahTransaksi <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }


    for (int i = 0; i < jumlahTransaksi; i++) {
        printf("Masukkan nominal transaksi ke-%d: ", i + 1);
        scanf("%d", &nominalTransaksi);
        totalTransaksi += nominalTransaksi;
    }

  
    printf("Total pengeluaran hari ini: %d\n", totalTransaksi);

    return 0;
}
