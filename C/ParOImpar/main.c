#include <stdio.h>

int main()
{
    int Numero;
    Numero=0;

    printf("Ingrese su numero\n");
     scanf("%d", &Numero);

    if (Numero % 2 == 0) {
        printf("Tu numero es par\n");
    }
    else {
    printf("Tu numero es impar\n");
    }
    getchar;

return 0;
}
