#include <stdio.h>
#include <math.h>

/* PAR, IMPAR O NULO.

NUM: variable de tipo entero.*/

void main(void)
{
    int NUM;
    printf("Ingrese el numero:");
    scanf("%d", &NUM);
    if (NUM == 0)
        printf("\nNULO");
    else
        if (pow (-1, NUM) > 0)
        printf("\npar");
    else
        printf("\nImpar");

}