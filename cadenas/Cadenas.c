#include "Cadenas.h"


char * miStrStr(const char* cad, const char* subCad)
{
    const char* act = cad;

    while(*act && !contieneSubCadena(act, subCad))
        act++;

    if(!*act)
        return NULL;
    return (char*)act;
}

int contieneSubCadena(const char* cad, const char* subCad)
{
    const char* act = cad;
    const char* actSub = subCad;

    while(*act && *actSub && *cad == *subCad)
    {
        act++;
        actSub++;
    }

    return !*actSub;
}

char* normalizar(const char* textoOrig,char* textoDest)
{
    Secuencia secLect, secEsc;
    inicializarCadena(&secLect, (char*)textoOrig);
    inicializarCadena(&secEsc, textoDest);

    Palabra palabra, palabraDest;

    leerPalabra(&secLect, &palabra);
    while(!finSecuencia(&secLect))
    {
        escribirPalabra(&secEsc, &palabra, &palabraDest);
        formatearPalabra(&palabraDest);
        escribirCaracter(&secEsc, ' ');
        leerPalabra(&secLect, &palabra);
    }

    moverCursor(&secEsc, -1);
    escribirCaracter(&secEsc, '\0');

    return textoDest;
}


void inicializarSecuencia(Secuencia* sec, char* cad)
{
    sec->cursor = cad;
    sec->finSec = FALSO;
}

void leerPalabra(Secuencia* sec, Palabra* pal)
{
    while(*sec->cursor && !esLetra(*sec->cursor))
        sec->cursor++;

    if(!*sec->cursor)
    {
        sec->finSec = VERDADERO;
        return;
    }

    pal->ini = sec->cursor;

    while(esLetra(*sec->cursor))
        sec->cursor++;

    pal->fin = sec->cursor-1;
}

void escribirPalabra(Secuencia* sec, const Palabra* palabra, Palabra* palabraDest)
{
    palabraDest->ini = sec->cursor;

    for( char* act = palabra->ini ; act <= palabra->fin ; act++, sec->cursor++)
        *sec->cursor = *act;

    palabraDest->fin = sec->cursor -1;
}

void formatearPalabra( Palabra* palabra)
{
    *palabra->ini = aMayuscula(*palabra->ini);

    for( char* act = palabra->ini+1 ; act <= palabra->fin ; act++)
        *act = aMinuscula(*act);
}

void escribirCaracter(Secuencia* sec, char car)
{
    *sec->cursor = car;
    sec->cursor++;
}

void moverCursor(Secuencia* sec, int despl)
{
    sec->cursor += despl;
}

int finSecuencia(Secuencia* sec)
{
    return sec->finSec;
}

int esLetra(char car)
{
    return (car >= 'a' && car <= 'z') || (car >= 'A' && car <= 'Z');
}

char aMayuscula(char car)
{
    if(car >= 'a' && car <= 'z')
        car -= 'a' - 'A';
    return car;
}

char aMinuscula(char car)
{
    if(car >= 'A' && car <= 'Z')
        car += 'a' - 'A';
    return car;
}


int contarPalabraMasLarga(const char* texto, Palabra* palabraMasLarga)
{
    Secuencia sec;
    inicializarCadena(&sec, texto);
    Palabra palabra;
    leerPalabra(&sec, &palabra);

    if(finSecuencia(&sec))
        return o;

    palabraMasLarga = palabra;
    int cantApariciones = 1;
    int longPalMLarga = longitud(palabraMasLarga);
    int longPalAct;

    leerPalabra(&sec, &palabra);
    while(!finSecuencia(&sec))
    {
        longPalAct = longitud(&palabra);

        if(longPalAct == longPalMLarga && comparar(&palabra, palabraMasLarga) == 0)
            cantApariciones++;
        else
        {
            if(longPalAct > longPalMLarga)
            {
                *palabraMasLarga = palabra;
                longPalMLarga = longPalAct;
                cantApariciones = 1;
            }
        }
        leerPalabra(&sec, &palabra);
    }

    return cantApariciones;
}

int longitud(const Palabra* pal)
{
    return pal->fin - pal->ini +1;
}


int comparar(const Palabra* pal1, const Palabra* pal2)
{
    char* p1 = pal1->ini;
    char* p2 = pal2->ini;

    while(p1 <= pal1->fin && p2 <= pal2->fin && *pl == *p2)
    {
        p1++;
        p2++;
    }

    int finCad1 = p1 > pal1->fin;
    int finCad2 = p2 > pal2->fin;

    if(finCad1 && !finCad2)
        return -1;
    if(!finCad1 && finCad2)
        return 1;
    if(finCad1 && finCad2)
        return 0;
    if(finCad1 && finCad2)
        return *p1 - *p2;
}
