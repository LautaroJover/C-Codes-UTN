//Librerías
#include <stdio.h>
#include <conio.h>

//Función Principal
void main()
{
    //Declaración de Variables
    int Numero;
    int Cuadrado;
    int Cubo;

    //Encabezado de Tabla
    printf("numero\tcuadrado\tcubo\n");

    //Lógica para calcular del 0 al 10
    for(Numero = 0; Numero <= 10; Numero++)
    {
        Cuadrado = Numero * Numero;
        Cubo = Numero * Numero * Numero;
        printf("%d\t%d\t\t%d\n", Numero, Cuadrado, Cubo);
    }

    //Pausa para ver resultados
    getch();
}
