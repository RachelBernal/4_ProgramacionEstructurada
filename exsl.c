/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion:17/05/2018                                            */
/*Descripcion: Programa que muestra  una figura con *                    */
/*----------------------------------------------------------------------------*/


#include <stdio.h>
#define TAMGIF 9

void  dibujarFiguraContornoX(int tamanio);
int main (void)
{
  dibujarFiguraContornoX(TAMGIF);
  return 0;
}

void dibujarFiguraContornoX(int tamanio)
{
  for (int i=0; i<tamanio; i++)
  {
    for(int j=0; j<tamanio;j++)
    {
      if((i==0|| i ==j))
      {
      printf("*");
      }else if(j ==((tamanio-1)-i)||i==(tamanio-1)){
      printf("*");
      }else{
	printf(" ");
    }
}
    printf("\n");
   }
}
