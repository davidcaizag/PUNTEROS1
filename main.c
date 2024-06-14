#include <stdio.h>
#include "funciones.h"

int main(){
    int e, x, h;
    char nombre[20], direccion[40], telefono[20];
    int *edad=&e, *experiencia=&x, *numhijos=&h;
    leernombre(nombre);
    printf("el nombre ingresado es:%s", &nombre);
    leerdireccion(direccion);
    leertelefono(telefono);
    leeredad(edad);
    leerexperiencia(experiencia);
    leernumhijos(numhijos);
    imprimirCV(nombre, direccion, telefono, edad, experiencia, numhijos);

    return 0;
}