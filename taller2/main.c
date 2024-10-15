#include <stdio.h>
#include "taller2.h"

int main() {
    char nombres[MAX_PRODUCTOS][MAX_NOMBRE];
    float precios[MAX_PRODUCTOS];
    int numProductos;
    
    printf("Ingrese el numero de productos (maximo %d): ", MAX_PRODUCTOS);
    scanf("%d", &numProductos);

    if (numProductos > MAX_PRODUCTOS) {
        printf("El numero maximo de productos es %d.\n", MAX_PRODUCTOS);
        return 1;
    }

    // Ingresar productos
    ingresarProductos(nombres, precios, numProductos);

    // Calcular total del inventario
    float total = calcularTotal(precios, numProductos);
    printf("El precio total del inventario es: %.2f\n", total);

    // Encontrar el producto más caro y más barato
    char masCaro[MAX_NOMBRE], masBarato[MAX_NOMBRE];
    encontrarMasCaroYMasBarato(nombres, precios, numProductos, masCaro, masBarato);
    printf("El producto más caro es: %s\n", masCaro);
    printf("El producto más barato es: %s\n", masBarato);

    // Calcular el promedio de precios
    float promedio = calcularPromedio(precios, numProductos);
    printf("El precio promedio de los productos es: %.2f\n", promedio);

    // Buscar un producto por su nombre
    char nombreBuscado[MAX_NOMBRE];
    printf("Ingrese el nombre del producto a buscar: ");
    scanf(" %[^\n]", nombreBuscado);

    float precioBuscado = buscarProducto(nombres, precios, numProductos, nombreBuscado);
    if (precioBuscado >= 0) {
        printf("El precio de %s es: %.2f\n", nombreBuscado, precioBuscado);
    } else {
        printf("Producto no encontrado.\n");
    }

    return 0;
}
