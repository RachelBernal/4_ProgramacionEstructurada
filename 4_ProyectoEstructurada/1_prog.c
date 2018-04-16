/*-----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:sanfy-yeje@hotmail.com                                              */
/*Fecha de creacion: 10/04/2018                                              */
/*Fecha de modificacion: 12/04/2018                                           */
/*Descripcion: Elaborar un programa en lenguaje C para hallar las veces que se 
repite un numero natural dentro de un arreglo.                                */
/*----------------------------------------------------------------------------*/


#include <stdio.h>		/*Declaracion de bibliotecas.*/




int main (void)			/*Declaracion de la funcion principal*/


{
	int numero[10], num=0,a=0,b=0,contador=0;				/*Declaracion de variables*/
	printf("Programa que nos dice cuantas veces se repiten los numeros del 1 al 10.\n");/*Muestra en pantalla la funcion del programa*/
	printf("Inserte los numeros.\n");					/*Solicita los datos.*/							
	for(a=0; a<10;a++)							/*Ciclo para.*/
	{
	printf("numero %i\t", a);						/*Muestra la posicion del numero*/
	scanf("%i", &numero[a]);						/*Lee el dato*/
	}
	
	for(a=0; a<10;a++)							/*Ciclo para*/
	{
		contador=0;
	
		for(b=0; b<10;b++)						/*Ciclo para*/
		{
		
		if (a==numero[b])
		{

		contador++;
		}		
		
	}
	printf ("el numero %i se repite %i veces\n", a,contador);	/*Muestra el resultado en pantalla*/
	}
 	
	
return 0;									/*Termina la copilacion.*/
}

