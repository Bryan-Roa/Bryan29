  #include <stdio.h>
  #include <string.h>

  /* Hospital. El programa genera informaci�n acerca de los pacientes de un hospital. */

  typedef struct               /* Declaraci�n de la estructura domicilio. */

  {
      char cal[20]; /* Calle. */
      int num; /* N�mero. */
      char col[20]; /* Colonia. */
      char cp[5]; /* C�digo Postal. */
      char ciu[20]; /* Ciudad. */
}   domicilio;




  typedef struct                   /* Declaraci�n de la estructura paciente. */

  {
      char nom[20];            /* Nombre y apellido. */
      int edad;
      char sexo;
       int con;               /* Condici�n. */
domicilio dom;

  char tel[10]; /* Tel�fono. */
 } paciente;

 void Lectura(paciente *, int);
 void F1(paciente *, int);
 void F2(paciente *, int); /* Prototipos de funciones. */
 void F3(paciente *, int);

 void main(void)
 {
     paciente HOSPITAL[100];                      /* Arreglo unidimensional de tipo estructura paciente. */
    int TAM;
     do
     {
         printf("Ingrese el n�mero de pacientes: ");
        scanf("%d", &TAM);
     }

     while (TAM > 50 | | TAM < 1); /* Se verifica que el tama�o del arreglo sea correcto. */
   Lectura(HOSPITAL, TAM);
   F1(HOSPITAL, TAM);
   F2(HOSPITAL, TAM);
   F3(HOSPITAL, TAM);


 }

       void Lectura(paciente A[], int T)
/* Esta funci�n se utiliza para leer un arreglo unidimensional de tipo estructura paciente de T elementos. */

  {
      int I;
     for (I=0; I<T; I++)





  }

  {

      printf("\n\t\tPaciente %d", I+1);
      fflush(stdin);
      printf("\nNombre: ");
      gets(A[I].nom);
      printf("Edad: ");
      scanf("%d", &A[I].edad);
      printf("Sexo (F-M): ");
      scanf("%c", &A[I].sexo);
      printf("Condici�n (1..5): ");
      scanf("%d", &A[I].con);
      fflush(stdin);
      printf("\tCalle: ");
       gets(A[I].dom.cal);
      printf("\tN�mero: ");
      scanf("%d", &A[I].dom.num);
      fflush(stdin);
      printf("\tColonia: ");
      gets(A[I].dom.col);
    fflush(stdin);
    printf("\tC�digo Postal: ");
    gets(A[I].dom.cp);
    fflush(stdin);
    printf("\tCiudad: ");
    gets(A[I].dom.ciu);
     fflush(stdin);
      printf("Tel�fono: ");
      gets(A[I].tel);

  }
