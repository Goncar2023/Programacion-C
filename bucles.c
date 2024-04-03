#include <stdio.h>//Biblioteca estándar

int main() {

    //BUCLE FOR
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);//Imprimir los números del 1 al 5

    }
    return 0;

    //BUCLE WHILE
    int n = 5;
    while (n > 0) {
        printf("%d ", n);//Imprimir los números del 1 al 5

        n--;
    }
    return 0;

    //BUCLE DO - WHILE
    int x = 1;
    do {
        printf("%d ", x);//Imprimir los números del 1 al 5
        x++;
    } while (x <= 5);
    return 0;
}
