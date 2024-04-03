#include <stdio.h>

int main(){

    //scanf -> Leer datos de entrada desde la consola
    int numero;
    float altura;
    char inicial;

    //Leer un entero
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    //Leer un flotante
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    //Leer un carácter
    printf("Ingrese la inicial de su nombre: ");
    scanf(" %c", &inicial); //Se agrega un espacio antes de %c para ignorar espacios en blanco

    //Mostrar los valores leídos
    printf("El número ingresado es: %d\n", numero);
    printf("La altura ingresada es: %.2f metros\n", altura);
    printf("La inicial ingresada es: %c\n", inicial);

    char nombre[50]; //Declara un arreglo de caracteres para almacenar la cadena

    printf("Ingrese su nombre: ");
    scanf("%s", nombre); //%s para leer una cadena de caracteres

    printf("Hola, %s. Bienvenido!\n", nombre);

    return 0;
}