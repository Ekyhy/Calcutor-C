#include <stdio.h>

int main(){

    float Fahrenheit,Celcius;

    printf("Masukkan Suhu saat ini");
    scanf("%f, Celcius",&Celcius);

    Fahrenheit = Celcius * 1.8 + 32;

    printf("Hasil Konfersi Suhu Celsius ke Fahrenheit adalah : %.2f ", Fahrenheit);

    return 0;
}