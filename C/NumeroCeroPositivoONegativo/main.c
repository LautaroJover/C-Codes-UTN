#include <stdio.h>

int main()
{
    int NumUser = 0;

    printf("Identificador Positivo Negativo, ingrese su numero\n");
    scanf("%d", &NumUser);

    if (NumUser == 0) {
        printf("Su numero es cero.\n");
    }
    else if(NumUser < 0) {
        printf("Su numero es negativo\n");
    }
    else {
        printf("Su numero es positivo\n");
    }

    return 0;
}
