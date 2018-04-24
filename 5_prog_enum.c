/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 21/04/2018                                               */
/*Fecha de modificacion: 24/04/2018                                           */
/*Descripcion: ENUM                                                           */
/*----------------------------------------------------------------------------*/



#include <stdio.h>


/*Declaracion de enum*/
/*tipo de indentificar {lista_de_identificadores,}*/
/*tarea para el dia lunes: imprimir var1,var2,var3*/

enum DIAS{L,M,MI,J,V,S,D};
enum MESES{EN=1,FE,MA,A,MAY,JUN,JUL,AG,SE,OC,NO,DI};
enum FRUTAS{manzana,mango,durazno,pera,uva,pina};


enum PRECIOAUTO{NUEVO = 10,SEMINUEVO = -5,USADO, INSERVIBLE};

/*Enumeracion anonimo*/
enum {PROG, MATEDIS, MATEII, TGS, ELECI} var1, var2,var3;

int main (void)
{
  printf ("%d\n", USADO);
  printf ("%d\n", var1);
  printf ("%d\n", var2);
  printf ("%d\n", var3);
  
  for(enum MESES index = EN; index <= DI; index ++)
  {
    printf("%d ", index);


    switch (index)
    {
      case EN:
      printf("\nEnero\n");
      break;
      case OC:
      printf("\nOctubre\n");
      break;

    }
  }
  printf("\n");
  
  return 0;
}
