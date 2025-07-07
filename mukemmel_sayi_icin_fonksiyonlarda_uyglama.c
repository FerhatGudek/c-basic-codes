/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int SayiMukemmelMi(int sayi);
int main()
{
    int sayi;
    printf("Lütfen bir sayi giriniz:");
    scanf("%d", &sayi);
    
    if (SayiMukemmelMi(sayi))
    
        printf("%d sayısı mükemmel bir sayıdır\n",sayi);
    
    else
    
        printf("%d sayısı mükemmel bir sayı değildir\n", sayi);
    
    return 0;
}
int SayiMukemmelMi(int sayi)
{
    int i, toplam =0;
   
    for(i=1 ;i<sayi; i++)
    {
        if (sayi%i == 0)
            toplam += i;
        
    }
    return (sayi==toplam);
    }  
    
