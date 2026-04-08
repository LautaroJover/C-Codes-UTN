#include <stdio.h>
#include <conio.h>
#define n 3

int main() {
    int m[n][n]; //Matriz Entrada
    int m1[n][n]; //Matriz Transpuesta guardada
    int f,c;
    for (f=0;f<n;f++){
        for (c=0;c<n;c++){
            scanf("%d",&m[f][c]);
        }
    }
    printf("Matriz Ingresada:\n");
    for (f=0;f<n;f++){
        for (c=0;c<n;c++){
            printf("[%d]",m[f][c]);
        }
        printf("\n");
    }
    for (f=0;f<n;f++){
        for (c=0;c<n;c++){
            m1[f][c]=m[c][f]; //Guardar el orden de la Matriz Transpuesta
                              //Cambiando Filas por Columnas
        }
    }
    printf("Matriz Transpuesta:\n");
    for (f=0;f<n;f++){
        for (c=0;c<n;c++){
            printf("[%d]",m1[f][c]);
        }
        printf("\n"); //Espacio cada 3 Vectores
    }
    getch();
    return 0;
}
