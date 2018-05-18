/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que nos muestra el numero mayor.                      */
/*----------------------------------------------------------------------------*/

#include<stdio.h>

void imprimirMayor(void);

int main(void)
{
  imprimirMayor();

  return 0;
}



void imprimirMayor(void)
{
  int may=0, i;

  int arre[10] = {8,6,4,35,10,3,1,9,7,5};

   for(i = 0; i<10; i++)
   {
     if(arre[i] > may)
     {
       may = arre[i];
     }
   }

   printf("El numero mayor ingresados dentro del arreglo es :%d", may);

   printf("\n");
}
