#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializacion de Variables
    float metros = 0;
    float pulgadas = 0;
    float conversion = 0.0254; //(1 pulgada = 0.0254 m).
    //Pedir datos al usuario
    printf("Conversor de Metros a pulgadas\n");
    printf("Ingrese la cantidade metros a convertir:\n");
    scanf("%f", &metros);
    //Condicional: Verificacion metros no sean negativo
    if (metros < 0)
    {
        printf("La cantidad de metros no puede ser negativa");
    }
    else
    {
        pulgadas = metros / conversion;
        //Mostrar resultado en pantalla al usuario
        printf("La cantidad de pulgadas son %f\n", pulgadas);
    }
    getch();
    return 0;
}
