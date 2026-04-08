#include <stdio.h>
#include <conio.h>
#define n 4
int main()
{
    int m[n][n];
    int pos1,pos2,numuser;
    int b=0,k=0; //Banderas
    for(int f=0; f<n; f++)
    {
        for(int c=0; c<n; c++)
        {
            printf("Ingrese el elemento en la posicion [%d][%d]",f,c);
            scanf("%d",&m[f][c]);

        }
    }

    printf("Ingrese el numero a buscar:\n");
    scanf("%d",&numuser);

    for(int f=0; f<n; f++)
    {
        for(int c=0; c<n; c++)
        {
            if(m[f][c]==numuser)
            {
                b=1;
                if(k==0 && b==1) //Ambas condiciones tienen que ser verdaderas
                {
                    k=1;
                    pos1=f;
                    pos2=c;
                }
            }

        }
    }
    if(b==1)
    {
        printf("El numero fue encontrado en la matriz y la primera vez estuvo en la posicion [%d][%d].",pos1,pos2);
    }
    else
    {
        printf("El numero no fue encontrado.");
    }
    getch();
    return 0;
}
