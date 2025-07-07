/******************************************************************************

                           Dosya oluşturma ve yazma ile beraberiz

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*fPtr;
    char karakter;
    fPtr = fopen("dosya1.txt", "r");
    if (fPtr == NULL)
    {
        printf("Dosya okunamadı.\n");
        printf("Dosyanın ilgili konunumda olup olmadığını veya erişiminizin olup olmadığını kontrol ediniz.\n");
        exit(EXIT_FAILURE);
    }
    printf("Dosya başarılı bir şekilde açıldı içeriği okunuyor. \n");
    do
    {
        karakter= fgetc(fPtr);
        putchar(karakter);
    }while (karakter != EOF);
    fclose(fPtr);
}
