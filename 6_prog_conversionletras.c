/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 19/04/2018                                               */
/*Fecha de modificacion: 21/04/2018                                           */
/*Descripcion: Programa que nos convierte las letras mayusculas a minusculas y 
viceversa                                                                     */
/*----------------------------------------------------------------------------*/



#include <stdio.h>

const int tamanio=5;/*definir una constante*/

int main(void)

{
  char  c;
	char a;
  char array[tamanio],arreglo[tamanio];

  int index = 0;
	
	printf("Inserte letras mayusculas para convertirlas a minusculas.\n");
  while ((c = getchar()) != '\n')
  {
    if (c >= 65 && c <= 90) /*Validando unicamente caracteres: letras minusculas.*/
    {
       c = c+32;  
      array[index] = c;
      index++;
    }
 
  }
printf ("\n");
  for (int i=0; i < tamanio; i++)

  {
    printf("%c ", array[i]);
  }

  printf("\n");
	index = 0;
	printf("Inserte letras minusculas para convertirlas a mayusculas.\n");
{
 while ((a = getchar()) != '\n')
  {
    if (a >= 97 && a <= 122) /*Validando unicamente caracteres: letras minusculas.*/
    {
       a = a-32;  
      arreglo[index] = a;
      index++;
    }
  }
  printf ("\n");
  for (int i=0; i <= tamanio; i++)

  {
    printf("%c ", arreglo[i]);
  }

  printf("\n");
}
  return 0;

}
