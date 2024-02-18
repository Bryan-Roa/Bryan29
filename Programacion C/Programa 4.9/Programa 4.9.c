#include <stdio.h>

/* paso de una funcion como parametro por referecia.*/

int Suma(int X, int Y)
/* La funcion suma regresa la suma de los parametros de tipos entero x y y.*/

{
    return (X+Y);
}

int Resta(int X, int Y)
/* Esta funcion regresa la resta de los parametros de tipo entero x y y.*/

{
    return (X-Y);
}
int Control(int (*apf) (int, int), int X, int Y)
/* Esta funcion recibe como parametro otra funcion - la direccion-y
dependiendo de cual sea esta, llama a la funcion suma o resta.*/

{
    int RES;
    RES = (*apf) (X,Y); /* Se llama ala funcion suma o resta.*/
    return (RES);

}
void main(void)
{
    int R1, R2;
    R1 = Control(Suma, 15, 5); /* Se pasa como parametro la funcion Suma.*/
    R2 = Control(Resta, 10, 4);
    printf("\nResultado 1: %d", R1);
    printf("\nResultado 2: %d", R2);
}
