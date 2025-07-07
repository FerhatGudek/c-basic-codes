/******************************************************************************

realloc ile devam ediyoruz realloc daha çok yeni bir boyut kazandırma işlemidir bunun örneğini görecegiz

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *isaretci , n1 , n2 , i ;
    printf("Boyut giriniz: ");
    scanf("%d", &n1);
    isaretci = (int*)malloc(n1*sizeof(int));
    
    printf("Ayrılan (tahsis edilen) bellek adresleri");
    for (i = 0; i< n1; ++i)
    
        printf("%pc\n", isaretci+1);
    printf("\nYeni Boyut giriniz:");
    scanf("%d", &n2);
    isaretci= realloc(isaretci,n2*sizeof(int));
    printf("Ayrılan (tahsis edilen ) bellek adresleri: \n");
    for(i=0; i<n2; ++i)
        printf("%pc\n ", isaretci+i);
        free(isaretci);
        return 0;
        
    
    
    
}
