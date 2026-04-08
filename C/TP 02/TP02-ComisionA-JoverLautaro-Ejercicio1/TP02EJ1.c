#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

// 1. Ingresar tamano del vector (por valor)
void ingresarTamano(int tam) {
    do {
        printf("Ingrese el tamano del vector (entre 2 y 100): ");
        scanf("%d", &tam);
    } while (tam < 2 || tam > 100);
    printf("Tamano registrado (no afecta afuera por paso por valor): %d\n", tam);
}

// 2. Generar numeros aleatorios (por direccion)
void generarAleatorios(int *vec, int tam) {
    srand(time(NULL));
    for (int i = 0; i < tam; i++) {
        *(vec + i) = rand() % 100 + 1;
    }
}

// 3. Calcular promedio y media (por copia, devuelve promedio)
float calcularPromedio(int vec[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += vec[i];
    }
    return (float)suma / tam;
}

// 4. Ordenar ascendente (por copia)
// Metodo: Burbuja (Bubble Sort)
void ordenarAsc(int vec[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vec[i] > vec[j]) {
                int aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}

// 4. Ordenar descendente (por copia)
// Metodo: Burbuja (Bubble Sort)
void ordenarDesc(int vec[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vec[i] < vec[j]) {
                int aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
}

// 5. Buscar binariamente un valor (por valor, devuelve posicion)
int busquedaBinaria(int vec[], int tam, int valor) {
    int inicio = 0, fin = tam - 1, medio;
    while (inicio <= fin) {
        medio = (inicio + fin) / 2;
        if (vec[medio] == valor) return medio;
        else if (valor < vec[medio]) fin = medio - 1;
        else inicio = medio + 1;
    }
    return -1;
}

// Muestrar el vector con sus posiciones (indices) desde 0
void mostrarVector(int vec[], int tam) {
    printf("Contenido del vector:\n");
    for (int i = 0; i < tam; i++) {
        printf("Posicion [%d]: %d\n", i, vec[i]);
    }
}

// Main con menu
int main() {
    int vector[MAX];       // Arreglo principal de numeros enteros
    int tam;               // Variable que guarda el tamaño del vector
    int opcion;            // Opcion elegida por el usuario en el menu
    int valor;             // Valor que el usuario quiere buscar en el vector
    int pos;               // Posicion en la que se encuentra el valor buscado (si se encuentra)
    float promedio;        // Resultado del promedio de los elementos del vector

    printf("Ingrese el tamano del vector: ");
    scanf("%d", &tam);
    while (tam < 2 || tam > 100) {
        printf("Valor invalido. Intente de nuevo: ");
        scanf("%d", &tam);
    }

    do {
        printf("\n----- MENU -----\n");
        printf("1. Generar aleatorios\n");
        printf("2. Mostrar vector\n");
        printf("3. Calcular promedio\n");
        printf("4. Ordenar ascendente\n");
        printf("5. Ordenar descendente\n");
        printf("6. Buscar un valor (busqueda binaria)\n");
        printf("7. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
        case 1:
            generarAleatorios(vector, tam);
            printf("Vector generado.\n");
            break;
        case 2:
            mostrarVector(vector, tam);
            break;
        case 3:
            promedio = calcularPromedio(vector, tam);
            printf("Promedio de todo el vector: %f\n", promedio);
            break;
        case 4:
            ordenarAsc(vector, tam);
            printf("Vector ordenado ascendentemente.\n");
            break;
        case 5:
            ordenarDesc(vector, tam);
            printf("Vector ordenado descendentemente.\n");
            break;
        case 6:
            printf("Ingrese el valor a buscar: ");
            scanf("%d", &valor);
            ordenarAsc(vector, tam); // Busqueda binaria necesita vector ordenado
            pos = busquedaBinaria(vector, tam, valor);
            if (pos != -1)
                printf("Valor %d encontrado en la posicion %d.\n", valor, pos);
            else
                printf("Valor no encontrado.\n");
            break;
        case 7:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opcion invalida. Intente nuevamente.\n");
        }

    } while (opcion != 7);

    return 0;
}
