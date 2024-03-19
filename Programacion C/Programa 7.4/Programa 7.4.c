#include <stdio.h>


/* Declaración de cadenas de caracteres y asignación de valores. */

void main(void)

{
    char *cad0;
    cad0 = "Argentina";                     /* La declaración y la asignación son correctas. */
    puts(cad0);


    cad0 = "Brasil"; /* Correcto. Se modifica el contenido de la posición en memoria a la que apunta
la variable cad0 apuntador de tipo cadena de caracteres. */
     puts(cad0);

     char *cad1;
  gets(*cad1);
  gets(cad1);
/* Incorrecto. Ambas lecturas generan un error en la ejecución del programa.
Para que un apuntador de tipo cadena de caracteres se pueda utilizar con la
función de lectura gets, es necesario inicializarlo como se hace en la siguiente
instrucción. */

  gets(cad1);

/* Correcto. Primero se le asigna un valor a la posición de memoria a la que
apunta cad1. Luego podemos modificar el contenido de esta posición de memoria
utilizando la función gets. */



/* Incorrecto. Se genera un error en la compilación del programa, porque no
se reserva el espacio correspondiente. */

   char cad2[20] = "México"; /* Correcto. */
    puts(cad2);
    gets(cad2);

    puts(cad2);
    cad2[10] = "Guatemala";

}
