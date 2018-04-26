/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 24/04/2018                                               */
/*Fecha de modificacion: 26/04/2018                                           */
/*Descripcion: Conversion de decimal a binario.                               */
/*----------------------------------------------------------------------------*/




#include <stdio.h>		
#include <math.h>


int main (void)			
{
	int num,b,i,Vec[20],j,a,n;
								
	printf("Programa para convertir un numero decimal a binario y viceversa.\n");
	printf("Inserte el numero a convertir.\n");		
	scanf("%d", &num);											
	for(i=0;num>0;i++)
	{
		b=num%2;						
		num=num/2;						
		Vec[i]=b;
	}
	for(i=i-1;i>=0;i--)
	{
	printf("%d",Vec[i]);
	}
	printf("\n");
	
	int v[a];
	printf("Ingrese la cantidad de digitos");
	scanf("%d", &a);
	printf("Ingrese el numero binario a convertir de forma inferior a superior.\n");
	int sum=0;
		for (j=0; j<a; j++)
		{
		scanf("%d", &v[j]);	
	
			n= v[j]*pow(2,j);
			sum=sum+n;
			
		}	
		printf("%d\n", sum);
		
	return 0;								
}
