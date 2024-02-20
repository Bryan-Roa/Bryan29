#include <stdio.h>

/* Lluvias.
El programa permite calcular el promedio mensual de las lluvias caidas en tres regiones importantes del
pais Determina tambien cual es la region con mayor promedio de lluvia anual.*/

void Mayor(float, float, float); /* prototipo de funcion*/
void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
    for (I =1; I <= 12; I++)
     {
         printf("\n\nIngrse las lluvias del mes %d", I);
         printf("\nRegiones golfo, pacifico y caribe: ");
         scanf("%f %f %f", &GOL, &PAC, &CAR);
         AGOL += GOL;
         APAC += PAC;
         ACAR += CAR;
     }
   printf("\n\nPromedio de la lluvias Region Golfo: %6.2f", (AGOL / 12));
   printf("\n\nPromedio de la lluvias Region pacifico: %6.2f", (APAC / 12));
   printf("\n\nPromedio de la lluvias Region Caribe: %6.2f\n", (ACAR / 12));
   Mayor(AGOL, APAC, ACAR);

}
void Mayor(float R1, float R2, float R3)
{
    if (R1 > R2)
    if (R1 > R3)
        printf("\nRegion con mayor promedio: Region Golfo. Promedio: %6.2f", R1 / 12);
    else
        printf("\nRegion con mayor promedio: Region Caribe. promedio: %6.2f", R3 / 12);
    else
        if (R2 > R3)
        printf("\nRegion con mayor promedio: Region pacifico. Promedio %6.2f", R2 / 12);
    else
        printf("\nRegion con mayor promedio: Region caribe. promedio %6.2f", R3 / 12);4

}
