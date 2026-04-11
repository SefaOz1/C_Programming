#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 4

int main()
{
	int matris_1[SIZE] = {0}, det_1, matris_2[SIZE] = {0} ,det_2, i;

	printf("matris 1'in degerlerini giriniz \n");
	for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &matris_1[i]);
    }
    det_1 =  matris_1[0] * matris_1[3] - matris_1[1] * matris_1[2];
	

    printf("matris 2'nin degerlerini giriniz \n");
	for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &matris_2[i]);
    }
    det_2 =  matris_2[0] * matris_2[3] - matris_2[1] * matris_2[2];
	

	printf("\n\nmatris 1'in determinanti = %d\nmatris 2'nin determinanti = %d\n\n", det_1, det_2);

	printf("matrislerin toplami\n%d	%d\n%d	%d\n\n", matris_1[0] + matris_2[0],matris_1[1] + matris_2[1], 
        matris_1[2] + matris_2[2], matris_1[3] + matris_2[3]);
	
    printf("matrislerin carpimi\n%d	%d\n%d	%d\n\n", matris_1[0] * matris_2[0] + matris_1[1] * matris_2[2], 
        matris_1[0] * matris_2[1] + matris_1[1] * matris_2[3], 
        matris_1[2] * matris_2[0] + matris_1[3] * matris_2[2], 
        matris_1[2] * matris_2[1] + matris_1[3] * matris_2[3]);
    
    printf("\n\n");
    return 0;
}
/*
Ornek cikti:

matris 1'in degerlerini giriniz 
5
6
7
8
matris 2'nin degerlerini giriniz 
10
11
12
13


matris 1'in determinanti = -2
matris 2'nin determinanti = -2

matrislerin toplami
15      17
19      21

matrislerin carpimi
122     133
166     181
*/
