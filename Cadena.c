#include "TDApalabra.h"

void normalizar(const char* cadANormalizar, char* cadNormalizada)
{
    SecuenciaPal secL, secE;
    crearSecuencia(&secL, (char*)cadANormalizar);
    crearSecuencia(&secE, cadNormalizada);
    Palabra pal;

    leerPalabra(&secL,&pal);
    while(!finSecuencia(&secL))
    {
        aTitulo(&pal);
        escribirPalabra(&secE, &pal);
        escribirCaracter(&secE,' ');
        leerPalabra(&secL,&pal);
    }

    //fseek reposiciona el cursor del archivo
    reposicionarCursor(&secE, -1 );
    cerrarSecuencia(&secE);
}



/* hay que poner a cada palabra la mayuscula // no pueden haber espacios al inicio o al final*/
void normalizacion(char* cadANormalizar){

SecuenciaPal Cadena;

}
