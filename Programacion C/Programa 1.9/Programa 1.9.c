#include <stdio.h>

/* Estancia
El programa, al recibir como dato la surficie de una estancia
expresada en acres, la convierte a hectareas.

ECA: variables de tipo real.*/

void main(void)
{
    float ECA;
    printf("Ingrese la extencion de la estancia: ");
    scanf("%f", &ECA);
    ECA = ECA * 4047 / 1000;
    printf("\nExtension de la estancia en hectareas: %5.2f", ECA);

}
