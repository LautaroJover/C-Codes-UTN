#include <stdio.h>
#define MaximoNumeroFilas 10
#define MaximoNumeroColumnas 10
int main()
{
    int filas,columnas,i,j;
    int Matriz[MaximoNumeroFilas][MaximoNumeroColumnas];
    filas=0;
    columnas=0;

    printf("Ingresar el tamaño de las filas (Maximo %d): ",MaximoNumeroFilas);
    scanf("%d",&filas);

    printf("Ingresar el tamaño de las columnas (Maximo %d): ",MaximoNumeroColumnas);
    scanf("%d",&columnas);

    if(filas>MaximoNumeroFilas || columnas>MaximoNumeroColumnas)
    {
      printf("Error: Tamaño invalido.\n");
      return 1;
    }

    // Cargar elementos de la matriz
    for(i=0;i<filas;i++)
    {
      for(j=0;j<columnas ;j++)
      {
          printf("Ingrese el elemento [%d][%d]: ",i,j);
          scanf("%d",&Matriz[i][j]);
      }
    }

    printf("Matriz Ingresada: \n");
    // Visualizar matriz
    for(i=0;i<filas;i++)
    {
      for(j=0;j<columnas ;j++)
      {
          printf("[%d] ",Matriz[i][j]);
      }
      printf("\n");
    }


    return 0;
}
