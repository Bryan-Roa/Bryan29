#include <stdio.h>

/* Numeros perfectos.
El programa, al recibir como datos un numero entero positivo como
limite, obtiene los numeros perfectos que hay entre 1 y ese numero,
y ese numero, y ademas imprime cuantos numeros perfectos hay en el
intervalo. */

void main(void)
{
    int I, J, NUM, SUM, C = 0;
    printf("\nIngrese el numero limite:");
    scanf("%d", &NUM);
    for (I =1; I <= NUM; I++)
    {
        SUM = 0;
        for (J = 1; J <= (I / 2); J++)
            if ((I % J) ==0)
            SUM += J;
        if (SUM == I)
        {
            printf("\n%d es un numero perfecto", I);
            C++;

        }

    }
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
}
