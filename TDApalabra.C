#include "TDApalabra.h"
#include <ctype.h>


void crearSecuencia(SecuenciaPal* sec, char* cadena) //tiene que inicializar la estructura de la secuencia. poner el cursor al inicio de la cadena que recibio de parametro
{
    sec->cursor = cadena;
    sec->finSec = false;
}

bool leerPalabra(SecuenciaPal* sec, Palabra* pal) // avanzo el cursor mientras no sea fin de caracter y cuando no es una letra el caracter que apunta el cursor
{
    while(*sec->cursor != '\0' && !isalpha(*sec->cursor)) // is_alpha verifica que sea una letra (intentar hacer esta funcion, es de ctype.h): c >= 'A' && c<= 'Z' || c >= 'a' && c<= 'z'
        sec->cursor++;
    if(*sec->cursor == '\0')
    {
        sec->finSec = true;
        return false;
    }

    char* actPal = pal->vec;
    while (*sec->cursor != '\0' && isalpha(*sec->cursor)) //la condicion *sec->cursor significa que *sec->cursor sea =! a caracter nulo
    {
        *actPal = *sec->cursor;
        actPal++;
        sec->cursor++;
    }

}

bool escribirPalabra(SecuenciaPal* sec, Palabra* pal) // avanzo el cursor mientras no sea fin de caracter y cuando no es una letra el caracter que apunta el cursor
{

    char* actPal = (char*)pal->vec;
    while (*actPal) //la condicion *sec->cursor significa que *sec->cursor sea =! a caracter nulo
    {
        *sec->cursor = *actPal;
        actPal++;
        sec->cursor++;
    }
}

void escribirCaracter(SecuenciaPal* sec, char c)
{
    *sec->cursor= c;
    sec->cursor++;
}


void aTitulo(Palabra* pal)
{
    char* actPal = pal->vec;
    *actPal = toupper(*actPal);
    actPal++;
    while(*actPal)
    {
        *actPal = tolower(*actPal);
        actPal++;
    }
}

void reposicionarCursor(SecuenciaPal* sec, long despl)
{
    sec->cursor += despl;
}

void cerrarSecuencia(SecuenciaPal* sec) // una vez q termine de leer la secuencia poner un caracter nulo al final
{
    *sec->cursor = '\0';
}
bool finSecuencia(const SecuenciaPal* sec)
{
    return sec->finSec;
}

///////////////////////////////////////////////////////////////////////////////// hechas por mi

void crearSecuencia(SecuenciaPal* sec, char* cadena){
    sec->cursor = cadena;
    sec->finSec = false;
}

int leerpalabra(SecuenciaPal* sec, Palabra* cadena){ //lee de la secuencia de lectura y lo pone en el vector palabra

while(*sec->cursor != '\0' && !isalpha(*sec->cursor))

}

void Atitulo(Palabra* cadena){

char* actPal = cadena->vec;
*actPal = toupper(*cadena->vec);
actPal++; 

while (*actPal)
{
    *actPal = tolower(*cadena->vec);
    actPal++; 

}


}

void reposicionarCursor(SecuenciaPal* sec, long despl){

    sec->cursor+= despl;
}
