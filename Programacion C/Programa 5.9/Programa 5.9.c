#include <stdio.h>

/* Busqueda secuencial en arreglos desordenados.*/

const int MAX=100;

void main(void)
{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamano del arreglo:");
        scanf("%d", &TAM);

    }
    while (TAM>MAX || TAM<1); /* Se verifica que el tamano del arreglo sea correto.*/
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar: ");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE); /* Se llama a la funcion que busca en el arreglo*/


    if (RES) /* si res tiene un valor verdadero-diferente de 0-, se escribe la posicion en la
        que se encontro el elementos.*/

        printf("\nEl elemento se encuentra en la posicion %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");
}

void Lectura(int A[], int T) /* La funcion lectura para leer un arreglo unidimesional de T
elementos de tipo entero*/

{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);


    }
}

int Busca(int A[], int T, int K) /* Esta funcion localiza en arreglo un elemento determinado si el elemento es
encontrado, regresa la posicion correspondiente. en caso contrario, regresa */

{
    int I = 0, BAN = 0, RES;
    while (I < T && !BAN)
        if (A[I] == K)
        BAN++;
    else
        I++;
    if (BAN)
        RES = I + 1; /* Se asigna I+1 dado que las posiciones en el arreglo comienza desde cero*/
        else
            RES = BAN;
        return (RES);

}
