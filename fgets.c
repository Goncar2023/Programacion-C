#include <stdio.h>

int main() {
    char frase[100];

    //Leer una línea completa de texto desde la entrada estándar (teclado)
    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);
    /*
        -> stdin  -> Entrada estándar
        -> sizeof(cadena_fgets)
        Es el tamaño máximo de caracteres que se leerán desde la entrada estándar
        asegura que fgets() no lea más caracteres de los que el array puede
        contener, evitando así desbordamientos de buffer.
    */

    printf("La frase ingresada es: %s", frase);

    return 0;
}
