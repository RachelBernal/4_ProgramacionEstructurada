/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que muestra un menu                                   */
/*----------------------------------------------------------------------------*/


#include<stdio.h>

void arreglo7(int);

int main(void)
{
  int opcion;
  enum{Ingresar=1,
      Mostrar,
      Actualizar,
      Eliminar,
      Salir};
      printf("Menu Principal\n");

      printf("1:Ingresar\n");
      printf("2:Mostrar\n");
      printf("3:Actualizar\n");
      printf("4:Eliminar\n");
      printf("5:Salir\n");

      printf("Seleccione una opcion que desee realizar\n");
      scanf("%d",&opcion);
switch (opcion)
  {
      case 1:
      printf("Usted se encuentra en la opción Ingresar\n");
      break;

      case 2:
      printf("Usted se encuentra en la opción Mostrar\n");
      break;

      case 3:
      printf("Usted se encuentra en la opción Actualizar\n");
      break;

      case 4:
      printf("Usted se encuentra en la opción Eliminar\n");
      break;

      case 5:
      printf("Usted se encuentra en la opción salir\n");
      break;
	arreglo7 (opcion);

  }
 return 0;
}
void arreglo7(int opcion)
{
}
