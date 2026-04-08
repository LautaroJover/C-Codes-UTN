#include <stdio.h>
#include <conio.h>
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;  // p apunta al primer elemento del vector
    int m;
    int *p2 = &m;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(p + i));
        if (*p2 < a[i])
        {
            *p2 = a[i];
        }
    }
    printf("El mayor elemento del arreglo es: %d\n",*p2);
    getch();
    return 0;
}
