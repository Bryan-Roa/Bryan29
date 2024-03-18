#include <stdio.h>

/* Funcio
nes para el manejo de caracteres de la biblioteca stdio.h */

void main(void)

{
 char p1, p2, p3 = "$"; /* Declaración de las variables tipo caracter p1, p2 y p3. Observa que a p3 se le asigna el símbolo $. */

 printf("\nIngrese un caracter: ");

 p1=getchar();      /* Se utiliza la función getchar para leer un caracter. */
 putchar(p1);
 printf("\n");
 fflush(stdin); /* Luego de leer un caracter siempre es conveniente escribir la función fflush para limpiar el búfer,
 porque generalmente queda con basura y genera un erroren la ejecución del programa. El error se produce porque cuando se ingresa un
 dato se oprime el return y luego cuando volvemos a leer un caracter o unacadena de caracteres se toma a ese return
 como el nuevo dato ingresado. */


 printf ("\nEl caracter p3 es:");
 putchar(p3); /* Se utiliza la función putchar para escribir el caracter almacenado en p3. */

 printf("\n");
 printf("\nIngrese otro caracter: ");
 fflush(stdin);
 scanf("%c", &p2);
 printf("%c", &p2);






}
