/******************************************************************************

Fonksiyonlarla sayının kübünü hesaplamakla karşınızdayız c üzerinde sayının kübünü hesapllıcaz
*******************************************************************************/
#include <stdio.h>
int SayininKubunuHesapla(int sayi);
int main()
{
    int c, sayi;
    printf("Lütfen bir sayi giriniz:");
    scanf("%d", &sayi);
    c=SayininKubunuHesapla(sayi);
    printf("%d sayısının kübü = %d'dir", sayi,c);
    return 0;
}    
    int SayininKubunuHesapla(int sayi)
    {
        return(sayi*sayi*sayi );
    }
    