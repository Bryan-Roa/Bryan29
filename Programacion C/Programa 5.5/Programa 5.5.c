#include <stdio.h>

/* Frecuecia de calificaciones. El programa, al recibir como datos las calificaciones de
un grupo de 50 alumnos, obtiene la frecuencia de cada una de las calificaciones y ademas
escribe cual es la fracuencia mas alta.*/

const int TAM = 50;

void Lectura(int *, int);
void Frecuencia(int , int, int, int); /* Prototipo de funcion.*/
void Impresion(int *, int);
void Mayor(int *, int);

void main(void)

{
    int CAL[TAM], FRE[6] = {0};   /* Declaracion de los arreglos.*/
    Lectura(CAL, TAM);            /* Se llama a la funcion lectura.*/
    Frecuencia(CAL, TAM, FRE, 6); /* Se llama a la frecuencia, se pasan ambos arreglos.*/
    printf("\nFrecuencia de calificaciones\n");
    Impresion(FRE, 6);
    Mayor(FRE, 6);

}
void Lectura(int VEC[], int T) /* La funcion lectura se utiliza para leer el arreglo de calificaciones.*/

{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese la calificacion -0:5- del alumno %d: ", I+1);
        scanf("%d", &VEC[I]);

    }
}

void Impresion(int VEC[], int T)
/* La funcion impresion se utiliza para imprimir el arreglo de frecuencias*/
{
    int I;
    for (I=0; I<T; I++)
    printf("\nVEC[%d]: %d", I, VEC[I]);
}
void Frecuencia(int A[], int P, int B[], int T) /*esta funcion calcula la frecuencia de calificaciones*/
{
    int I;
    for (I=0; I<P; I++)
        if ((A[I] >= 0) && (A[I] < 6)) /* Se valida que la calificacion sea correta*/
    B[A[I]]++;
}
void Mayor(int *X, int T)
{
    int I, MFRE = 0, MVAL = X[0];
    for (I=1; I<T; I++)
        if (MVAL < X[I])
    {
        MFRE = I;
        MVAL = X[I];

    }
    printf("\n\nMayor frecuencia de calificaciones: %d \tValor: %d", MFRE, MVAL);

}
