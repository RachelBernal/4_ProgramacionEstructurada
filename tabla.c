/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 15/04/2018                                               */
/*Fecha de modificacion: 18/04/2018                                           */
/*Descripcion: Programa que muestra la tabla de multiplicar del 1             */
/*----------------------------------------------------------------------------*/

#include <stdio.h>			


 void tabla(int);


int main (void)				
{
		int i, num=1;								
		printf("Programa que muestra la tabla de multiplicar de 1.\n");	
			tabla (i);
		
		return 0;							
}
 void tabla(int i)
 		{
 		int num=1;								 
	for(i = 0; i <= num; i++)				
		{
			for(i = 0;i <= 10;i++)					
			{
				printf("%d x %d = %d\n", num, i,(num*i));	
			}
			printf("\n\n");
		}
 }

