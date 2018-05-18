/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 13/05/2018                                               */
/*Fecha de modificacion:17/05/2018                                            */
/*Descripcion: Programa que muestra el numero mayor o si son iguales.         */
/*----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

void numeros(int);

int main(void)
{
            int num1,num2,num3;

            printf("ingrese el primer numero:\t");
    scanf("%d",&num1);

            printf("intgrese el segundo numero:\t");
    scanf("%d",&num2);

            printf("Ingrese el tercer numero:\t");
    scanf("%d",&num3);

    if (num1>num2 && num1>num3)
    {
       if (num2>num3)
       {
        printf("%d\n",num1);
        printf("%d\n",num2);
        printf("%d\n",num3);
       }
       else if (num3>num2)
       {
        printf("%d\n",num1);
        printf("%d\n",num3);
        printf("%d\n",num2);
       }
       else
       {
        printf("%d\n",num1);
        printf("%d",num3);
        printf("%d\n",num2);
       }
    }
    else if (num2>num1 && num2>num3)
    {
       if (num1>num3)
       {
        printf("%d\n",num2);
        printf("%d\n",num1);
        printf("%d\n",num3);
       }
       else if (num3>num1)
       {
        printf("%d\n",num2);
        printf("%d\n",num3);
        printf("%d\n",num1);
       }
       else
       {
        printf("%d\n",num2);
        printf("%d",num3);
        printf("%d\n",num1);
       }
    }
    else if (num3>num1 && num3>num2)
    {
       if (num1>num2)
       {
        printf("%d\n",num3);
        printf("%d\n",num1);
        printf("%d\n",num2);
       }
       else if (num2>num1)
       {
        printf("%d\n",num3);
        printf("%d\n",num2);
        printf("%d\n",num1);
       }
       else
       {
        printf("%d\n",num3);
        printf("%d",num2);
        printf("%d\n",num1);
       }
     }
    else
    {
        printf("%d\n",num1);
        printf("%d",num2);
        printf("%d\n",num3);
    }
    return 0;
}
void numeros (int num)
{
	int num1;
}
