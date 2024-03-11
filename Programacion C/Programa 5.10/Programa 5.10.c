#include <stdio.h>

/* Busqueda secuencial en arreglos ordenados en forma creciente. */

const int MAX=100;

void Lectura(int, int);  /* Prototipo de funciones. */
int Busca(int *, int, int);

void main(void)

{
    int RES, ELE, TAM, VEC[MAX];
    do
    {
        printf("Ingrese el tamano del arreglo: ");
        scanf("%d", &TAM);

    }
    while (TAM > MAX || TAM < 1); /* Se verifica que el tamano del arreglo sea correcto.*/
    Lectura(VEC, TAM);
    printf("\nIngrese el elemento a buscar:");
    scanf("%d", &ELE);
    RES = Busca(VEC, TAM, ELE); /* Se llama ala funcion que busca en el arreglo*/

    if (RES) /* Si RES tiene un valor verdadero diferente de 0, se escribe la posicion en la que se
    encontro al elemento.*/
    printf("\nEl elemento se encuentra en la posicion: %d", RES);
    else
        printf("\nEl elemento no se encuentra en el arreglo");


}
void Lectura(int A[], int T) /* La funcion lectura se utiliza para leer un arreglo unidimesional de t
elementos de tipo entero.*/

{
    int I;
    for (I=0; I<T; I++)
    {
        printf("Ingrese el elemento %d: ", I+1);
        scanf("%d", &A[I]);
    }
}

int Busca(int A[], int T, int E) /* Esta funcion se utiliza para localizar el elemento e en el
arreglo unidimensional A. si se encuetra a */

{
    int RES, I = 0, BAN = 0;
    while ((I < T) && (E >= A[I]) && !BAN) /* Observa que se incorpora una una nueva condicion.*/
    if (A[I] == E)
    BAN++;


    else
        I++;
    if (BAN)
        RES = I + 1;
    else
        RES = BAN;
    return (RES);

}

