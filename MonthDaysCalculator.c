#include<stdio.h>
int main()
{
	int ay;

	printf("ayi sayi cinsinden giriniz:\n");
	scanf("%d",&ay);

	switch(ay)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("bu ay 31 gundur\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("bu ay 30 gundur\n");
			break;
		case 2:
			printf("bu ay 28 veya 29 gundur\n");
			break;
	}

	printf("\n\n");
	return 0;
}
/*
Ornek cikti:

ayi sayi cinsinden giriniz:
4
bu ay 30 gundur
*/
