/******************************************************************************

                       maliyet satış bilgileri kar zarar hesaoplama

*******************************************************************************/

#include <stdio.h>

int main()
{
    int maliyet, satis_bedeli, kar_zarar;
    printf("Lütfen bir maliyet giriniz:");
    scanf("%d", &maliyet );
    printf("Lütfen bir satış bedeli giriniz:");
    scanf("%d", &satis_bedeli);
    
    if(satis_bedeli>maliyet)
    {
        kar_zarar=satis_bedeli-maliyet;
        printf("Kar=%d\n", kar_zarar);
    }
    else if(maliyet>satis_bedeli)
    {
        kar_zarar=maliyet-satis_bedeli;
        printf("zarar=%d\n", kar_zarar);
    }
    else
    {
        printf("Satıştan kar veya zarar edilmemiştir");
    }
    return 0;
}