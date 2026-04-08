#include <stdio.h>
#include <conio.h>
#define n 10
int main()
{
    int menor;
    int mayor;
    int v[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("[%d] ", v[i]);
    }
    menor = v[0];
    mayor = v[0];
    for(i=0;i<n;i++)
    {
        if (v[i]>mayor)
        {
            mayor = v[i];
        }
        else if (v[i]<menor)
        {
            menor = v[i];
        }
    }
    printf("\nMayor Numero del Vector es %d y el menor %d\n", mayor, menor);
    getch();
    return 0;
}
