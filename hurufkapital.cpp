#include <stdio.h>
#include <string.h>

int main(){

    char str[30];

    scanf("%[^\n]", str);
    getchar();

    int panjang = strlen(str);
    //looping
    for(int i=0; i<panjang; i++){
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -=32;
        }
        
    }
    printf("%s", str);
    return 0;
}