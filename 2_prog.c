#include <stdio.h>


#define PI 3.1416
#define G 9.81
#define TAMANIO 10
#define MIN 0
#define MAX 100


#define SUMA(X, Y) X+Y
#define RESTA(X,Y)X-Y
#define MULT(X, Y)X*Y
#define DIV(X, Y)X/Y
#define POTCUADRO(X) X*X
#define POTCUBO(X) X*X*X


#define CICLOFOR(X, Y) for(X=0; X < Y; X++) 
#define CICLOWHILE (x, y); while (x++< y)



const float pi = 3.1416;
const float g = 9.81;
const int tamanio = 10;
const int min = 0;
const int max = 100;

int main (void)

{
	 printf("El valor de PI:\n %f \n", PI);
	 printf("El valor de G :\n %f \n", G);
	 printf("El valor de TAMANIO:\n %d \n", TAMANIO);
	 printf("El valor de MIN:\n %d \n", MIN);
	 printf("El valor de MAX:\n %d \n", MAX);

	
	printf ("La suma es igual a:\n %d \n", 	SUMA (3,4));
	printf ("La resta es igual a:\n %d \n",	RESTA (3,4));
	printf ("La multiplicacion es igual a:\n %d \n", MULT (3,4));
	printf ("La division es igual a:\n %d \n", 	DIV (3,4));
	printf ("La potencia al cuadrado es igual a:\n %d \n", 	POTCUADRO (3));
	printf ("La potencia al cubo es igual a:\n %d \n", POTCUBO (3));

	printf("El valor de pi:\n %f \n", pi);
	printf("El valor de g:\n %f \n", g);
	printf("El valor de tamanio:\n %d \n", tamanio);
	printf("El valor de min:\n %d \n", min);
	printf("El valor de max:\n %d \n", max);
	

	int X;
 	int Y = 10;

 	CICLOFOR(X, Y)
 {
   printf("\n Hola mundo...\n" );
 }
	
	int x;
	int y = 10;
	CICLOWHILE (x, y);
{
  printf("\n Hola mundo...\n" );
}
						
		
  return 0;
}

