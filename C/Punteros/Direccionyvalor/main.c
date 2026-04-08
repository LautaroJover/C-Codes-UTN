#include <stdio.h>
#include <conio.h>

int main()
{
    int num1 = 10;
    int *ptr1;

    ptr1 = &num1;
    printf("Direccion Memoria de num1: %d\n", &num1);
    printf("Valor variable num1: %d\n", num1);
    printf("El puntero esta apuntando al valor: %d\n",*ptr1);
    getch();
    return 0;
}
