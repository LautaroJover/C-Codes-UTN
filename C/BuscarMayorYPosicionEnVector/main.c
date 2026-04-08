#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define n 15
int main()
{
    int vector[n];
    int i=0;
    int numuser;
    int mayor=0;
    int mayorp=0;
    printf("Generar Aleatoriamente los elementos\n");
    for(i=0;i<n;i++)
    {
        vector[i] = rand()% 100 + 1; // Numeroa aleatoreos entre 100 y 1
    }
    printf("Vector elementos aleatorios\n");
    for(i=0;i<n;i++)
    {
        printf("[%d]", vector[i]);
    }

    for (i=0;i<n;i++)
    {
        if (i==0)
        {
        mayor = vector[i];
        mayorp = i;
        }
        else if (vector[i]>mayor)
        {
            mayor = vector[i];
            mayorp =i;
        }
    }
    printf("\nEl numero mayor es %d y se encuentra en la posicion %d\n",mayor,mayorp);
    getch();
    return 0;
}
