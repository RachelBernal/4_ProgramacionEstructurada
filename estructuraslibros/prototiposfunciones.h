
#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_TI       50       
#define TAM_FECHA      12       
#define TOTAL_LIBRO  10    
#define TAM_AUT      50   


typedef struct
{
	char titulo[TAM_TI];
	char fechaPublicacion[TAM_FECHA];
	char genero[TAM_TI];
	char autor[TAM_AUT];
}Libro;



void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarLibro(Libro);
void detenerPantalla(void);



Libro crearNuevoLibro(void);
void mostrarListaLibro(Libro [], int);
void buscarLibro(Libro []);
void actualizarLibro(Libro []);
void eliminarLibro(Libro []);



Libro * eliminarUnLibro(Libro [], int);



int * ordenarAscendente(Libro [], int []);
int * ordenarDescendente(Libro [], int []);


#endif
