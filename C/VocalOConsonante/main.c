#include <stdio.h>

int main()
{
    char Letra;

    printf("Ingrese una letra a identificar\n");
    scanf("%c", &Letra);

    if (Letra == "a" || Letra == "e" || Letra == "i" || Letra == "o" || Letra == "u") {
        printf("Es una vocal.\n");
    }
    else {
        printf("Es una consonante\n");
    }

    return 0;
}
