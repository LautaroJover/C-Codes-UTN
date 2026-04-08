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
    printf("Conversor de Numero Entero a Codigo ASCII\n");
    printf("Escribir un numero entero del (00 al 255):\n");
    scanf ("%d",&Numero);
    //Mostrar resultado en pantalla
    printf("El caracter ASCII correspondiente al numero entero %d es: %c\n", Numero, Numero);
    getch();
}
