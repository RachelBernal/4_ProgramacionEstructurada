/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 23/04/2018                                               */
/*Fecha de modificacion: 24/04/2018                                           */
/*Descripcion: Matriz:Cuadrada,columna,rectangular                            */
/*----------------------------------------------------------------------------*/





#include <stdio.h>


int main (void)


{
const int fil=4, col=6,colum=1;
int num [fil] [col], i,j, num1 [fil][fil], n [fil] [colum];



printf("\t\t MATRIZ RECTANGULAR\t\t\n");
 for (i=0;i<fil; i++)
 {
 	for (j=0; j<col; j++)
 	{
 	printf("Dame un numero en la posicion (%d,%d)", i,j);
 	scanf("%d", &num[i][j]);
 	}
 }
  for (i=0;i<fil; i++)
 { 
 	printf("\n");
 	for (j=0; j<col; j++)
 	{
 	printf("%d\t", num[i][j]);
 	}
 	printf(" \n\n\n");
 }
 
 
 printf("\t\tMATRIZ CUADRADA\t\t\n");
  for (i=0;i<fil; i++)
 {
 	for (j=0; j<fil; j++)
 	{
 	printf("Dame un numero en la posicion (%d,%d)", i,j);
 	scanf("%d", &num1[i][j]);
 	}
 }
  for (i=0;i<fil; i++)
 { 
 	printf("\n");
 	for (j=0; j<fil; j++)
 	{
 	printf("%d\t", num1[i][j]);
 	}
 	printf("\n\n");
 }
 
 
 printf("\t\tMATRIZ COLUMNA\t\t\n");
  for (i=0;i<fil; i++)
 {
 	for (j=0; j<fil; j++)
 	{
 	printf("Dame un numero en la posicion (%d)", i);
 	scanf("%d", &num1[i][i]);
 	}
 }
  for (i=0;i<fil; i++)
 { 
 	printf("\n");
 	for (j=0; j<fil; j++)
 	{
 	printf("%d\n", num1[i][j]);
 	}
 	printf("\n\n");
 }
 



 
 printf("\t\t MATRIZ COLUMNA\t\t\n");
 for (i=0;i<fil; i++)
 {
 	for (j=0; j< colum; j++)
 	{
 	printf("Dame un numero en la posicion (%d,%d)", i,j);
 	scanf("%d", &n[i][j]);
 	}
 }
  for (i=0;i<fil; i++)
 { 
 	printf("\n");
 	for (j=0; j<colum; j++)
 	{
 	printf("%d\n", n[i][j]);
 	}
 }
 return 0;
 }

