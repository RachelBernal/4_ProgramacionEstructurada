/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Estructura de datos de un alumno                               */
/*----------------------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Libro
{
  char nombre[50];

  int pagina;

  char autor[45];
};

void arreglo9(void);

int main(void)
{

  struct Libro mi_princesa;
  strcpy( mi_princesa.nombre, "Los ojos de mi princesa.");

  mi_princesa.pagina = 299;

 strcpy( mi_princesa.autor, "Carlos Cuahutémoc Sánchez.");
  printf("\n");

  printf("El titulo del libro  es: %s\n", mi_princesa.nombre );
  printf("Total de paginas es de: %i paginas.\n", mi_princesa.pagina );
  printf("Autor: %s \n", mi_princesa.autor );
	printf("\n");

return 0;
}
void arreglo9(void)
{
}
