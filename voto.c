/*----------------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                                     */
/*E-mail:bernal-raquel@hotmail.com                                                  */
/*Fecha de creacion: 13/05/2018                                                     */
/*Fecha de modificacion:17/05/2018                                                  */
/*Descripcion: Programa que determina si una persona puede votar en base a su edad. */
/*----------------------------------------------------------------------------------*/


#include <stdio.h>			
	

void voto (int);


int main (void)				
{
		int edad;										
		printf("Programa que determina si una persona puede votar con base a su edad.\n");	
		printf("Inserte su edad.\n");								
		scanf("%d", &edad);									
			voto(edad);
					
		return 0;						
}
void voto (int edad)
{
if (edad >= 18)										
		{
			printf ("Usted puede votar.\n");	
		}
		else	
			printf("No puede votar.\n");
}
