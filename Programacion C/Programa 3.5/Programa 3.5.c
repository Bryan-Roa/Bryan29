#include <stdio.h>

/* Suma pagos el progrma obtiene la suma de los pagos
realizados el ultimo mes.*/

void main(void)
{
    float PAG, SPA = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);

    /* Observa que al utilizar la esctrura do - while al menos se
    necesita un pago.*/
    do
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago -0 para terminar-:\t");
        scanf("%f", &PAG);
    }
    while (PAG);
    printf("\nEL total de pagos del mes es: %.2f", SPA);
}
