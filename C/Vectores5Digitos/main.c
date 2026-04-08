#include <stdio.h>
#define tam 5

int main()
{
    int Vector[tam],i;
    // Inicializar
    for (i=0;i<tam;i++)
    {
      Vector[i]=0;
    }

    printf("Vector: \n");
    for (i=0;i<tam;i++)
    {
     printf("Vector[%d]:%d \n",i,Vector[i]);
    }
    printf("Ingrese los 5 Valores: \n");
    for (i=0;i<tam;i++)
    {
     printf("Vector[%d]: ",i);
     scanf("%d",&Vector[i]);
    }

    for (i=0;i<tam;i++)
    {
     Vector[i]=Vector[i]*3;
    }


    printf("EL VERCTOR TIENE CARGADO \n");
    for (i=0;i<tam;i++)
    {
     printf("Vector[%d]:%d \n",i,Vector[i]);
    }

    getch();
    return 0;
}
