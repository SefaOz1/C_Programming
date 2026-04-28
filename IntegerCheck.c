#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int sayi_1, sayi_2;
    int intMi_1, intMi_2;

    printf("1. sayiyi giriniz: ");
    intMi_1 = scanf("%d", &sayi_1);  // girdi sayiysa intMi_1 = 1 olur

    int c49;
    while ((c49 = getchar()) != '\n' && c49 != EOF);

    printf("2. sayiyi giriniz: ");
    intMi_2 = scanf("%d", &sayi_2);



    if (intMi_1)
        printf("\n1. girilen = Sayidir\n");
    else
        printf("\n1. girilen = Sayi Degildir\n");
    


    if (intMi_2)
        printf("2. girilen = Sayidir\n");
    else
        printf("2. girilen = Sayi Degildir\n");


    printf("\n\n");
    return 0;
}
/*
Ornek cikti:

1. sayiyi giriniz: asdf  
2. sayiyi giriniz: 43

1. girilen = Sayi Degildir
2. girilen = Sayidir
*/
