#include <stdio.h>

int main() {
    int opcion;
    opcion = 0;

    printf("Calculadora de meses a dias\n");
    printf("Ingrese un mes del año (1 al 12): ");
    scanf("%d", &opcion);

    switch (opcion) {
    case 1:
        printf("Enero tiene 31 días.\n");
        break;
    case 2:
        printf("Febrero tiene 28 días (o 29 en años bisiestos).\n");
        break;
    case 3:
        printf("Marzo tiene 31 días.\n");
        break;
    case 4:
        printf("Abril tiene 30 días.\n");
        break;
    case 5:
        printf("Mayo tiene 31 días.\n");
        break;
    case 6:
        printf("Junio tiene 30 días.\n");
        break;
    case 7:
        printf("Julio tiene 31 días.\n");
        break;
    case 8:
        printf("Agosto tiene 31 días.\n");
        break;
    case 9:
        printf("Septiembre tiene 30 días.\n");
        break;
    case 10:
        printf("Octubre tiene 31 días.\n");
        break;
    case 11:
        printf("Noviembre tiene 30 días.\n");
        break;
    case 12:
        printf("Diciembre tiene 31 días.\n");
        break;
    default:
        printf("Mes inválido. Por favor ingrese un número del 1 al 12.\n");
        break;
    }

    return 0;
}

