#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializacion de Variables
    float Examen1 = 0; //Son las notas de los examnes que va ingresar el usuario
    float Examen2 = 0;
    float Examen3 = 0;
    float Promedio1 = 0; //Variable Auxiliar que contiene el promedio entre el examen 1 y 2
    float PromedioTotal = 0;
    //Pedir los datos al usuario
    printf("Calculador de promedio en 3 Examenes\n");
    printf("1 y 2 Examen valen el 25% y el 3 Examen el 50%\n");
    printf("Ingrese la nota del primer examen:\n");
    scanf("%f", &Examen1);
    printf("Ingrese la nota del primer examen:\n");
    scanf("%f", &Examen2);
    printf("Ingrese la nota del primer examen:\n");
    scanf("%f", &Examen3);
    //Condicional verificar que no haya notas negativas
    if (Examen1 < 0 || Examen2 < 0 || Examen3 < 0)
    {
        printf("No se pueden ingresar notas negativas\n");
    }
    else
    {
        // 25% + 25% de el examen 1 y 2
        Promedio1 = (Examen1 + Examen2) / 2;
        // 50% + 50% dividido para obtener el Promedio total
        PromedioTotal = (Promedio1 + Examen3) / 2;
        //Mostrar resultado en pantalla al usuario
        printf("El promedio total de los 3 examenes es %f\n", PromedioTotal);
    }
    getch();
    return 0;
}
