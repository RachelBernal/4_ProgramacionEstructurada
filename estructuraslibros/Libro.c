/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 22/05/2018                                               */
/*Fecha de modificacion: 23/04/2018                                           */
/*Descripcion: implementacion de funciones sobre la estructura                */
/*              alumno: crear, listar, ordenar, buscar,                       */
/*              actualizar y eliminar.                                        */
/*----------------------------------------------------------------------------*/





#include <stdio.h>
#include <string.h>


#include "colores.h"
#include "prototiposfunciones.h"
#include "enums.h"


extern int numLibro;



Libro crearNuevoLibro(void)
{
  Libro libro;

  printf(_TBLANCO _NEGRITA "Introduce el título del libro: "              _NNEGRITA _TVERDE);
  fgets(libro.titulo, TAM_TI, stdin);                                 

  strcpy(libro.titulo, strtok(libro.titulo, "\n"));								   

  printf(_TBLANCO _NEGRITA "Introduce el autor del libro: "              _NNEGRITA _TVERDE);
  fgets(libro.autor, TAM_AUT, stdin);                                 

  strcpy(libro.autor, strtok(libro.autor, "\n"));	
  
  printf(_TBLANCO _NEGRITA "Introduce la fecha de publicacion: " _NNEGRITA _TVERDE);
  fgets(libro.fechaPublicacion, TAM_FECHA, stdin);                        
  strcpy(libro.fechaPublicacion, strtok(libro.fechaPublicacion, "\n"));

  printf(_TBLANCO _NEGRITA "Introduce genero del libro: "                _NNEGRITA _TVERDE);
   fgets(libro.genero, TAM_TI, stdin);                        
  strcpy(libro.genero, strtok(libro.genero, "\n"));
 // scanf("%s", &libro.genero);
	printf("\n\n");
  return libro;
}



void mostrarListaLibro(Libro listaLibro[], int ordenar)
{
  int arrayTemp[numLibro];
  for(int i = 0; i < numLibro; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)           
  {
    memcpy(arrayTemp, ordenarAscendente(listaLibro, arrayTemp), sizeof(arrayTemp));   
  } else if(ordenar == 2){    
    memcpy(arrayTemp, ordenarDescendente(listaLibro, arrayTemp), sizeof(arrayTemp));  
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numLibro; i++)
  {
    mostrarLibro(listaLibro[arrayTemp[i]]);
    printf("\n");
  }
}


void buscarLibro(Libro listaLibro[])
{
  int opcionBuscar;
  char tituloBuscar[TAM_TI]; 
	char autorBuscar[TAM_AUT];         

  
  printf(_TCYAN     _NEGRITA "Buscar libro por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Titulo\n");
  printf(_TBLANCO   _NEGRITA "\t2. Autor \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
    case _xTitulo:
        while(getchar() != '\n');     

        printf(_TCYAN _NEGRITA "\n\nIngrese el titulo del libro: ");
        fgets(tituloBuscar, TAM_TI, stdin);
        strcpy(tituloBuscar, strtok(tituloBuscar, "\n"));

        for(int i = 0; i < numLibro; i++)
            if(strcmp(tituloBuscar, listaLibro[i].titulo) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarLibro(listaLibro[i]);
            }
            break;

case _xAutor:
        while(getchar() != '\n');     

        printf(_TCYAN _NEGRITA "\n\nIngrese el autor del libro: ");
        fgets(autorBuscar, TAM_TI, stdin);
        strcpy(autorBuscar, strtok(autorBuscar, "\n"));

        for(int i = 0; i < numLibro; i++)
            if(strcmp(autorBuscar, listaLibro[i].autor) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarLibro(listaLibro[i]);
            }
            break;
  }
}

