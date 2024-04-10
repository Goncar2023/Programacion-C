#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int randomNumber = rand() % 101; //Genera un número entre 0 y 100
    printf("N° %d",randomNumber);
    return 0;
}