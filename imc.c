/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion: 17/05/2018                                           */
/*Descripcion: Programa que calcula el indice de masa corporal de una persona */
/*----------------------------------------------------------------------------*/



#include <stdio.h>
#include <math.h>


void imc(float);

int main (void)

{
	float peso,IMC,altura;
	printf("programa que calcula el IMC de una persona. \n\n");
	printf("Escribir peso:\n");
		scanf("%f",&peso);
	printf("Escribir altura:\n");
		scanf("%f",&altura);
		IMC=peso/((altura,(altura*altura)));
	printf("Tú Indice de Masa Corporal es de: %.2f\n", IMC);
		imc (IMC);
			return 0;
}
void imc(float IMC)
{
float peso,altura;
}

