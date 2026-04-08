#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Max_Size 10

int main()
{
    int n,i,j,temp;
    int vector[Max_Size];
    n=0;

    // Inicializar la semilla para la generacion de numeros aleatoreos.
    srand(time(NULL));

    printf("Ingresar el tamaño del vector (Maximo %d): ",Max_Size);
    scanf("%d",&n);

    // Comprobar si el usuario ingreso bien
    if(n>Max_Size)
    {
        printf("Error: Tamaño invalido.\n");
        return 1;
    }

    printf("Generar Aleatoriamente los elementos\n");
    for(i=0;i<n;i++)
    {
      vector[i] = rand()% 100 + 1; // Numeroa aleatoreos entre 100 y 1
    }

    printf("Los elementos son: \n");
    for(i=0;i<n;i++)
    {
      printf("%d ",vector[i]);
    }
    // Algoritmo de la burbuja
    for(i=0;i<n;i++)
    {
      for(j=0;j<(n-i-1);j++)
     {
          printf("¿%d > %d?\n",vector[j],vector[j+1]);
          if(vector[j]>vector[j+1])
          {
            // Intercambio entre vector[j] y vector[j+1]
            temp= vector[j];
            vector[j]=vector[j+1];
            vector[j+1]=temp;
          }
      }
    }

    printf("\nLos elementos Ordenados: \n");
    for(i=0;i<n;i++)
    {
      printf("%d ",vector[i]);
    }
    getch();
    return 0;
}
