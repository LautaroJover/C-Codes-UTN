#include <stdio.h>

int main()
{
    int opcion = 0; //Numero ingresado para elegir opcion
    int NumUser1 = 0;
    int NumUser2 = 0;
    int Resultado = 0;

    printf("\nMenu Calculadora\n 1. Sumar\n 2. Resta\n 3. Multiplicar\n 4. Dividir\n ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Suma de Dos Numeros\n");
            printf("Ingresa Primer Numero a Sumar:\n");
            scanf ("%d",&NumUser1);
            printf("Ingresa Segundo Numero a Sumar:\n");
            scanf ("%d",&NumUser2);
            Resultado = NumUser1 + NumUser2;
            printf("La suma de %d y %d es: %d\n", NumUser1, NumUser2, Resultado);
            break;
        case 2:
            printf("Resta de Dos Numeros\n");
            printf("Ingresa Primer Numero a Restar:\n");
            scanf ("%d",&NumUser1);
            printf("Ingresa Segundo Numero a Restar:\n");
            scanf ("%d",&NumUser2);
            Resultado = NumUser1 - NumUser2;
            printf("La resta de %d y %d es: %d\n", NumUser1, NumUser2, Resultado);
            break;
        case 3:
            printf("Multiplicacion de Dos Numeros\n");
            printf("Ingresa Primer Numero a Multiplicar:\n");
            scanf ("%d",&NumUser1);
            printf("Ingresa Segundo Numero a Multiplicar:\n");
            scanf ("%d",&NumUser2);
            Resultado = NumUser1 * NumUser2;
            printf("La multiplicacion de %d y %d es: %d\n", NumUser1, NumUser2, Resultado);
            break;
        case 4:
            printf("Division de Dos Numeros\n");
            printf("Ingresa Primer Numero a Dividir:\n");
            scanf ("%d",&NumUser1);
            printf("Ingresa Segundo Numero a Dividir:\n");
            scanf ("%d",&NumUser2);
            Resultado = NumUser1 / NumUser2;
            printf("La resta de %d y %d es: %d\n", NumUser1, NumUser2, Resultado);
            break;
        default:
            printf("Opcion Invalida\n");
            break;
    }
    getchar;
    return 0;
}
