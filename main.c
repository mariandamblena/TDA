#include <stdio.h>
#include <stdlib.h>
#include "Cadena.h"

int main()
{
    //declaramos una cadena que tenga caracteres que haya que remover,que no formen palabras. cada palabra puede tener un case.
    char* cadANormalizar = "{}:<>hola\t#@$^mundo@$%^";
    char cadNormalizada[100];

    normalizar(cadANormalizar, cadNormalizada);

    printf("%s\n, cadNormalizada");

    return 0;
}
