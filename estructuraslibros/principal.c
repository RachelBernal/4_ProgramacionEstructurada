/*----------------------------------------------------------------------------*/
/*Autor:Raquel Francisco Bernal                                               */
/*E-mail:bernal-raquel@hotmail.com                                            */
/*Fecha de creacion: 22/05/2018                                               */
/*Fecha de modificacion: 23/04/2018                                           */
/*Descripcion:Implementacion de las funciones de ordenacion. programa para
 ejemplificar archivos .h y .c                                                */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                  
#include "enums.h"                     
#include "prototiposfunciones.h"        
                                      

int numLibro;                          


int main(void)
{
  Libro listaLibro[TOTAL_LIBRO];   
	int opcion;                          

	do{
    menuPrincipal();                  
                                                                    
		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
              while(getchar() != '\n');    
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     L I B R O S\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de libros: " _TVERDE);
							scanf("%d",&numLibro);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numLibro; i++)
							{
                while(getchar() != '\n');            
                listaLibro[i] = crearNuevoLibro();   
		 }
              while(getchar() != '\n');               
			  detenerPantalla();                       
		break;
case LISTAR:
              while(getchar() != '\n');               
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    L I B R O S\n\n");
              mostrarListaLibro(listaLibro, 0);      			detenerPantalla();  
			break;
case LISTAR_ASC:
							while(getchar() != '\n');              
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
              mostrarListaLibro(listaLibro, 1);    			detenerPantalla();
		break;

case LISTAR_DES:
							while(getchar() != '\n');       
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
              mostrarListaLibro(listaLibro, 2);   			detenerPantalla();				break;

case BUSCAR:
							while(getchar() != '\n');           
						  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
              buscarLibro(listaLibro);  
		  detenerPantalla();                		break;

case ACTUALIZAR:
							while(getchar() != '\n');                
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarLibro(listaLibro);                     while(getchar() != '\n');         
							detenerPantalla();          
	break;

case ELIMINAR:
							while(getchar() != '\n');         
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarLibro(listaLibro);
							detenerPantalla();                      
	break;

case SALIR:
							system("clear");                         							exit(0); 
		}
	}while(opcion != SALIR);

	return 0;
}

