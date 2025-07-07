/******************************************************************************

Koşullu ifadelerin kod yazılımına devam ediyoruz
*******************************************************************************/
#include <stdio.h>

int main()
{
    int sayi1 , sayi2, sayi3, maximum;
    printf("Lütfen üç adet sayı giriniz");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);
    
    if((sayi1>sayi2) && (sayi1>sayi3))
    {
        maximum= sayi1;
    }
    else if((sayi2>sayi1) && (sayi2>sayi3))
    {
       maximum=sayi2; 
    }
    else if((sayi3>sayi1) && (sayi3>sayi2))
    {
        maximum=sayi3;
    }
    printf("%d 3 sayi arasındaki en büyük sayi", maximum);
    return 0;
}   
        
    
    