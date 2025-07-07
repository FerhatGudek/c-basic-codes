/******************************************************************************

diskriminant ile bir örnek yapacagız basit bir disk denemesi ile başlıyoruz

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    float kok1,kok2,imajiner;
    float diskriminant;
    
    printf("ax^2+bx+c şeklindeki ikinci derece denklemin a,b ve c katsayılarıı giriniz");
    scanf("%f%f%f", &a,&b,&c);
    
    diskriminant= (b*b)-(4*a*c);
    
    if(diskriminant>0)
    {
        kok1 = -b+sqrt(diskriminant)/ (2*a);
        kok2 = -b- sqrt(diskriminant)/ (2*a);
        printf("İki adet ayrık ve gerçek kök bulunmaktadır= %.2f and %.2f ", kok1, kok2);
    }
    else if(diskriminant<0)
    {
        kok1=kok2= -b/(2*a);
        imajiner= sqrt(-diskriminant) /(2*a);
        printf("İki adet ayrık ve karmaşık kök bulunmaktadır %2.f and %2.f", kok1,kok2);
        
    }
    else if(diskriminant==0)
    {
        kok1=kok2= -b/(2*a);
        printf("Birbirlerine eşit iki adet gerçel kök bulunmaktadır %.2f+ i%.2f  and %.2f -i%.2f", kok1, kok2 ,imajiner,imajiner);
    }
    return 0;
    
}
