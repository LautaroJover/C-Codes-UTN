#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define n 3
int main()
{
    int m[n][n];

    for (int f=0;f<n;f++) {
        for (int c= 0;c<n;c++) {
            m[f][c] = rand()% 100 + 1;
        }
    }
    printf("Matriz Aleatoria Original\n");
    for (int f=0;f<n;f++) {
        for (int c= 0;c<n;c++) {
            printf("[%2d]", m[f][c]);
        }
        printf("\n");
    }
    printf("Matriz Transpuesta\n");
    for (int f=0;f<n;f++) {
        for (int c= 0;c<n;c++) {
            printf("[%2d]", m[c][f]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
