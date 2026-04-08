#include <stdio.h>
#include <conio.h>
#define n 5
int main()
{
    int f;
    int c;
    int A = 0;
    int m[n][n];
    for(int f=0; f<n; f++)
    {
        for(int c=0; c<n; c++)
        {
            printf("Ingrese el elemento en la posicion [%d][%d]",f,c);
            scanf("%d",&m[f][c]);
            if (f==c)
            {
            A = A + m[f][c];
            }
        }
    }
    printf("La suma de la diagonal principal es %d:",A);
    getch();
    return 0;
}
