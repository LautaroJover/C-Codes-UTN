#include <stdio.h>
#include <conio.h>

// 1. Ingresar matriz cuadrada (2x2 o 3x3) por copia
void ingresarMatriz(int mat[3][3], int tam) {
    printf("Ingrese los elementos de la matriz %dx%d:\n", tam, tam);
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}

// 2. Calcular la transpuesta (pasaje por copia, resultado por parametro)
void calcularTranspuesta(int mat[3][3], int trans[3][3], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            trans[j][i] = mat[i][j];
        }
    }
}

// Mostrar una matriz
void mostrarMatriz(int mat[3][3], int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
}

// 3. Calcular determinante (por copia, devuelve por valor)
int calcularDeterminante(int mat[3][3], int tam) {
    int det = 0;
    if (tam == 2) {
        det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    } else if (tam == 3) {
        det = mat[0][0] * (mat[1][1]*mat[2][2] - mat[1][2]*mat[2][1]) -
              mat[0][1] * (mat[1][0]*mat[2][2] - mat[1][2]*mat[2][0]) +
              mat[0][2] * (mat[1][0]*mat[2][1] - mat[1][1]*mat[2][0]);
    }
    return det;
}

// MAIN
int main() {
    int matriz[3][3], transpuesta[3][3];
    int tam;

    // Pedir al usuario elegir un tamaño
    do {
        printf("Ingrese el tamano de la matriz (2 o 3): ");
        scanf("%d", &tam);
    } while (tam != 2 && tam != 3);

    // 1. Funcion para que el usuario ingrese la matriz
    ingresarMatriz(matriz, tam);

    // Mostrar al usuario la matriz original
    printf("\nMatriz original:\n");
    mostrarMatriz(matriz, tam);

    // 2. Mostrar al usuario matriz Transpuesta
    calcularTranspuesta(matriz, transpuesta, tam);
    printf("\nMatriz transpuesta:\n");
    mostrarMatriz(transpuesta, tam);

    // 3. Monstrar al usuario la Determinante de su matriz
    int det = calcularDeterminante(matriz, tam);
    printf("\nDeterminante de la matriz es: %d\n", det);

    //No cerrar el programa para que usuario vea los resultados
    getch();
    return 0;
}
