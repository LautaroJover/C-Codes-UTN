#include <stdio.h>
#include <conio.h>
int main() {
    // Declarar un arreglo de 6 enteros
    int arreglo[6] = {1, 2, 3, 4, 5, 6};
    int i;

    // Mostrar el arreglo
    printf("Arreglo no invertido:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", arreglo[i]);
    }

    // Declarar dos punteros: uno al inicio y otro al final del arreglo
    int *inicio = arreglo;                // apunta al primer elemento
    int *fin = arreglo + 5;               // apunta al último elemento (posición 5)

    // Intercambiar los valores mientras no se crucen
    while (inicio < fin) {
        // Intercambiar los valores a los que apuntan
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;

        // Mover los punteros
        inicio++;
        fin--;
    }

    // Mostrar el arreglo invertido
    printf("\nArreglo invertido:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", arreglo[i]);
    }
    getch();
    return 0;
}
