/* if ve else ile c kodlamalarına devam ediyoruz */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int sayi;
    printf("Lütfen bir sayı giriniz:");
    scanf("%d", &sayi);
    
    if(sayi > 0)
    {
        printf(" Sayi büyüktür sıfırdır");
    }
    
    if(sayi < 0) 
    {
        printf(" Sayi küçüktür sıfırdır");
    }
    
    if(sayi == 0)
    {
        printf(" Sayi sıfıra eşittir");
    }
    return 0;
}
