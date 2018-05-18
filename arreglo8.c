/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Estructura de datos de un alumno                               */
/*----------------------------------------------------------------------------*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Alumno
{
  char nombre[50];

  int edad;

  float peso;

};

void arreglo8(void);

int main(void)
{

  struct Alumno raquel;
  strcpy( raquel.nombre, "Raquel Francisco Bernal");

  raquel.edad = 19;

  raquel.peso = 45;
  printf("\n");

  printf("El nombre del alumno es: %s \n", raquel.nombre );
  printf("Su edad es de: %i años \n", raquel.edad );
  printf("Su peso es de: %.2f kilogramos \n", raquel.peso );
	
return 0;

}
void arreglo8(void)
{
}
