#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

#define MAX_PALABRAS 5
#define MAX_LONGITUD 20
#define MAX_INTENTOS 6

// Función para seleccionar una palabra al azar
void seleccionarPalabra(char palabraSecreta[]) {
    const char *palabras[MAX_PALABRAS] = {"gato", "computadora", "programa", "ahorcado", "casa"};
    srand(time(NULL));
    int indice = rand() % MAX_PALABRAS;
    strcpy(palabraSecreta, palabras[indice]);
}

// Función que dibuja el estado del ahorcado según la cantidad de intentos restantes
void dibujarAhorcado(int intentos) {
    // Imprime la base del soporte del ahorcado y la cabeza si quedan 5 o menos intentos
    printf("  -----\n  |   |\n  %c   |\n", (intentos <= 5) ? 'O' : ' ');
    // Imprime los brazos y el torso del ahorcado dependiendo de los intentos
    printf(" %c%c%c  |\n",
           (intentos <= 3) ? '/' : ' ',
           (intentos <= 4) ? '|' : ' ',
           (intentos <= 2) ? '\\' : ' ');
    // Imprime las piernas del ahorcado si los intentos llegan a 1 o 0
    printf(" %c %c  |\n",
           (intentos <= 1) ? '/' : ' ',
           (intentos == 0) ? '\\' : ' ');
    // Parte inferior de la estructura del ahorcado
    printf("      |\n=========\n");
}

// Muestra el progreso actual y retorna 1 si ganó, 0 si no
int mostrarProgreso(char palabraSecreta[], int letrasAdivinadas[]) {
    int ganado = 1;
    printf("Palabra: ");
    for (int i = 0; i < strlen(palabraSecreta); i++) {
        if (letrasAdivinadas[i]) {
            printf("%c ", palabraSecreta[i]);
        } else {
            printf("_ ");
            ganado = 0;
        }
    }
    printf("\n");
    return ganado;
}

int main() {
    char palabraSecreta[MAX_LONGITUD];
    int letrasAdivinadas[MAX_LONGITUD] = {0};
    int intentos = MAX_INTENTOS;
    char letra;

    seleccionarPalabra(palabraSecreta);
    int longitud = strlen(palabraSecreta);

    printf("Bienvenido al juego del Ahorcado!\n");

    while (intentos > 0) {
        dibujarAhorcado(intentos);
        if (mostrarProgreso(palabraSecreta, letrasAdivinadas)) {
            printf("Felicidades! Has adivinado la palabra: %s\n", palabraSecreta);
            break;
        }

        printf("Introduce una letra: ");
        scanf(" %c", &letra);

        int letraCorrecta = 0;
        for (int i = 0; i < longitud; i++) {
            if (palabraSecreta[i] == letra && !letrasAdivinadas[i]) {
                letrasAdivinadas[i] = 1;
                letraCorrecta = 1;
            }
        }

        if (!letraCorrecta) {
            intentos--;
            printf("Letra incorrecta. Te quedan %d intentos.\n", intentos);
        }
    }

    if (intentos == 0) {
        dibujarAhorcado(intentos);
        printf("Has perdido! La palabra era: %s\n", palabraSecreta);
    }

    getch();
    return 0;
}
