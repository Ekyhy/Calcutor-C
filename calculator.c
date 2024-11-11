#include <stdio.h>

int penjumlahan(int x, int y){
 return(x+y);
}

int pengurangan(int x, int y){
    return(x-y);
}

int perkalian(int x, int y){
    return(x*y);
}

int pembagian(int x, int y){
    if (y == 0)
    {
       printf("perkalian 0 has not identification\n");
       return 0;
    }else
    {
        return(x/y);
    }
}

int faktorial(int x){
    if ( x <= 1)
    {
        return 1;
    } else
    {
        return x*faktorial(x-1);
    }
}
int main(){
    int x, y, result, chooice;
    char repeat;
    do
    {
        printf("=== Welcome To Mycalculator === \n");
        printf("1.Penjumlahan\n");
        printf("2.Pegurangan\n");
        printf("3.Pekalian\n");
        printf("4.Pembagian\n");
        printf("5.faktorial\n");
        printf("Masukkan pilihan operasi Anda:");
        scanf("%d",&chooice);

        printf("Masukkan nilai pertama:");
        scanf("%d",&x);
        printf("Masukkan nilai kedua:");
        scanf("%d",&y);
        switch (chooice)
        {
        case 1/* constant-expression */:
            result = penjumlahan(x,y);
            printf("Hasil penjumlahan adalah:%d\n",result);
            break;
        case 2 :
            result = pengurangan(x,y);
            printf("Hasil pengurangan adalah:%d\n", result);
        break;
          case 3 :
            result = perkalian(x,y);
            printf("Hasil perkalian adalah:%d\n", result);
        break;
          case 4 :
            result = pembagian(x,y);
            printf("Hasil pembagian adalah:%d\n", result);
        break;
          case 5 :
            result = faktorial(x);
            printf("Hasil faktorial adalah %d\n", result);
            break;
        default:
            printf("This command can't identification, please your command other");
            break;
        }
        printf("Apakah anda ingin melakukan perhitungan kembali?[y/n]\n");
        getchar();
        scanf("%c",&repeat);
    } while ( repeat == 'y' || repeat == 'Y');
    printf("Thankyou, have used the mycalculator :)");
    
}