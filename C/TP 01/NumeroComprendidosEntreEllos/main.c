#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializacion de variables (NumUser = Numero ingresado por el usuario)
    int NumUser1 = 0;
    int NumUser2 = 0;
    int i = 0;

    // Leer dos números enteros ingresados por el usuario
    printf("Introduce el primer numero entero: ");
    scanf("%d", &NumUser1);

    printf("Introduce el segundo numero entero: ");
    scanf("%d", &NumUser2);

    // Verificar si hay números entre ellos y Mostrar resultados en pantalla al usuario
    if (NumUser1 == NumUser2)
    {
        printf("No hay numeros entre %d y %d porque son iguales.\n", NumUser1, NumUser2);
    }
    else if (NumUser1 < NumUser2)
    {
        printf("Numeros entre %d y %d:\n", NumUser1, NumUser2);
        for (i = NumUser1 + 1; i < NumUser2; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        printf("Numeros entre %d y %d:\n", NumUser2, NumUser1);
        for (i = NumUser2 + 1; i < NumUser1; i++)
        {
            printf("%d ", i);
        }
    }
    getch();
    return 0;
}
