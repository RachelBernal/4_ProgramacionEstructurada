/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que muestra la suma de los datos ingresados.          */
/*----------------------------------------------------------------------------*/

#include<stdio.h>

void sumaDiagonal(void);

int main(void)
{
  sumaDiagonal();

  return 0;
}



void sumaDiagonal(void)
{
  int arre[5][5];

  int i, j, suma = 0;

  printf("Ingrese 25 datos numericos enteros:\n\n");

  for(i = 0; i<5; i++)
  {
    for(j = 0; j<5; j++)
    {
      printf("Ingrese el valor de la posicion (%d,%d): ", i+1, j+1);
      scanf("%d",&arre[i][j]);

      if(i==j)
      {
        suma+=arre[i][j];
      }
    }


  }

  printf("La suma de los datos donde la (fila,columna) son iguales es de:%d\n", suma);

  printf("\n");
}
