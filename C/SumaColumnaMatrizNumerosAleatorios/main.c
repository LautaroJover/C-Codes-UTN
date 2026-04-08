#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int f=0;
    int c=0;
    int matriz [4][3];
    int suma1=0;
    int n=0,n2=0,n3=0;
    for (f=0;f<4;f++) {
        for (c= 0;c<3;c++) {
            matriz[f][c] = rand()% 100 + 1;
        }
    }
    printf("\n");
    for (f=0;f<4;f++) {
        for (c= 0;c<3;c++) {
            printf("[%2d]", matriz[f][c]);
        }
        printf("\n");
    }
    for (f=0;f<4;f++) {
            n = n + matriz[f][0];
            n2 = n2 + matriz[f][1];
            n3 = n3 + matriz[f][2];
    }
    for (f=0;f<4;f++) {
        for (c= 0;c<3;c++) {
            suma1 = suma1 + matriz[f][c];
        }
    }
    printf("Columnas Sumadas [%d][%d][%d] Matriz Completa Sumada: %d",n,n2,n3,suma1);
    getch();
    return 0;
}
