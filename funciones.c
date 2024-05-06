#include <stdio.h>
#include "funciones.h"

float suma(float a, float b){
    float suma = a+b;
    return suma;
}

float resta(float a, float b){
    float resta = a-b;
    return resta;
}

float multiplicacion(float a, float b){
    float mult = a*b;
    return mult;
}

float division(float a, float b){
    float div=0;
    if(b!=0){
        div=a/b;
    }
    return div;
}

void imprimirResultados(float a){
    printf("El resultado de la operacion es: %.2f\n",a);
}

