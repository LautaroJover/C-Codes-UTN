#include <stdio.h>
#include <conio.h>
int main() {
    // Declarar un arreglo de 5 enteros
    int numeros[5] = {10, 20, 30, 40, 50};

    // Declarar un puntero a entero
    int *ptr;

    // Hacer que el puntero apunte al primer elemento del arreglo
    ptr = numeros;  // o ptr = &numeros[0];

    // Imprimir los valores del arreglo usando el puntero
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(ptr + i));
    }
    getch();
    return 0;
}
