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
    printf("Calculadora de Área de un Rectángulo\n");
    printf("Ingrese la base del rectángulo:\n");
    scanf("%d", &Base);
    printf("Ingrese la altura del rectángulo:\n");
    scanf("%d", &Altura);

    //Cálculo
    Area = Base * Altura;

    //Resultado
    printf("El área del rectángulo es: %d\n", Area);
    getch();
}
