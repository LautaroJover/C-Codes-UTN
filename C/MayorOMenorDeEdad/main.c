#include <stdio.h>

int main()
{
    int edad;
    edad=0;

    printf("Para ingresar inserte su edad!\n");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    }
    else {
        printf("Eres menor de edad\n");
    }

    return 0;
}
