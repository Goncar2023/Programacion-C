#include <stdio.h>

int main() {

    //OPERADORES ARITMETICOS
    int a = 10;
    int b = 5;
    int suma = a + b;//Suma
    int resta = a - b;//Resta
    int multiplicacion = a * b;//Multiplicación
    int division = a / b;//División
    int modulo = a % b;//Módulo

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicación: %d\n", multiplicacion);
    printf("División: %d\n", division);
    printf("Módulo: %d\n", modulo);

    //OPERADORES DE ASIGNACIÓN
    int x = 100;
    x += 5;//Equivalente a x = x + 5
    printf("x = %d\n", x);

    x -= 5;//Equivalente a x = x - 5
    printf("x = %d\n", x);

    x *= 5;//Equivalente a x = x * 5
    printf("x = %d\n", x);

    x /= 5;//Equivalente a x = x / 5
    printf("x = %d\n", x);

    x %= 5;//Equivalente a x = x % 5
    printf("x = %d\n", x);

    //OPERADORES RELACIONALES
    int a = 10;
    int b = 5;

    if (a > b) {
        printf("a es MAYOR que b\n");
    }

    if (a == b) {
        printf("a es IGUAL a b\n");
    }

    if (a != b) {
        printf("a es DIFERENTE de b\n");
    }

    /*
        OPERADORES LOGICOS
        > < == != >= <=
        operador de igualdad y tipo === //Valores iguales y mismo tipo
        operador de desigualdad y tipo !==
    */
    int a = 10;
    int b = 5;
    int c = 15;

    if (a > b && a > c) {
        printf("a es el mayor\n");
    }

    if (a > b || c > a) {
        printf("a es MAYOR que b o c es más MAYOR que a\n");
    }

    if (!(a == b)) {
        printf("a ES DISTINTO a b\n");
    }

    getchar();//Espera a que el usuario presione Enter

    return 0;
}