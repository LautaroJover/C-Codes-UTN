#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializacion de Variables
    int actual = 0;
    int suma = 0;
    int incremento = 2;     // El incremento se alternara entre 2 y 3

    // Repetir mientras el valor actual no supere 1800
    while (actual <= 1800)
    {
        // Sumar el término actual a la sumatoria
        suma = suma + actual;
        // Calcular el siguiente término sumando 2 o 3
        actual = actual + incremento;
        // Alternar el incremento entre 2 y 3 con condicional
        if (incremento == 2)
        {
            incremento = 3;
        }
        else
        {
            incremento = 2;
        }
    }
    // Mostrar Resultado en pantalla al usuario
    printf("\nLa sumatoria de la serie 0, 2, 5, 7, 10, 12, 15, 17, 20, hasta 1800 es: %d\n", suma);
    getch();
    return 0;
}

