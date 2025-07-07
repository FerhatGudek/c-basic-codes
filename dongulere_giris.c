/******************************************************************************

                          döngülere giriş ile devam ediyoruz c den hadi bakalım hakkımızda hayırlısı diyelim

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, n;
    printf("Üst sınır değeri giriniz:");
    scanf("%d", &n);
    
    printf("1' den %d'ye kadar olan tüm sayma sayıları:\n", n);
    
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

    