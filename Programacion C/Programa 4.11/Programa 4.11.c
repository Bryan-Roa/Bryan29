#include <stdio.h>

/* Mayor divisor. El programa, al recibir como datos un numeros entero positivo, calcula
su mayor divisor*/

int mad(int);  /* prototipo de funcion.*/

void main(void)
{
    int NUM, RES;
    printf("\nIngrse el numero:");
    scanf("%d", &NUM);
    RES = mad(NUM);
    printf("El mayor dividor de es: %d", NUM, RES);

}
int mad(int N1) /* Esta funcion calcula el mayor divisor del numero N1.*/
{
    int I = (N1 / 2); /* Se inicializa con el maximo valor posible que puede
    ser dividor de N1. */
    while (N1 % I)
        /* El ciclo se mantiene activo mientras (N1 % I) sea distinto de cero.
        Cuando el resultado sea 0, se detiene, ya que se habra encontrado el mayor
        divisor de N1. */
        I--;
    return I;

}
