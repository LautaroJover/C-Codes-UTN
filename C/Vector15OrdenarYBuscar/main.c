#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define n 10
int main()
{
    int vector[n];
    int i,j;
    int temp;
    int b=0;
    int numuser;
    int pos1 = -1;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (vector[j]>vector[j+1])
            {
                temp=vector[j];
                vector[j]=vector[j+1];
                vector[j+1]=temp;
            }
        }
    }
    printf("\nVector elementos ordenados\n");
    for(i=0;i<n;i++)
    {
        printf("[%d]", vector[i]);
    }
    printf("\nIngrese numero que desee buscar\n");
    scanf("%d", &numuser);
    //Buscar Numero en el vector con bandera
    i=0;
    while (i<n) {
        if(vector[i]==numuser)
        {
            pos1=i;
            b=1;
        }
        i++;
    }
    if (b==1)
    {
        printf("El numero fue encontrado en la posicion %d",pos1);
    }
    else
    {
        printf("Numero no encontrado");
    }
    getch();
    return 0;
}
