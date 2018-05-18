/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion:17/05/2018                                            */
/*Descripcion: Programa que muestra los numeros del 1 al 100.                 */
/*----------------------------------------------------------------------------*/



#include <stdio.h>		

void numdecreciente(int);

int main (void)			
{
		int num=100;							
		printf("Programa que muestra los numeros de 100 al 0.\n"); 
		do  								
		 {
			 printf("%d\n",num);			
			numdecreciente(num);			
		}	
			 while(--num >-1);	
		return	0;							
}

void numdreciente(int num)
{
}
		
