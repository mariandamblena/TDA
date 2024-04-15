#ifndef TDAPALABRA_H_INCLUDED
#define TDAPALABRA_H_INCLUDED
#include <stdbool.h>

#define TAM_PAL 41 //acordarse que siempre se pone un caracter mas del que quiero guardar. porque uno se reserva para el caracter nulo.

typedef struct
{
    char* cursor;
    bool finSec;

}SecuenciaPal;

typedef struct 
{
    char vec[TAM_PAL];

}Palabra;

void crearSecuencia(SecuenciaPal* sec, char* cadena); // todos los vectores que se pasan como parametro a una funcion, se pasan como punteros de donde arranca el vector
bool leerPalabra(SecuenciaPal* sec, Palabra* pal);
void escribirPalabra(SecuenciaPal* sec, const Palabra* pal);
void escribirCaracter(SecuenciaPal* sec, char c);
void aTitulo(Palabra* pal);
void cerrarSecuencia(SecuenciaPal* sec); // una vez q termine de leer la secuencia poner un caracter nulo al final
bool finSecuencia(const SecuenciaPal* sec);

#endif // TDAPALABRA_H_INCLUDED
