/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion:17/05/2018                                            */
/*Descripcion: Programa que muestra la tabla de multiplicar del 1 al 5.       */
/*----------------------------------------------------------------------------*/
#include <stdio.h>			


void tabla5(int);


int main (void)				
{
		int i;								
		printf("Programa que muestra la tabla de multiplicar del 1 al 5.\n");	
			tabla5 (i);
			
			
		return 0;							
}
void tabla5(int i)
{
 		
												 
	for(i = 1; i <= 5; i++)				
		{
			for(int j = 1;j <= 10;j++)					
		        {
				printf("\n%d x %d = %d\t", i, j,i*j);	
			}
			printf("\n\n");
		}
}


