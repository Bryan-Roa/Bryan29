#include <stdio.h>

/* NOMINA
El programa, al recibir los salarios de 15 profesores, obtiene el
total de la nomina de la universidad.*/

void main(void)
{
    int I;
    float SAL, NOM;
    NOM = 0;
    for (I=1; I<=15; I++)
    {
        printf("Ingrese el salario del profesor%d:\t", I);
        scanf("%d", &SAL);
        NOM = NOM + SAL;

    }
    printf("\nEl total de la nomina es: %.2f", NOM);
}
