/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que determina el numero menor.                        */
/*----------------------------------------------------------------------------*/

#include<stdio.h>

void imprimirMenor(void);

int main(void)
{
  imprimirMenor();

  return 0;
}





void imprimirMenor(void)
{
  int men, i;
  int arre[10] = {8,6,4,11,10,3,2,9,7,5};
  men = arre[0];
   for(i = 1; i<10; i++)
   {
     if(men > arre[i])
     {
       men = arre[i];
     }
   }

   printf("El numero menor de los datos ingresados es :%d", men);

   printf("\n");
}
