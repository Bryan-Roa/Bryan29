#include <stdio.h>

/* productorias.

EL programa calcula la productoria de los n primeros numeros
naturales.*/

int productoria(int);  /* prototipo de funcion. */

void main(void)
{
    int NUM;
    /* Se escribe un do while para verificar que el numero del cual se quiere calcular la productoria sea corre
    cto.*/

    do
    {
        printf("Ingrese el numero del cual quieres calcular la productoria: ");
        scanf("%d", &NUM);

    }
    while (NUM >100 || NUM < 1);
    printf("\nLa productoria de %d es: %d", NUM, productoria(NUM));
}
int productoria(int N)

/* La funcion calcula productoria de N.*/
{
    int I, PRO = 1;
    for (I = 1; I <= N; I++)
        PRO *= I;
    return (PRO);
}



