#include <stdio.h>

int main()
{
    int Calificacion;
    Calificacion=0;

    printf("Ingrese el resultado de su examen (0-100)\n");
    scanf("%d", &Calificacion);

    if (Calificacion < 0 || Calificacion > 100) {
        printf("Error: la calificación debe estar entre 0 y 100.\n");
    }
    else if (Calificacion >= 60) {
        printf("Estas aprobado\n");
    }
    else {
        printf("No estas Aprobado\n");
    }
    getchar;
    return 0;
}
