/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que covierte las letras minusculas a mayusculas.      */
/*----------------------------------------------------------------------------*/

#include <stdio.h>

void imprimirMayusculas(void);

#define TAM 20

int main (void)

{

 imprimirMayusculas();

  return 0;
}



void imprimirMayusculas(void)
{
  char c;

  char array[TAM];

  int index=0;
  printf("Programa que convirte letras minusculas a mayusculas.\n");
  printf("Ingrese alguna frase en minuscula \n");

    while((c = getchar()) != '\n')
    {
      if(c>= 97 && c<=122)
      {
        c = c-32;
        array[index] = c;
        index++;
      }
    }

  printf("\n");

  for (int i = 0; i < TAM; i++)
  {
    printf("%c", array[i]);
  }

  printf("\n");
}
