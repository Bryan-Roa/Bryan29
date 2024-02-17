#include <stdio.h>

/* Prueba de parametros por referencia.*/

void f1(int *);

/* Prototipo de funcion. El parametro es de tipo entero y por referencia
observa es uso del operador de indireccion.*/

void main(void)
{
    int I, K = 4;
    for (I =1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        printf("\nValor de K antes de llamar a la funcion: %d", (&K));
        /* Llamada a la funcion f1. se pasa la direccion de la variable K,
        POR medio del operador de direccion:&*/
    }
}
void f1(int *R)
{
    *R += *R;
}
