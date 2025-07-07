/******************************************************************************

c üzerinde devamkaeee
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define BUYUK_SAYI 1000000

int BelirliIslemlerleGerceklestirilir(int girdi)
{
    return(girdi<BUYUK_SAYI);
}

int main()
{
    int ilk_degisken = 50;
    int son_degisken = 40;
    int sonuc1,sonuc2;
    const int BASKA_BUYUK_BIR_SAYI = 1000000;
    printf("Büyük sayı: %d\n", BUYUK_SAYI);
    
    sonuc1 = (ilk_degisken< BUYUK_SAYI);
    printf("Sonuc 1 %d\n", sonuc1);
    
    sonuc2 = (son_degisken<BUYUK_SAYI);
    printf("Sonuc 2 %d\n", sonuc2);
    #undef BUYUK_SAYI
    #define BUYUK_SAYI 3000000
    printf("Büyük sayı: %d\n", BUYUK_SAYI);
    return 0;
    
    
}