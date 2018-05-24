/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 22/05/2018                                               */
/*Fecha de modificacion: 23/04/2018                                           */
/*Descripcion:Implementacion de las funciones de ordenacion.                   */
/*----------------------------------------------------------------------------*/
#include <string.h>
#include "prototiposfunciones.h"

extern int numLibro;

int * ordenarAscendente(Libro listaLibro[], int arrayTemp[])
{
  for(int i = 0; i < numLibro; i++)
  {
    for(int j = i + 1; j < numLibro; j++)
    {
      if(strcmp(listaLibro[arrayTemp[i]].titulo, listaLibro[arrayTemp[j]].titulo) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}


int * ordenarDescendente(Libro listaLibro[], int arrayTemp[])
{
  for(int i = 0; i < numLibro; i++)
  {
    for(int j = i + 1; j < numLibro; j++)
    {
      if(strcmp(listaLibro[arrayTemp[i]].titulo, listaLibro[arrayTemp[j]].titulo) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
