#include "Cadenas.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*char cadena[] = "Hola lalalo!";
    char subCadena[] = "lalo";

    char* encontrada = miStrStr(cadena, subCadena);

    if(encontrada)
    {
        printf("La subcadena %s se encontro en la cadena %s, y esta ubicada en la posicion %d", subCadena, cadena, (int)(encontrada - cadena));
    }
    else
    {
        printf("La subcadena %s NO se encontro en la cadena %s\n", subCadena, cadena);
    }*/


    char texto[] = "\t.;, esTO \t/()=eS?�+-_UN\ttItulO\0 "; //Hola que tal

    puts("Texto normalizado");

    printf("%s\n", normalizar(texto,texto));

    char textAscii[] = "El c�digo ASCII reserva los primeros 32 c�digos (numerados del 0 al 31 en decimal) para caracteres de control: c�digos no pensados originalmente para representar informaci�n imprimible, sino para controlar dispositivos (como impresoras) que usaban ASCII. Por ejemplo, el car�cter 10 representa la funci�n nueva l�nea (line feed), que hace que una impresora avance el papel, y el car�cter 27 representa la tecla "escape" que a menudo se encuentra en la esquina superior izquierda de los teclados comunes.El c�digo 127 (los siete bits a uno), otro car�cter especial, equivale a "suprimir" ("delete"). Aunque esta funci�n se asemeja a otros caracteres de control, los dise�adores de ASCII idearon este c�digo para poder "borrar" una secci�n de papel perforado (un medio de almacenamiento popular hasta la d�cada de 1980) mediante la perforaci�n de todos los agujeros posibles de una posici�n de car�cter concreta, reemplazando cualquier informaci�n previa. Dado que el c�digo 0 era ignorado, fue posible dejar huecos (regiones de agujeros) y m�s tarde hacer correcciones.Muchos de los caracteres de control ASCII serv�an para marcar paquetes de datos, o para controlar protocolos de transmisi�n de datos (por ejemplo ENQuiry, con el significado: �hay alguna estaci�n por ah�?, ACKnowledge: recibido o , Start Of Header: inicio de cabecera, Start of TeXt: inicio de texto, End of TeXt: final de texto, etc.). ESCape y SUBstitute permit�an a un protocolo de comunicaciones, por ejemplo, marcar datos binarios para que contuviesen c�digos con el mismo c�digo que el car�cter de protocolo, y que el receptor pudiese interpretarlos como datos en lugar de como caracteres propios del protocolo. Los dise�adores del c�digo ASCII idearon los caracteres de separaci�n para su uso en sistemas de cintas magn�ticas.Dos de los caracteres de control de dispositivos, com�nmente llamados XON y XOFF generalmente ejerc�an funciones de caracteres de control de flujo para controlar el flujo hacia un dispositivo lento (como una impresora) desde un dispositivo r�pido (como una computadora), de forma que los datos no saturasen la capacidad de recepci�n del dispositivo lento y se perdiesen.Los primeros usuarios de ASCII adoptaron algunos de los c�digos de control para representar metainformaci�n como final-de-l�nea, principio/final de un elemento de datos, etc. Estas asignaciones a menudo entraban en conflicto, as� que parte del esfuerzo de convertir datos de un formato a otro comporta hacer las conversiones correctas de metainformaci�n. Por ejemplo, el car�cter que representa el final-de-l�nea en ficheros de texto var�a con el sistema operativo. Cuando se copian archivos de un sistema a otro, el sistema de conversi�n debe reconocer estos caracteres como marcas de final-de-l�nea y actuar en consecuencia.Actualmente los usuarios de ASCII usan menos los caracteres de control, (con algunas excepciones como retorno de carro o nueva l�nea). Los lenguajes modernos de etiquetas, los protocolos modernos de comunicaci�n, el paso de dispositivos basados en texto a basados en gr�ficos, el declive de las teleimpresoras, las tarjetas perforadas y los papeles continuos han dejado obsoleta la mayor�a de caracteres de control.";

    Palabra palabraMasLarga;

    int cant = contarPalabraMasLarga(&palabraMasLarga);

    return 0;
}


