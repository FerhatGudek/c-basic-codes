/******************************************************************************

Yeni bir for döngüsü kullanımı ile birlikteyiz bakalım neler olacak

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n;
   printf("Lütfen Üst sınır değeri giriniz:");
   scanf("%d", &n);
   printf("\n.............................\n");
   printf("1'den %d'ye kadar olan tüm çift sayılar:\n", n);
   
   for(i=1; i<=n; i++)
   {
       if(i%2==0)
       {
           printf("%d\n", i);
       }
   }
   return 0;
}
