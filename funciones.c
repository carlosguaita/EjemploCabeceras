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

void imprimirResultados(float sum, float rest, float mult, float div){
    printf("El resultado de la suma es: %.2f\n",sum);
    printf("El resultado de la resta es: %.2f\n",rest);
    printf("El resultado de la multiplicacion es: %.2f\n",mult);
    printf("El resultado de la division es: %.2f\n",div);
}

float leerNumero(int a){
    float num;
    printf("Ingrese el numero %d: ",a);
    scanf("%f",&num);
    return num;
}

