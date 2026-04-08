#include <stdio.h>

int main()
{
    int NumUser1; //Numero ingresado por el usuario
    int NumUser2; //Numero ingresado por el usuario 2
    NumUser1=0;
    NumUser2=0;

    printf("Calculadora derivar 2 numeros al mayor y menor!\n");
    printf("Ingrese su primer numero\n");
    scanf("%d", &NumUser1);
    printf("Ingrese su segundo numero\n");
    scanf("%d", &NumUser2);

    if (NumUser1 < NumUser2) {
        printf("El %d es mayor que %d: \n",NumUser2, NumUser1);
    }
    else {
        printf("El %d es mayor que %d:\n",NumUser1, NumUser2);
    }

    return 0;
}
