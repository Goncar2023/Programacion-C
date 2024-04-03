#include <stdio.h>

int main() {
    int edad = 15;

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres menor de edad.\n");
    }

    int edad = 20;
    /*
        resultado -> Se inicializa con un valor indefinido
        No apunta a ninguna ubicación de memoria específica en este punto
        puntero no inicializado
    */
    char *resultado;//Apunta a una direccion de memoria donde se almacena un carácter

    //Uso del operador ternario para asignar un mensaje dependiendo de la edad
    resultado = (edad >= 18) ? "Eres mayor de edad" : "Eres menor de edad";

    printf("%s\n", resultado);

    int puntaje = 75;

    if (puntaje >= 90) {
        printf("Tienes una calificación EXCELENTE.\n");
    } else if (puntaje >= 70) {
        printf("Tienes una calificación BUENA.\n");
    } else {
        printf("Necesitas mejorar tu calificación.\n");
    }

    //SWITCH
    char operador = '+';
    int num1 = 10, num2 = 5, resultado;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("La suma es: %d\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("La resta es: %d\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("La multiplicación es: %d\n", resultado);
            break;
        case '/':
            resultado = num1 / num2;
            printf("La división es: %d\n", resultado);
            break;
        default:
            printf("Operador no válido.\n");
    }
    return 0;
}