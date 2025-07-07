/******************************************************************************

yeni bir if else ve switch case durumlarını yazıyoruz bakalım nasıl oalcak isterseniz dierek yazmaya baslayalıom

*******************************************************************************/
#include <stdio.h>

int main()
{
    int gun;
    printf("Günün haftanın kaçıncı günü olduğunu giriniz:");
    scanf("%d", &gun);
    
    if(gun ==1)
    {
        printf("Pazartesi");
    }
    else if( gun==2)
    {
        printf("Salı");
    }
    else if( gun==3)
    {
        printf("Carsamba");
    }
    else if (gun==4)
    {
        printf("Perşembe");
    }
    else if(gun == 5)
    {
        printf("Cuma");
    }
    else if (gun == 6)
    {
        printf("Cumartesi");
    }
    else if(gun == 7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Lütfen geçerli bir gün giriniz");
    }
    return 0;
}
