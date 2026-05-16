#include <stdio.h>
#include <stdlib.h>

int* numeros;


int main(){

    numeros = (int*) malloc(3* sizeof(int));
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;

    printf("Número: %d, endereço: %p\n", numeros[0], &numeros[0]);
    printf("Número: %d, endereço: %p\n", numeros[1], &numeros[1]);


    numeros = (int*) realloc(numeros, 5*sizeof(int));

    numeros[3] = 40;
    numeros[4] = 50;

    printf("Número: %d, endereço: %p\n", numeros[0], &numeros[0]);
    printf("\nNúmero: %d, endereço: %p", numeros[4], &numeros[4]);

    free (numeros);
}