//Libreria
#include <stdio.h>
#include <conio.h>

//Funcion Principal
void main()
{
    //Asignar Variable
    int Numero;
    //Inicializacion de Variable
    Numero=0;
    //Logica
    printf("Conversor de Numero Entero a Hexadecimal\n");
    printf("Escribir un numero entero:\n");
    scanf ("%d",&Numero);
    //Mostrar resultado en pantalla
    printf("El Numero Hexadecimal correspondiente al %d es: %x\n", Numero, Numero);
    getch();
}
