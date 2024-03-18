#include <stdio.h>

/* Funcio
nes para el manejo de caracteres de la biblioteca stdio.h */

void main(void)

{
 char p1, p2, p3 = "$"; /* Declaraci�n de las variables tipo caracter p1, p2 y p3. Observa que a p3 se le asigna el s�mbolo $. */

 printf("\nIngrese un caracter: ");

 p1=getchar();      /* Se utiliza la funci�n getchar para leer un caracter. */
 putchar(p1);
 printf("\n");
 fflush(stdin); /* Luego de leer un caracter siempre es conveniente escribir la funci�n fflush para limpiar el b�fer,
 porque generalmente queda con basura y genera un erroren la ejecuci�n del programa. El error se produce porque cuando se ingresa un
 dato se oprime el return y luego cuando volvemos a leer un caracter o unacadena de caracteres se toma a ese return
 como el nuevo dato ingresado. */


 printf ("\nEl caracter p3 es:");
 putchar(p3); /* Se utiliza la funci�n putchar para escribir el caracter almacenado en p3. */

 printf("\n");
 printf("\nIngrese otro caracter: ");
 fflush(stdin);
 scanf("%c", &p2);
 printf("%c", &p2);






}
