#include <stdio.h>
#include <conio.h>

int main() {
    // Declarar una variable entera
    int numero;

    // Declarar un puntero a entero
    int *ptr;

    // Hacer que el puntero apunte a la variable
    ptr = &numero;

    // Cargar un valor desde el teclado usando el puntero
    printf("Ingrese un numero entero: ");
    scanf("%d", ptr);

    // Imprimir el valor cargado desde la variable
    printf("Valor desde la variable: %d\n", numero);

    // Imprimir el valor cargado desde el puntero
    printf("Valor desde el puntero: %d\n", *ptr);
    getch();
    return 0;
}
