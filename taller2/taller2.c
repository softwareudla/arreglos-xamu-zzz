#include <stdio.h>
#include <string.h>
#include "taller2.h"

// Función para ingresar los productos
void ingresarProductos(char nombres[][MAX_NOMBRE], float precios[], int n) {
    for (int i = 1; i < n; i++) {
        printf("Ingrese el nombre del producto %d: ", i );
        scanf(" %[^\n]", nombres[i]);
        printf("\nIngrese el precio del producto %d: ", i );
        scanf("%f", &precios[i]);
    }
}

// Función para calcular el total del inventario
float calcularTotal(float precios[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += precios[i];
    }
    return total;
}

// Función para encontrar el producto más caro y el más barato
void encontrarMasCaroYMasBarato(char nombres[][MAX_NOMBRE], float precios[], int n, char* masCaro, char* masBarato) {
    int indiceMasCaro = 0;
    int indiceMasBarato = 0;
    
    for (int i = 1; i < n; i++) {
        if (precios[i] > precios[indiceMasCaro]) {
            indiceMasCaro = i;
        }
        if (precios[i] < precios[indiceMasBarato]) {
            indiceMasBarato = i;
        }
    }

    strcpy(masCaro, nombres[indiceMasCaro]);
    strcpy(masBarato, nombres[indiceMasBarato]);
}

// Función para calcular el precio promedio
float calcularPromedio(float precios[], int n) {
    float total = calcularTotal(precios, n);
    return total / n;
}

// Función para buscar un producto por nombre y mostrar su precio
float buscarProducto(char nombres[][MAX_NOMBRE], float precios[], int n, char nombreBuscado[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(nombres[i], nombreBuscado) == 0) {
            return precios[i];
        }
    }
    return -1;  // Indica que no se encontró el producto
}
