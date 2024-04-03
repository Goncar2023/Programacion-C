#include <stdio.h>
#include <ctype.h>//Para las funciones de caracteres

int main() {
    char frase[100];
    int contVocales = 0;

    printf("Ingrese una frase: ");
    fgets(frase, sizeof(frase), stdin);

    //Contar la cantidad de vocales en la frase
    for (int i = 0; frase[i] != '\0'; i++) {
        char letra = tolower(frase[i]);//Convertir a minúscula para comparar

        //Verificar si el caracter es una vocal
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            contVocales++;
        }
    }

    //Mostrar la cantidad de vocales
    printf("Cantidad de vocales: %d\n", contVocales);

    return 0;
}
