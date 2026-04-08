//Librerías
#include <stdio.h>
#include <conio.h>

//Función Principal
void main()
{
    //Declaración de Variables
    int Base;
    int Altura;
    int Area;

    //Inicialización
    Base = 0;
    Altura = 0;
    Area = 0;

    //Entrada de datos
    printf("Calculadora de Área de un Triángulo\n");
    printf("Ingrese la base del triángulo:\n");
    scanf("%d", &Base);
    printf("Ingrese la altura del triángulo:\n");
    scanf("%d", &Altura);

    //Cálculo
    Area = (Base * Altura) / 2;

    //Resultado
    printf("El área del triángulo es: %d\n", Area);
    getch();
}
