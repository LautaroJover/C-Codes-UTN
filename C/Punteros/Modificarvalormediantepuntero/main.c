#include <stdio.h>
#include <conio.h>

int main() {
    // Declarar una variable entera con valor 50
    int numero = 50;

    // Declarar un puntero a entero
    int *puntero;

    // Asignar al puntero la dirección de la variable
    puntero = &numero;

    // Imprimir el valor de la variable
    printf("Valor de la variable: %d\n", numero);

    // Imprimir la dirección de la variable
    printf("Direccion de la variable: %p\n", &numero);

    // Imprimir el valor apuntado por el puntero
    printf("Valor apuntado por el puntero: %d\n", *puntero);
    getch();
    return 0;
}
