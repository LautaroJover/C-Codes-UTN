#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializacion de Varibales (NumUser = Numero ingresado por el usuario)
    int digitos = 0;
    int NumUser1 = 0;
    //Pedir al usuario lo solicitado
    printf("Ingrese un numero por el cual quiera saber la cantidades digitos\n");
    printf("Ingresos validos -9.999.999 a 9.999.999\n");
    scanf("%d", &NumUser1);
    //Condicional para ejecutar el codigo si el numero es valido
    if (NumUser1 < -9999999 || NumUser1 > 9999999)
    {
        printf ("Error: Solo numeros validos de -9.999.999 a 9.999.999\n");
    }
    else
    {
        //Estrucutura condicional
        if (NumUser1 == 0)
        {
        digitos = 1;
        }
        // Si es negativo, cambiarlo a positivo con condicional
        if (NumUser1 < 0)
        {
        NumUser1 = NumUser1 * -1;
        }
        //Sumar 1 a la variable "digito" cada vez que se puede dividir "NumUser1"
        while (NumUser1 > 0)
        {
        NumUser1 = NumUser1 / 10;
        digitos++;
        }
        //Mostrar Resultado en pantalla al usuario
        printf("Tu numero tiene %d de digitos\n", digitos);
    }
    getch();
    return 0;
}
