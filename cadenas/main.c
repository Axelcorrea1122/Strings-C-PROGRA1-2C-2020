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


    char texto[] = "\t.;, esTO \t/()=eS?¿+-_UN\ttItulO\0 "; //Hola que tal

    puts("Texto normalizado");

    printf("%s\n", normalizar(texto,texto));

    char textAscii[] = "El código ASCII reserva los primeros 32 códigos (numerados del 0 al 31 en decimal) para caracteres de control: códigos no pensados originalmente para representar información imprimible, sino para controlar dispositivos (como impresoras) que usaban ASCII. Por ejemplo, el carácter 10 representa la función nueva línea (line feed), que hace que una impresora avance el papel, y el carácter 27 representa la tecla "escape" que a menudo se encuentra en la esquina superior izquierda de los teclados comunes.El código 127 (los siete bits a uno), otro carácter especial, equivale a "suprimir" ("delete"). Aunque esta función se asemeja a otros caracteres de control, los diseñadores de ASCII idearon este código para poder "borrar" una sección de papel perforado (un medio de almacenamiento popular hasta la década de 1980) mediante la perforación de todos los agujeros posibles de una posición de carácter concreta, reemplazando cualquier información previa. Dado que el código 0 era ignorado, fue posible dejar huecos (regiones de agujeros) y más tarde hacer correcciones.Muchos de los caracteres de control ASCII servían para marcar paquetes de datos, o para controlar protocolos de transmisión de datos (por ejemplo ENQuiry, con el significado: ¿hay alguna estación por ahí?, ACKnowledge: recibido o , Start Of Header: inicio de cabecera, Start of TeXt: inicio de texto, End of TeXt: final de texto, etc.). ESCape y SUBstitute permitían a un protocolo de comunicaciones, por ejemplo, marcar datos binarios para que contuviesen códigos con el mismo código que el carácter de protocolo, y que el receptor pudiese interpretarlos como datos en lugar de como caracteres propios del protocolo. Los diseñadores del código ASCII idearon los caracteres de separación para su uso en sistemas de cintas magnéticas.Dos de los caracteres de control de dispositivos, comúnmente llamados XON y XOFF generalmente ejercían funciones de caracteres de control de flujo para controlar el flujo hacia un dispositivo lento (como una impresora) desde un dispositivo rápido (como una computadora), de forma que los datos no saturasen la capacidad de recepción del dispositivo lento y se perdiesen.Los primeros usuarios de ASCII adoptaron algunos de los códigos de control para representar metainformación como final-de-línea, principio/final de un elemento de datos, etc. Estas asignaciones a menudo entraban en conflicto, así que parte del esfuerzo de convertir datos de un formato a otro comporta hacer las conversiones correctas de metainformación. Por ejemplo, el carácter que representa el final-de-línea en ficheros de texto varía con el sistema operativo. Cuando se copian archivos de un sistema a otro, el sistema de conversión debe reconocer estos caracteres como marcas de final-de-línea y actuar en consecuencia.Actualmente los usuarios de ASCII usan menos los caracteres de control, (con algunas excepciones como retorno de carro o nueva línea). Los lenguajes modernos de etiquetas, los protocolos modernos de comunicación, el paso de dispositivos basados en texto a basados en gráficos, el declive de las teleimpresoras, las tarjetas perforadas y los papeles continuos han dejado obsoleta la mayoría de caracteres de control.";

    Palabra palabraMasLarga;

    int cant = contarPalabraMasLarga(&palabraMasLarga);

    return 0;
}


