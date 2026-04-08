#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p = a;  // p apunta al primer elemento del vector
    int i;
    for (i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(p + i));
    }
    return 0;
}
