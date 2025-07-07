/* yeni bir proje c için devamke */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int sayi1 , sayi2 ;
    
    printf("İki sayı giriniz");
    scanf("%d%d", &sayi1, &sayi2);
    
    if(sayi2 > sayi1)
    { 
        printf("Birinci blok:%d daha büyüktür", sayi2);
    }
    
    if(sayi1 > sayi2)
    {
        printf("İkinci blok:%d daha büyüktür", sayi1);
    }
    
    if(sayi1 == sayi2)
    {
        printf("İki sayı birbirine eşittir");
    }
    return 0;
}