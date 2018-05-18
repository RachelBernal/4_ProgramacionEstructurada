/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion:17/05/2018                                            */
/*Descripcion: Programa que nos muestra si el numero ingresado por el usuario
 es positivo o negativo ademas muestra si es par o impar                      */
/*----------------------------------------------------------------------------*/




#include <stdio.h>	

void numpn(int);


int main (void)		
{ 
	int num;									
		printf ("Programa que determina si un numero es positivo o negativo.\n");	
		printf ("Ingrese un numero.\n");						
		scanf("%d", &num);								
			numpn (num);
				
		return 0;									
}

void numpn (int num)
	{
		
	
		if (num > 0)									
			printf("El numero es positivo.\n");					
		else 
			printf("El numero es negativo.\n");
			{
				if (num %2 ==0)								
				{ 	
					printf ("%d es par\n", num);						
				}
				else
				{
					printf ("%d es impar\n", num);						
				}		
			}			
}
		

