#include <stdio.h>
#include <math.h>

/* Volumen y area del cilindro El programa, al recibir como datos el radio
y la altura de un cilindro, calcula su area y su volumen.

RAD, ALT, VOL, Y ARE: variables de tipo real. */
void main(void)
{
    float RAD, ALT, VOL, ARE;
    printf("Ingrese el radio y la altura del cilindro: ");
    scanf("%f %f", &RAD, &ALT);

    /* M_PI ES UNA CONSTANTE DEFINIDA EN MATH.H QUE CONTIENE
    EL VALOR DE PI*/

    VOL = M_PI * POW (RAD, 2) * ALT;
    ARE = 2 * M_PI * RAD * ALT;
    printf("\nEl volumen es: %6.2f \t El area es: %6.2f", VOL, ARE);
}
