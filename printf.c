#include <stdio.h>
int main(){
    /*
        Los especificadores de formato comienzan con el carácter %
        seguido de un carácter que indica el tipo de dato que se imprimirá y,
        opcionalmente, ciertas opciones de formato.

        ESPECIFICADORES DE FORMATO COMUNES
        %d -> Enteros
        %f -> Flotantes
        %c -> Caracteres
        %s -> Cadenas de caracteres
        %p -> Punteros
        %lf -> Doubles
    */

    int edad = 30;
    float altura = 1.75;
    char inicial = 'E';

    //Imprimir un entero y un flotante
    printf("Mi edad es %d años y mi altura es %.2f metros.\n", edad, altura);
    //2f indica que se mostrarán dos digitos decimales despues del punto decimal

    //Imprimir un carácter
    printf("La inicial de mi nombre es %c.\n", inicial);

    printf("Incial %c - Altura: %.2f - Edad: %d", inicial, altura, edad);

    //Cadena de caracteres
    char cadena[] = "Hola, mundo!";
    printf("Cadena original: %s\n", cadena);

    return 0;
}