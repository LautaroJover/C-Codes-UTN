#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define n 5
int main()
{
    int m[n][n];
    int numuser=0;
    int opcionuser;
    int b=0,k=0;
    int pos1=0,pos2=0;
    int contador= 0;
    int vector[n];
    for (int f=0;f<n;f++) {
        for (int c= 0;c<n;c++) {
            m[f][c] = rand()% 2 + 0;
        }
    }
    while (contador<25)
    {
        printf("Mapa Asientos, Reservador=1/Disponibles=0/NoElegido=2\n");
        printf("  ");
        for (int f=0;f<n;f++) {
        vector[f]=f;
        printf("%4d", vector[f]);
        }
        printf("\n");
        for (int f=0;f<n;f++)
        {
            printf("%2d ", vector[f]);
            for (int c=0;c<n;c++) {
                printf("[%2d]", m[f][c]);
                if (m[f][c] == 1)
                {
                    contador++;
                }
            }
            printf("\n");
        }
        printf("Ingrese 0 para buscar un asiento disponible:\n");
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
        printf("Asiento disponible en la columna [%d] y fila [%d], desea reservar este asiento?\nIngrese 1=Si/2=Buscar otro asiento/3=Terminar\n",pos2,pos1);
        scanf("%d", &opcionuser);
        switch (opcionuser) {
        case 1:
            printf("Su asiento fue reservado columna[%d] y fila[%d]\n",pos2,pos1);
            m[pos1][pos2] = 1;
            k=0;
            b=0;
            contador=0;
            break;
        case 2:
            printf("Buscando otro asiento...\n");
            m[pos1][pos2] = 2;
            k=0;
            b=0;
            contador=0;
            break;
        case 3:
            contador=25;
            break;
        }
    }
    if (contador==25 && opcionuser != 3)
    printf("No hay mas asiento :C \n");
    getch();
    return 0;
}
