//Libreria
#include <stdio.h>
#include <conio.h>

//Funcion Principal
void main()
{
    //Asignar Variable
    int Numero;
    int Numero2;
    int Suma;
    //Inicializacion de Variable
    Numero=0;
    Numero2=0;
    Suma=0;
    //Logica
    printf("Suma de Dos Numeros\n");
    printf("Ingresa Primer Numero a Sumar:\n");
    scanf ("%d",&Numero);
    printf("Ingresa Segundo Numero a Sumar:\n");
    scanf ("%d",&Numero2);
    Suma= Numero + Numero2;
    //Mostrar resultado en pantalla
    printf("La suma de %d y %d es: %d\n", Numero, Numero2, Suma);
    getch();
}
