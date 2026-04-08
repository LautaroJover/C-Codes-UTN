//Librerías
#include <stdio.h>
#include <conio.h>

//Función Principal
void main()
{
    //Declaración de Variables
    int Radio;
    int Area;
    int Circunferencia;
    float PI = 3.1416;

    //Inicialización
    Radio = 0;
    Area = 0;
    Circunferencia = 0;

    //Entrada de datos
    printf("Cálculo de Área y Circunferencia de un Círculo\n");
    printf("Ingrese el radio del círculo:\n");
    scanf("%d", &Radio);

    //Cálculo
    Area = PI * Radio * Radio;
    Circunferencia = 2 * PI * Radio;

    //Resultado
    printf("El área del círculo es: %d\n", Area);
    printf("La circunferencia del círculo es: %d\n", Circunferencia);
    getch();
}
