#include <stdio.h>
#define f 2  //Fila
#define c  2 //COlumna
int main()
{
    int Matrz[f][c],i,j;

    // Inicializar "Matriz"
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
        Matrz[i][j]=0;
        }
    }
    // Matriz Inicializada
    printf("Matriz: \n");
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
        printf("Matriz[%d][%d]:%d \n",i,j,Matrz[i][j]);
        }
    }

    // Matriz Cargada por el Usuario (PEDIDO DE CARGA)
    printf("Ingrese los %d Valores: \n",f*c);
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
        printf("Matriz[%d][%d]:  \n",i,j);
        scanf("%d",&Matrz[i][j]);
        }
    }
     // Matriz Cargada por el Usuario
    printf("LA Matriz TIENE CARGADO \n");
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
        printf("Matriz[%d][%d]:%d \n",i,j,Matrz[i][j]);
        }
    }

    printf("LA Matriz TIENE CARGADO \n");
    for (i=0;i<f;i++)
    {
        for (j=0;j<c;j++)
        {
        printf("[%d] ",Matrz[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
