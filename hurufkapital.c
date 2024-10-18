#include <stdio.h>
#include <string.h>

int main(){
    char nama[30];
    scanf("%[^\n]s", nama);
    int panjang = strlen(nama);
    for (int i = 0; i < panjang; i++)
    {
        if (nama[i] >= 'a' && nama[i] <= 'z')
        {
            nama[i] -=32;
        }
        
    }
    printf("%s", nama);

    return 0;
}