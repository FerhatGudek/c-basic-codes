/******************************************************************************

yeni bir for döngüsü uygulaması .

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i, sayi;
   printf("Çarpanları hesaplanacak sayıyı giriniz:");
   scanf("%d",&sayi );
   
   printf("%d sayısının çarpanları:\n", sayi);
   for(i=1; i<=sayi; i++)
   {
       if(sayi%i==0)
       {
           printf("%d\n", i);
       }
   }
   return 0;
}
