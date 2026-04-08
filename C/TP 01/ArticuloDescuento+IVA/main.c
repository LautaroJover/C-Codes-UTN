#include <stdio.h>
#include <conio.h>

int main()
{
    //inicializar Varibales
    float precio_original = 0;
    float precio_descuento = 0;
    float precio_final = 0;

    // Solicita el precio original al usuario
    printf("Ingrese el precio original del articulo:\n");
    scanf("%f", &precio_original);

    // Calcula el precio con 20% de descuento
    precio_descuento = precio_original * 0.80;

    // Calcula el precio final con 15% de IVA
    precio_final = precio_descuento * 1.15;

    // Muestra los resultados en pantalla al usuario
    printf("Precio con descuento aplicado (20%): %f\n", precio_descuento);
    printf("Precio final con IVA + Descuento (15%): %f\n", precio_final);
    getch();
    return 0;
}
