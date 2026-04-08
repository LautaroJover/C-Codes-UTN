//Librerías
#include <stdio.h>
#include <conio.h>

//Función Principal
void main()
{
    //Declaración de Variables
    int Celsius;
    int Fahrenheit;

    //Inicialización
    Celsius = 0;
    Fahrenheit = 0;

    //Entrada de datos
    printf("Conversión de Celsius a Fahrenheit\n");
    printf("Ingrese la temperatura en grados Celsius:\n");
    scanf("%d", &Celsius);

    //Cálculo
    Fahrenheit = (Celsius * 9 / 5) + 32;

    //Resultado
    printf("La temperatura en Fahrenheit es: %d\n", Fahrenheit);
    getch();
}
