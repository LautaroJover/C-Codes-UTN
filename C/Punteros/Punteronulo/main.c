#include <stdio.h>

int main()
{
    int *ptr = NULL;

    if (ptr == NULL)
    {
        printf("Es nulo\n");
    }
    else
    {
        printf("No es nulo y la direccion es: %p\n", ptr);
    }
    return 0;
}
