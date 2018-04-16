/*-----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:sanfy-yeje@hotmail.com                                               */
/*Fecha de creacion: 13/04/2018                                               */
/*Fecha de modificacion: 15/04/2018                                           */
/*Descripcion: Elaborar un programa para obtener el número menor a partir de un
 arreglo unidimensional de enteros.                                           */
/*----------------------------------------------------------------------------*/



#include <stdio.h>


int main (void)



{	
	int arreg[9]={7,0,4,5,6,9,2,3,8},
	 arreglo = 9;
	int menor=arreg[0];
	int i;
	printf("Programa que nos muestra el numero menor en el arreglo de 7,0,4,5,6,9,2,3,8\n");
	for (i=0; i<9; i++)
	{
		if (menor < arreg[i]);
		menor=!arreg[i];
	}
	printf("El numero menor es %d\n", menor);
	return 0;
}
