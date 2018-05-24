/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 22/05/2018                                               */
/*Fecha de modificacion: 23/04/2018                                           */
/*Descripcion:implementacion de funciones que muestran datos en  pantalla     */
/*----------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototiposfunciones.h"

void menuPrincipal(void)
{
  system("clear");
  puts("");

  printf(_FVERDE _TCYAN  _NEGRITA _SUBRAYADO "\nS I S T E M A     D E    C O N T R O L    D E   L I B R O S" _ARESET);

  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de libros");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de libros");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de libros Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de libros Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar libro");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar libro");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar libro");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-40.25s|%-18s|%-10s|\tGENERO\t|", "TITULO", "AUTOR", "FECHA PUBLICACION");
  printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
}

void mostrarLibro(Libro libro)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40.25s|%-12s|%-18s|\t%s\t|",libro.titulo, libro.autor, libro.fechaPublicacion, libro.genero);
}

void detenerPantalla(void)
{
  char c;
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')
  {}
}
