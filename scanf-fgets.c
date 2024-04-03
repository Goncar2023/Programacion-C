#include <stdio.h>

int main() {
    char cadena_scan[100];
    char cadena_fgets[100];

    //Usando scanf para leer una cadena de texto
    printf("Ingresa tu nombre y apellido: ");
    scanf("%s", cadena_scan);//No es seguro para leer cadenas con espacios

    //Usando fgets para leer una cadena de texto
    printf("Ingresa tu nombre y apellido: ");
    fgets(cadena_fgets, sizeof(cadena_fgets), stdin);//Lee una línea completa de texto

    printf("scanf: %s\n", cadena_scan);
    printf("fgets: %s\n", cadena_fgets);

    return 0;
}
