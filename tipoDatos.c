#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    //TIPOS DE DATOS

    //ENTEROS
    int edad = 40;
    short distancia = 1000;
    long poblacion = 4500000000;
    unsigned int cantidad = 500;//Número enteros sin signo, solo contienen n° no negativos

    //Booleanos
    bool es_mayor_de_edad = true;

    //PUNTO FLOTANTE
    float altura = 1.75;
    double pi = 3.141592653589793;

    //CARACTERES
    char letra = 'A';

    //ARREGLO DE CARACTERES
    char cadena[] = "Hola mundo!";

    char cadena[] = "Hola, mundo!";
    printf("Cadena original: %s\n", cadena);

    cadena[5] = '!';//Cambiar una letra
    printf("Cadena modificada: %s\n", cadena);

    //Obtener longitud de la cadena
    printf("Longitud de la cadena: %ld\n", strlen(cadena));

    /*
        PUNTEROS
        -> Variable que contiene la dirección de memoria de otra variable.
        -> En lugar de contener un valor directamente como una variable normal,
        un puntero contiene la ubicación de memoria donde se almacena un valor.
    */

    int* ptr_entero; //Puntero a un entero
    float* ptr_flotante; //Puntero a un número con punto flotante
    char* ptr_caracter; //Puntero a un carácter

    //OPERADOR DE DIRECCIÓN(&) Y OPERADOR DE INDIRECCIÓN(*)
    // & -> Se utiliza para obtener la dirección de memoria de una variable existente
    // * -> Se utiliza para acceder al valor almacenado en la dirección de memoria a la que apunta el puntero.

    int numero = 10;
    int* ptr_numero;//Declaración de un puntero a un entero

    ptr_numero = &numero;//Asignación de la dirección de "numero" al puntero

    printf("Valor de numero: %d\n", numero); //Imprime el valor
    printf("Direccion de memoria de numero: %p\n", &numero);//Imprime la dirección de memoria de 'numero'
    printf("Valor apuntado por ptr_numero: %d\n", *ptr_numero);//Imprime el valor


    getchar();//Espera a que el usuario presione Enter
    return 0;
}