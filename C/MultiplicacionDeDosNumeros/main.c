//Libreria
#include <stdio.h>
#include <conio.h>

//Funcion Principal
void main()
{
    //Asignar Variable
    int Numero;
    int Numero2;
    int Multiplicacion;
    //Inicializacion de Variable
    Numero=0;
    Numero2=0;
    Multiplicacion=0;
    //Logica
    printf("Multiplicacion de Dos Numeros\n");
    printf("Ingresa Primer Numero a Multiplicar:\n");
    scanf ("%d",&Numero);
    printf("Ingresa Segundo Numero a Multiplicar:\n");
    scanf ("%d",&Numero2);
    Multiplicacion= Numero * Numero2;
    //Mostrar resultado en pantalla
    printf("La Multiplicacin de %d y %d es: %d\n", Numero, Numero2, Multiplicacion);
    getch();
}
