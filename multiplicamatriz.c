/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 22/05/2018                                               */
/*Fecha de modificacion: 23/04/2018                                           */
/*Descripcion:multiplicacion de matriz               */
/*----------------------------------------------------------------------------*/



#include <stdio.h>
#include <stdbool.h> /* Valores boleanos */

#define ROW 10
#define COL 10

bool validarMultiplicaMatriz( int colA, int filaB);
bool validarSumaMatriz( int colA, int filaB);
void leerDatosMatriz(int matrizA[ROW][COL], int fila, int col);
void imprimirMatriz(int matriz[ROW][COL], int fila, int col);
void multiplicaMatriz(int matrizA[ROW][COL], int matrizB [ROW][COL], int matrizResultado[ROW][COL], int filaA, int colB);

int main (void)
{
  int filaA, colA;
  int filaB, colB;

  int matrizA[ROW][COL];
  int matrizB[ROW][COL];
  int matrizResultado[ROW][COL];

  printf("\ntroduce la fila de la matriz A:\n");
  scanf ("%d", &filaA);

  printf("\ntroduce la columna de la matriz A:\n");
  scanf ("%d", &colA);

  printf("\ntroduce la fila de la matriz B:\n");
  scanf ("%d", &filaB);

  printf("\ntroduce la columna de la matriz B:\n");
  scanf ("%d", &colB);

  if(validarMultiplicaMatriz(filaA,filaB == true))
  {
    leerDatosMatriz(matrizA, filaA, colA);
    leerDatosMatriz(matrizB, filaB, colB);

    imprimirMatriz(matrizA, filaA, colA);
    imprimirMatriz(matrizB, filaB, colB);

    multiplicaMatriz(matrizA,matrizB,matrizResultado, filaA, colA);

    printf("\nEl resultado de la suma es:\n");
    imprimirMatriz(matrizResultado, filaA,colB);
  }
 	 else
  {
    printf("No se puede realizar la suma de matrices.\n");
  }
 		 return 0;
  }

void multiplicaMatriz(int matrizA[ROW][COL], int matrizB [ROW][COL], int matrizResultado[ROW][COL], int colA, int filaB)
{
  for(int i = 0; i < filaB; i++)
  {
    int suma = 0;
    for (int k = 0; k< filaB; k++)
    {
      suma = suma + matrizA[i][k] *  matrizB[k][i];
    }
    {
      matrizResultado[i][i] = matrizA[i][i] + matrizB[i][i];
    }
}
}
  void leerDatosMatriz(int matrizA[ROW][COL], int fila, int col)
  /*void imprimirMatriz(int matriz[ROW][COL], int fila, int col);*/
  {
  printf("\n\n");
    for(int i = 0; i < fila; i++)
    {
      for (int j = 0; j< col; i++)
      {
        printf ("Introduce el elemento [%d][%d]", i,j);
        scanf("%d", &matrizA[i][j]);
      }
    }
  }

  void imprimirMatriz(int matriz[ROW][COL], int fila, int col)
  {
      printf("\n\n");
    for(int i = 0; i < fila; i++)
    {
      printf("|");
      for (int j = 0; j< col; i++)
      {
        printf ("%d", matriz[i][j]);
      }
        printf("|\n");
    }
  }


  bool validarmultiplicacionMatriz(int colA,int filaB)
  {
    if ((colA == filaB))
  {
  return true;
  }
  return false;
}
