#include <stdio.h>
#include <conio.h>
int main() {
    // Declarar dos arreglos de 10 enteros
    int origen[10];
    int destino[10];

    // Punteros para recorrer ambos arreglos
    int *pOrigen = origen;
    int *pDestino = destino;

    // Cargar el primer arreglo desde teclado
    printf("Ingrese 10 numeros enteros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", pOrigen + i);
    }

    // Copiar los valores del primer arreglo al segundo usando punteros
    for (int i = 0; i < 10; i++) {
        *(pDestino + i) = *(pOrigen + i);
    }

    // Mostrar el contenido del segundo arreglo
    printf("\nContenido del segundo arreglo:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(pDestino + i));
    }
    getch();
    return 0;
}
