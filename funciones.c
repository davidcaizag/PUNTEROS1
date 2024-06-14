#include <stdio.h>
#include "funciones.h"

void leernombre(char nombre[]) {
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
}

void leerdireccion(char direccion[]) {
    printf("Ingrese su dirección: ");
    scanf("%s", direccion);
}

void leertelefono(char telefono[]) {
    printf("Ingrese su número de teléfono: ");
    scanf("%s", telefono);
}

void leeredad(int *edad) {
    printf("Ingrese su edad: ");
    scanf("%d", edad);
}

void leerexperiencia(int *experiencia) {
    printf("Ingrese años de experiencia laboral: ");
    scanf("%d", experiencia);
}

void leernumhijos(int *numhijos) {
    printf("Ingrese número de hijos: ");
    scanf("%d", numhijos);
}

void imprimirCV(char nombre[], char direccion[], char telefono[], int *edad, int *experiencia, int *numhijos) {
    printf("Nombre: %s\n", nombre);
    printf("Dirección: %s\n", direccion);
    printf("Teléfono: %s\n", telefono);
    printf("Edad: %d\n", *edad);
    printf("Experiencia Laboral (en años): %d\n", *experiencia);
    printf("Número de Hijos: %d\n", *numhijos);
}
