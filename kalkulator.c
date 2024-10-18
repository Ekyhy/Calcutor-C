#include <stdio.h>

int main(){
    int pilihan;
    int a , b, c;
    printf("Pilih Operasi Aritmatika Berikut:\n");
    printf("1.Penjumlahan\n");
    printf("2.Pengurangan\n");
    printf("3.Perkalian\n");
    printf("4.Pembagian\n");

    scanf("%d",&pilihan);

    switch (pilihan)
    {
    case 1 :
        printf("Penjumlahan\n");
        printf("Masukkan Angka Pertama\n");
        scanf("%d",&a);
        printf("Masukkan Angka Kedua\n");
        scanf("%d",&b);

        printf("Hasil Penjumlahan : %d",c = a+b );
        break;
    case 2 :
        printf("Pengurangan\n");
        printf("Masukkan Angka Pertama\n");
        scanf("%d",&a);
        printf("Masukkan Angka Kedua\n");
        scanf("%d",&b);

        printf("Hasil Pengurangan : %d ",c = a-b );
        break;
     case 3 :
        printf("Pengurangan\n");
        printf("Masukkan Angka Pertama\n");
        scanf("%d",&a);
        printf("Masukkan Angka Kedua\n");
        scanf("%d",&b);

        printf("Hasil Perkalian : %d ",c = a*b );
        break;
     case 4 :
        printf("Pengurangan\n");
        printf("Masukkan Angka Pertama\n");
        scanf("%d",&a);
        printf("Masukkan Angka Kedua\n");
        scanf("%d",&b);

        printf("Hasil Pembagian : %d ",c = a/b );
        break;
    default:
        printf("Plihan Anda Tidak Valid");
        break;
    }

    return 0;
}