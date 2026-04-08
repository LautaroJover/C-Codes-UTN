#include <stdio.h>
#include <conio.h>

int main()
{
    //Inicializacion de variables
    int Dias;
    float CostoHotel = 0;
    float CostoComida = 0;
    float TotalHotel = 0;
    float TotalComida = 0;
    float TotalOtros = 0;
    float TotalCheque = 0;

    //Pedir los datos al usuario
    printf("Ingrese el numero de dias del viaje: \n");
    scanf("%d", &Dias);
    printf("Ingrese el costo diario del hotel: \n");
    scanf("%f", &CostoHotel);
    printf("Ingrese el costo diario que consumio de comida: \n");
    scanf("%f", &CostoComida);

    // Cálculo de montos
    TotalHotel = Dias * CostoHotel;
    TotalComida = Dias * CostoComida;
    TotalOtros = Dias * 15000.0; // Los 15000 diarios
    TotalCheque = TotalHotel + TotalComida + TotalOtros;

    // Mostrar resultado en pantalla al usuario
    printf("\nTotal del Cheque\n");
    printf("Total por hotel: $%f\n", TotalHotel);
    printf("Total por comida: $%f\n", TotalComida);
    printf("Total por otros gastos: $%f\n", TotalOtros);
    printf("Monto total del cheque: $%f\n", TotalCheque);
    getch();
    return 0;
}
