#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializacion de Variables (NumUser = Numero sera ingresado por el usuario)
    int NumUser10 = 0;
    int NumUser1 = 0;
    int NumUser2 = 0;
    int NumUser3 = 0;
    int NumUser4 = 0;
    int NumUser5 = 0;
    int NumUser6 = 0;
    int NumUser7 = 0;
    int NumUser8 = 0;
    int NumUser9 = 0;
    //Pedir datos al usuario
    printf("Separador de numeros pares y impares \n");
    printf("ingrese su 1 numero: \n");
    scanf("%d. \n",&NumUser1);
    printf("ingrese su 2 numero: \n");
    scanf("%d. \n",&NumUser2);
    printf("ingrese su 3 numero: \n");
    scanf("%d. \n",&NumUser3);
    printf("ingrese su 4 numero: \n");
    scanf("%d. \n",&NumUser4);
    printf("ingrese su 5 numero: \n");
    scanf("%d. \n",&NumUser5);
    printf("ingrese su 6 numero: \n");
    scanf("%d. \n",&NumUser6);
    printf("ingrese su 7 numero: \n");
    scanf("%d. \n",&NumUser7);
    printf("ingrese su 8 numero: \n");
    scanf("%d. \n",&NumUser8);
    printf("ingrese su 9 numero: \n");
    scanf("%d. \n",&NumUser9);
    printf("ingrese su 10 numero: \n");
    scanf("%d. \n",&NumUser10);

    printf("Numeros Ingresados: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d \n", NumUser10, NumUser1, NumUser2, NumUser3, NumUser4, NumUser5, NumUser6, NumUser7, NumUser8, NumUser9);

    //Escanea todos los numeros pares y los imprime si cumplen condicional
    printf("Numeros pares: ");

    if (NumUser1 % 2 == 0)
    {
        printf("%d,", NumUser1);
    }
    if (NumUser2 % 2 == 0)
    {
        printf("%d,", NumUser2);
    }
    if (NumUser3 % 2 == 0)
    {
        printf("%d,", NumUser3);
    }
    if (NumUser4 % 2 == 0)
    {
        printf("%d,", NumUser4);
    }
    if (NumUser5 % 2 == 0)
    {
        printf("%d,", NumUser5);
    }
    if (NumUser6 % 2 == 0)
    {
        printf("%d,", NumUser6);
    }
    if (NumUser7 % 2 == 0)
    {
        printf("%d,", NumUser7);
    }
    if (NumUser8 % 2 == 0)
    {
        printf("%d,", NumUser8);
    }
    if (NumUser9 % 2 == 0)
    {
        printf("%d,", NumUser9);
    }
    if (NumUser10 % 2 == 0)
    {
        printf("%d,", NumUser10);
    }

    //Escanea todos los Numeros para saber si son impares y los imprime si cumplen la condicional
    printf("\nNumeros impares: ");

    if (NumUser1 % 2 != 0)
    {
        printf("%d,", NumUser1);
    }
    if (NumUser2 % 2 != 0)
    {
        printf("%d,", NumUser2);
    }
    if (NumUser3 % 2 != 0)
    {
        printf("%d,", NumUser3);
    }
    if (NumUser4 % 2 != 0)
    {
        printf("%d,", NumUser4);
    }
    if (NumUser5 % 2 != 0)
    {
        printf("%d,", NumUser5);
    }
    if (NumUser6 % 2 != 0)
    {
        printf("%d,", NumUser6);
    }
    if (NumUser7 % 2 != 0)
    {
        printf("%d,", NumUser7);
    }
    if (NumUser8 % 2 != 0)
    {
        printf("%d,", NumUser8);
    }
    if (NumUser9 % 2 != 0)
    {
        printf("%d,", NumUser9);
    }
    if (NumUser10 % 2 != 0)
    {
        printf("%d", NumUser10);
    }
    getch();
    return 0;
}
