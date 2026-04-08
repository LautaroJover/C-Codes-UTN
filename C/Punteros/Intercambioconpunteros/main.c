#include <stdio.h>
#include <conio.h>
int main()
{
    int a = 100;
    int b = 50;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int aux;

    printf("SIN INTERCAMBIO\n");
    printf("Valor de a=%d y b=%d\n",a,b);

    aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;

    printf("INTERCAMBIO\n");
    printf("Valor de a=%d y b=%d\n",a,b);
    getch();
    return 0;
}
