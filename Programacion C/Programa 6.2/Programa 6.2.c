#include <stdio.h>

/* Suma matrices. EL programa, al recibir como datos dos arreglos bidimensional del mismo
tamano, calcula la suma de ambos y la almacena en un tercer arreglo bidimensional.*/

const int MAX = 50;

/* prototipo de funciones. */

void Lectura(int [][MAX], int, int);
void Suma(int [][MAX], int [][MAX], int [][MAX], int, int);
void Imprime(int [][MAX], int, int);

void main(void)

{
    int MA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];
    /* Declaracion de los tres arreglos */
    int FIL, COL;
    do
    {
        printf("Ingrese el numero de filas de los arreglos: ");
        scanf("%d", &FIL);

    }
    while (FIL> MAX || FIL< 1);
    /* Se verifica que el numero filas sea correcto.*/
    do
    {
        printf("Ingrese el numero de columnas de los arreglos:");
        scanf("%d", &COL);

    }
    while (COL > MAX || COL < 1);
    printf("\nLectura del arreglo MA\n");
    Lectura(MA, FIL, COL);
    printf("\nLectura del arreglo MB\n");
    Lectura(MB, FIL, COL);
    Suma (MA, MB, MC, FIL, COL);
    printf("\nImpresion del arreglo MC\n");
    Imprime (MC, FIL, COL);


}

void Lectura(int A[][MAX], int F, int C)
{
    int I,J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
    {
        printf("Ingrese el elemento %d %d: ", I+1, J+1);
        scanf("%d", &A[I][J]);
    }
}
void Imprime(int A[][MAX], int F, int C)
{
    int I,J;
    for (I=0; I<F; I++)
        for (J=0; J<C; J++)
        printf("\nElemento %d %d: %d ", I, J, A[I][J]);
}
