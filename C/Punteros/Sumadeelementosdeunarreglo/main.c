#include <stdio.h>
#include <conio.h>
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;  // p apunta al primer elemento del vector
    int b;
    int *p2 = &b;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(p + i));
        *p2 = *p2 + a[i];
    }
    printf("La suma de todos los elementos del vector es: %d\n",*p2);
    getch();
    return 0;
}
