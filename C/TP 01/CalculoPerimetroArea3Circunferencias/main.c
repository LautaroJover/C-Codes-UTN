#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializacion de Variables (r = radio)
    float r = 0;
    float r2 = 0;
    float r3 = 0;
    float Perimetro = 0;
    float Perimetro2 = 0;
    float Perimetro3 = 0;
    float PerimetroTotal = 0;
    float Area = 0;
    float Area2 = 0;
    float Area3 = 0;
    float AreaTotal = 0;
    float PI = 3.14159265358979323846;

    printf("Calculadora de perimetro y area de 3 circunferencias\n");
    //Solicitar al Usuario el radio
    printf("Ingrese el radio de la primer circunferencia\n");
    scanf("%f", &r);
    //Parte Logica
    r2 = r * 2;
    r3 = r * 3;
    //Calculos Perimetros
    Perimetro = (2 * PI * r);
    Perimetro2 = (2 * PI * r2);
    Perimetro3 = (2 * PI * r3);
    PerimetroTotal = Perimetro + Perimetro2 + Perimetro3;
    //Calculos Area
    Area = (PI * r * r);
    Area2 = (PI * r2 * r2);
    Area3 = (PI * r3 * r3);
    AreaTotal = Area + Area2 + Area3;
    //Mostrar Resultado en pantalla al usuario
    printf("El Perimetro: es %f y el area: %f \n",PerimetroTotal, AreaTotal);
    getch();
    return 0;
}
