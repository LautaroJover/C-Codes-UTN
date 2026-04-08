#include <stdio.h>
#include <conio.h>

int main() {
    char cadena[1000];
    int i = 0, contador = 0;

    printf("Ingrese una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin); // Lee la cadena con espacios

    while (cadena[i] != '\0') // al final de cadena de texto esta \0
    {
        //minusculas
        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' )
        {
            contador++;
        }
        //mayusculas
        if (cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U')
        {
            contador++;
        }
        i++;
    }
    printf("Cantidad de vocales: %d\n", contador);
    getch();
    return 0;
}
