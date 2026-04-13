#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int i;
    double aylikKullanim = 0, besAylikKullanim = 0, fatura;

    for (i = 0; i < 5; i++)
    {
        printf("Aylik elektrik tuketiminizi girin: ");
        scanf("%lf", &aylikKullanim);

        besAylikKullanim += aylikKullanim;

        if (aylikKullanim <= 150)
        {
            fatura = aylikKullanim * 2;
        }
        else
        {
            fatura = (150 * 2) + (aylikKullanim - 150) * 3;
        }

        printf("Aylik faturaniz = %lf\n\n", fatura);
    }

    if (besAylikKullanim <= 800)
        printf("Cevreyi korudugunuz icin tesekkurler\n");
    else
        printf("Yuksek elektrik tuketimi yaptiniz\n");

    printf("\n\n");
    return 0;
}
/*
Ornek cikti:

Aylik elektrik tuketiminizi girin: 150
Aylik faturaniz = 300.000000

Aylik elektrik tuketiminizi girin: 200
Aylik faturaniz = 450.000000

Aylik elektrik tuketiminizi girin: 100
Aylik faturaniz = 200.000000

Aylik elektrik tuketiminizi girin: 100
Aylik faturaniz = 200.000000

Aylik elektrik tuketiminizi girin: 90
Aylik faturaniz = 180.000000

Cevreyi korudugunuz icin tesekkurler
*/
