//Libreria
#include <stdio.h>
#include <conio.h>

//Funcion Principal
void main()
{
    //Asignar Variable
    float Numero;
    //Inicializacion de Variable
    Numero=0;
    // Solicitar número en notación científica
    printf("Ingrese un numero en notacion cientifica (ej: 1.23e4):\n");
    scanf("%e", &Numero);
    // Imprimir número recibido (también en notación científica)
    printf("El numero ingresado en notacion cientifica es: %e\n", Numero);
    getch();
}
