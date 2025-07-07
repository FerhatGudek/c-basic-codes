/******************************************************************************

Yeni fonksiyon uygulamalarıyla beraberiz tüm hızımızla devam c yee

*******************************************************************************/
#include <stdio.h>
int SayiCiftMi(int sayi)
{
    if((sayi %2) == 0)
    
        return 1;
    else
        return 0;
}
int main()
{
  int sayi;
  printf("Sayı değerini giriniz:");
  scanf("%d", &sayi);
  
  if(SayiCiftMi(sayi))
  {
      printf("Bu bir çift sayıdır");
  }
  else
  {
      printf("Bu bir çift sayı değildir");
  }
  return 0;
}

