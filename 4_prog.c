/*-----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:sanfy-yeje@hotmail.com                                               */
/*Fecha de creacion: 13/04/2018                                               */
/*Fecha de modificacion: 15/04/2018                                           */
/*Descripcion: Elaborar un programa qu ordene un arreglo de numeros enteros de 
forma ascendente.                                                             */
/*----------------------------------------------------------------------------*/




#include <stdio.h>


int main (void)


{


	int array[8]={2,0,3,10,11,14,100,9};
	int i=0, j;
	for (int i =0; i<9; i++)
	{
	for (int j=i+1; j<8; j++)
	{
	if (array [i]>array[j])
	{
		int auxiliar=array[i];
		array[j]=array[i];
		array[i]=auxiliar;
	}
	}
}	
	
	printf("El orden de los numeros es:\n", array[i]);
	
	return 0;
}

	
