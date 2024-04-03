#include <stdio.h>
#include <ctype.h>
/*
    La función tolower() es una función de la biblioteca estándar de C
    (<ctype.h>) que se utiliza para convertir un carácter en mayúscula a
    su equivalente en minúscula.
*/
int main() {
    char letra_mayuscula = 'A';
    char letra_minuscula = tolower(letra_mayuscula);

    printf("Minuscula: %c\n", letra_mayuscula, letra_minuscula);

    return 0;
}
