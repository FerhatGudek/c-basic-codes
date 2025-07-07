/******************************************************************************

switch case ile birlikte hesap makinesi nasıl yapılır bunu denicez c simple programlama ile işimiizi görüyoruz

*******************************************************************************/
#include <stdio.h>

int main()
{
    char islem;
    float sayi1 , sayi2 , sonuc= 0.0f;
    
    printf("Basit Hesap makinesi uygulaması\n");
    printf("\n.........................\n");
    printf("Lütfen [sayı1] [+,-,*,/] [sayı2] giriniz:\n");
    scanf("%f%c%f", &sayi1,&islem, &sayi2 );
    
    switch(islem)
    {
        case '+':
        sonuc= sayi1 + sayi2;
        break;
        case '-':
        sonuc= sayi1 - sayi2;
        break;
        case'*':
        sonuc= sayi1 * sayi2;
        break;
        case '/':
        sonuc=sayi1 / sayi2;
        break;
        default:
        printf("Geçersiz işlem ");
    }
    printf("%.2f%c%2.f = %2.f islem Sonucunuz", sayi1,islem,sayi2, sonuc);
    return 0;
}
