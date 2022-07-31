#include <stdio.h>
#include <stdlib.h>
int basamak(int x)
{
    if(x==0)
        return 0;
    else
        return x%10 + basamak(x/10);
}
int main()
{
    int sayi;
    printf("Bir sayi giriniz: \n --> ");
    scanf("%d", &sayi);
    printf("Girilen sayinin basamak toplami: %d", basamak(sayi));

    return 0;
}
