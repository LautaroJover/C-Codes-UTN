#include <stdio.h>
#define Max_Size 10

int main()
{
    int n,i;
    int vector[Max_Size];
    n=0;

    printf("Ingresar el tamaño del vector (Maximo %d): ",Max_Size);
    scanf("%d",&n);

    // Comprobar si el usuario ingreso bien
    if(n>Max_Size)
    {
        printf("Error: Tamaño invalido.\n");
        return 1;
    }

    printf("Ingresar %d elementos\n",n);
    for(i=0;i<n;i++)
    {
        printf("Ingrese el elemento %d: ",i);
        scanf("%d",&vector[i]);
    }

    printf("Los elementos son: \n");
    for(i=0;i<n;i++)
    {
      printf("Elemento %d: %d\n",i,vector[i]);

    }
    getch();
}
