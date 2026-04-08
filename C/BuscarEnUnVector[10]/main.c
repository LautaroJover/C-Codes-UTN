#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Max_Size 10

int main()
{
    int n,i,clave,encontrado;
    int vector[Max_Size];
    n=0;
    encontrado=-1;
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
    printf("\n¿Que valor deseas buscar en el vector? \n");
    scanf("%d",&clave);
    // Busqueda Secuencial
    for(i=0;i<n;i++)
    {
      if(vector[i]==clave)
        {
            encontrado=i;
            break;
        }
    }
    if(encontrado!=-1)
    {
        printf("El elemento %d fue encontrado en la posicion %d\n",clave,encontrado);
    }  else {
        printf("El elemento %d no fue encontrado en vector \n",clave);
    }
    getch();
    return 0;
}
