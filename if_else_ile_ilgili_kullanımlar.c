/******************************************************************************

Kodlara devam ediyoruz c üzerinde

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sayi;
    printf("Lütfen bir sayı giriniz:");
    scanf("%d",&sayi );
    
    if(sayi > 0){
        printf("Sayi sıfırdan büyüktür");
    }
    else if(sayi < 0){
        printf("Sayi sıfırdan küçküktür");
    }
    else{
        printf("Sayi sıfırdır");
    }
    return 0;
    
    
}
