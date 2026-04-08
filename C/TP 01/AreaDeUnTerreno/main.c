#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializar Variables
    float A = 0;
    float B = 0;
    float C = 0;
    float Area = 0;

    // Solicita datos al usuario
    printf("Ingrese el valor de A: ");
    scanf("%f", &A);
    printf("Ingrese el valor de B: ");
    scanf("%f", &B);
    printf("Ingrese el valor de C: ");
    scanf("%f", &C);

    // Validar que C no sea mayor que A
    if (C > A)
    {
        printf("Error: C no puede ser mayor que A.\n");
    }
    else
    {
    // Calcula el área
    Area = (0.5 * B * (A - C)) + (B * C);
    // Muestra el resultado en pantalla al usuario
    printf("El area del terreno es: %f unidades cuadradas.\n", Area);
    }
    getch();
    return 0;
}
