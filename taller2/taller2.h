#ifndef taller2_H
#define taller2_H

#define MAX_PRODUCTOS 10
#define MAX_NOMBRE 50

// Funciones para el manejo del inventario
void ingresarProductos(char nombres[][MAX_NOMBRE], float precios[], int n);
float calcularTotal(float precios[], int n);
void encontrarMasCaroYMasBarato(char nombres[][MAX_NOMBRE], float precios[], int n, char* masCaro, char* masBarato);
float calcularPromedio(float precios[], int n);
float buscarProducto(char nombres[][MAX_NOMBRE], float precios[], int n, char nombreBuscado[]);

#endif