void actualizarLibro(Libro listaLibro[])
{
  int opcionBuscar;
  char tituloBuscar[TAM_TI];            
	char autorBuscar[TAM_AUT];         

  printf(_TCYAN     _NEGRITA "Buscar el libro a actualizar por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Titulo\n");
  printf(_TBLANCO   _NEGRITA "\t2. Autor \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {

 case _xTitulo:
          while(getchar() != '\n');     

          printf(_TCYAN _NEGRITA "\n\nIntroduce el titulo: ");
          fgets(tituloBuscar, TAM_TI, stdin);
          strcpy(tituloBuscar, strtok(tituloBuscar, "\n"));

          for(int i = 0; i < numLibro; i++)
          {
              if(strcmp(tituloBuscar, listaLibro[i].titulo) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLibro(listaLibro[i]);

                  printf("\n\n");

                  listaLibro[i] = crearNuevoLibro();

                  mostrarEncabezadoTabla();
                  mostrarLibro(listaLibro[i]);

                  break;
		}
	}
	break;
            

case _xAutor:
          while(getchar() != '\n');     

          printf(_TCYAN _NEGRITA "\n\nIntroduce el nombre del autor: ");
          fgets(autorBuscar, 50, stdin);
          strcpy(autorBuscar, strtok(autorBuscar, "\n"));

          for(int i = 0; i < numLibro; i++)
          {
              if(strcmp(autorBuscar, listaLibro[i].autor) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLibro(listaLibro[i]);

                  printf("\n\n");

                  listaLibro[i] = crearNuevoLibro();

                  mostrarEncabezadoTabla();
                  mostrarLibro(listaLibro[i]);

                  break;
              }
          }

          break;
  }
}

void eliminarLibro(Libro listaLibro[])
{
  int opcionBuscar;
  char tituloBuscar[TAM_TI];                
	char autorBuscar[TAM_AUT];         

  printf(_TCYAN     _NEGRITA "Eliminar libro por:\n\n");
  printf(_TBLANCO   _NEGRITA "1. Titulo\n");
  printf(_TBLANCO   _NEGRITA "2. Autor \n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case _xTitulo:
          while(getchar() != '\n');  

	  printf(_TCYAN _NEGRITA "\n\nIntroduce el titulo: ");
          fgets(tituloBuscar, TAM_TI, stdin);
          strcpy(tituloBuscar, strtok(tituloBuscar, "\n"));

          for(int i = 0; i < numLibro; i++)
          {
              if(strcmp(tituloBuscar, listaLibro[i].titulo) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLibro(listaLibro[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);
   
		 char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaLibro));
                    listaLibro = eliminarUnLibro(listaLibro, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;
		
		case _xAutor:
          while(getchar() != '\n');     

          printf(_TCYAN _NEGRITA "\n\nIntroduce el autor del libro: ");
          fgets(autorBuscar, TAM_TI, stdin);
          strcpy(autorBuscar, strtok(autorBuscar, "\n"));

          for(int i = 0; i < numLibro; i++)
          {
              if(strcmp(autorBuscar, listaLibro[i].autor) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarLibro(listaLibro[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaLibro= eliminarUnLibro(listaLibro, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
  }
}


Libro * eliminarUnLibro(Libro listaLibro[], int posicion)
{
  if(posicion < (numLibro - 1))
  {
    for(int j = posicion; j < numLibro-1; j++)
    {
      strcpy(listaLibro[j].titulo,          listaLibro[j+1].titulo);
      strcpy(listaLibro[j].autor,       listaLibro[j+1].autor);
      strcpy(listaLibro[j].fechaPublicacion, listaLibro[j+1].fechaPublicacion);
      strcpy(listaLibro[j].genero  ,listaLibro[j+1].genero);
    }
  }

  strcpy(listaLibro[numLibro-1].titulo,          "");
  strcpy(listaLibro[numLibro-1].autor,       "");
  strcpy(listaLibro[numLibro-1].fechaPublicacion, "");
 strcpy(listaLibro[numLibro-1].genero,"");
 // listaLibro[numLibro-1].genero     = '\0';
  
  numLibro--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");
   
  return listaLibro;
}
