#include <stdio.h>

int main() {
    // Declarar variables
    int numero, contador = 1;

    // Pedir al usuario que ingrese un número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    // Imprimir todos los números naturales desde 1 hasta el número ingresado
    while (contador <= numero) {
        printf("%d\n", contador);
        contador++; // Incrementar el contador en cada iteración
    }

    return 0;
}
