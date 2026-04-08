#include <stdio.h>

int main()
{
    int NumUser1 = 0;
    int NumUser2 = 0;
    int NumUser3 = 0;
    int ResultadoLados = 0;

    printf("Aplicacion de Creacion Triangulo!\n");
    printf("Ingrese el valor de su primer lado\n");
    scanf("%d", &NumUser1);
    printf("Ingrese el valor de su segundo lado\n");
    scanf("%d", &NumUser2);
    printf("Ingrese el valor de su tercer lado\n");
    scanf("%d", &NumUser3);

    ResultadoLados = NumUser1 + NumUser2;

    if (ResultadoLados >= NumUser3) {
        printf("Si tu triangulo es valido\n");
    }
    else {
        printf("Su triangulo no es valido, la suma de los dos primeros lados es %d y no es mayor que el tercer lado que es %d:\n",ResultadoLados, NumUser3);
    }

    return 0;
}
