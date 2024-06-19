#include <stdio.h>

int suma(int a, int b); //PROTOTIPO DE FUNCIÓN CON RETORNO
void saludar();//PROTOTIPO DE FUNCIÓN SIMPLE

int main() {
    int resultado;
    saludar();
    resultado = suma(10, 25);
    printf("La suma es: %d\n", resultado);
}


//Definición de la función suma
int suma(int a, int b) {
    return a + b;
}

//Definición de la función saludar
void saludar(){
    printf("Hola");
}