#ifndef CADENAS_H_INCLUDED
#define CADENAS_H_INCLUDED
#define VERDADERO 1
#define FALSO 0
#include <stddef.h>
#define VERDADERO 1
#define FALSO 0

typedef struct {
    char* cursor;
    int finSec;
}
Secuencia;


typedef struct {
    char* ini;
    char* fin;
}
Palabra;


char * miStrStr(const char* cad, const char* subCad);
int contieneSubCadena(const char* cad, const char* subCad);
char* normalizar(const char* textoOrig,char* textoDest);
void inicializarSecuencia(Secuencia* sec, char* cad);
void leerPalabra(Secuencia* sec, Palabra* pal);
void escribirPalabra(Secuencia* sec, const Palabra* palabra, Palabra* palabraDest);
void formatearPalabra( Palabra* palabra);
void escribirCaracter(Secuencia* sec, char car);
void moverCursor(Secuencia* sec, int despl);
int finSecuencia(Secuencia* sec);
int esLetra(char car);
char aMayuscula(char car);
char aMinuscula(char car);
int contarPalabraMasLarga(const char* texto, Palabra* palabraMasLarga);
int comparar(const Palabra* pal1, const Palabra* pal2);
int longitud(const Palabra* pal);
#endif // CADENAS_H_INCLUDED
