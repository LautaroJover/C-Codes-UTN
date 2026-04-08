#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    int l;
    int VectorUser[l];
    int VectorUser2[l];
    int VectorSuma[l];
    printf("Escalar o Multiplicacion de 2 Vectores\n Ingrese la longitud de sus 2 vectores:\n");
    scanf("%d", &l);

    printf("Ingrese los numeros de su primer vector\n");
    for(i=0;i<l;i++)
    {
        scanf("%d", &VectorUser[i]);
    }
    printf("Ingrese los numeros de su segundo vector\n");
    for(i=0;i<l;i++)
    {
        scanf("%d", &VectorUser2[i]);
    }
    printf("El Vector Resultante es:\n");
    for(i=0;i<l;i++)
    {
        VectorSuma[i]= VectorUser[i] * VectorUser2[i];
        printf("[%d] ", VectorSuma[i]);
    }
    getch();
    return 0;
}
