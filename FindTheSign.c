#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int findSign(int parameter_1);  // prototype

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = findSign(number);

    printf("The number is ");
    switch (result)
    {
        case 1:
            printf("positive\n");
            break;
        case -1:
            printf("negative\n");
            break;
        case 0:
            printf("zero\n");
            break;
        default:
            printf("something went wrong\n");
    }

    printf("\n\n");
    return 0;
}

int findSign(int parameter_1)
{
    // if parameter_1 is positive return 1, else if
    // parameter_1 is negative return -1, else return 0
    return (parameter_1 > 0) - (parameter_1 < 0);
}
