//EJEMPLO DE FUNCIÓN CON PARAMETROS Y RETORNO
#include <stdio.h>

//Definición de la función suma
int suma(int numUno, int numDos) {
    return numUno + numDos;
}

int main() {
    int numUno, numDos, resultado;

    //Solicitar al usuario que ingrese dos números
    printf("Ingresa el primer número: ");
    scanf("%d", &numUno);
    printf("Ingresa el segundo número: ");
    scanf("%d", &numDos);

    //Llamada a la función suma
    resultado = suma(numUno, numDos);
    
    //Imprimir el resultado
    printf("El resultado es: %d\n", resultado);

    return 0;
}
