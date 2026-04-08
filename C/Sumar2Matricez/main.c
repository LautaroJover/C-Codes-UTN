#include <stdio.h>
#include <conio.h>
#define n 3
int main()
{
    int i;
    int j;
    int matriz[n][n];
    int matriz2[n][n];
    int sumamatriz[n][n];
    printf("Sumar 2 Matricez\nIngrese Elementos Primera Matriz\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Ingrese Elementos Segunda Matriz\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sumamatriz[i][j] = matriz[i][j] + matriz2[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("[%d]",sumamatriz[i][j]);
        }
        printf("\n"); //Espacio cada 3 Vectores
    }
    getch();
    return 0;
}
