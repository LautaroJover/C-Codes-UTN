#include <stdio.h>
#define l 15
int main()
{
    int v[l];
    int NumUser;
    int Contador=0;
    int i;
    printf("Ingrese los numeros del vector\n");
    for(i=0;i<l;i++)
    {
        scanf("%d", &v[i]);
    }
    printf("Tu vector es\n");
    for(i=0;i<l;i++)
    {
        printf("[%d] ", v[i]);
    }
    printf("\nIngrese el numero a buscar\n");
    scanf("%d", &NumUser);
    for(i=0;i<l;i++)
    {
        if (v[i]==NumUser)
        {
            Contador++;
        }
    }
    if (Contador==0)
    {
        printf("El numero %d no aparece en tu vector",NumUser);
    }
    else
    {
        printf("El numero %d aparece %d veces en tu vector",NumUser,Contador);
    }
    return 0;
}
