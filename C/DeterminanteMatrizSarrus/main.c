#include <stdio.h>
#include <conio.h>
int main() {
    float matriz[3][3];
    float determinante;

    printf("Ingrese los elementos de la matriz 3x3:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Regla de Sarrus
    determinante =
        matriz[0][0] * matriz[1][1] * matriz[2][2]
        + matriz[0][1] * matriz[1][2] * matriz[2][0]
        + matriz[0][2] * matriz[1][0] * matriz[2][1]
        - matriz[0][2] * matriz[1][1] * matriz[2][0]
        - matriz[0][0] * matriz[1][2] * matriz[2][1]
        - matriz[0][1] * matriz[1][0] * matriz[2][2];

    printf("\nEl determinante de la matriz es: %.2f\n", determinante);
    getch();
    return 0;
}
