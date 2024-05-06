#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float num1, num2, sum, rest, mult, div;

    printf("Ingrese el primer numero: ");
    scanf("%f",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&num2);

    sum=suma(num1,num2);
    rest=resta(num1,num2);
    mult=multiplicacion(num1,num2);
    div=division(num1,num2);

    printf("Suma: ");
    imprimirResultados(sum);

    printf("Resta: ");
    imprimirResultados(rest);

    printf("Multiplicacion: ");
    imprimirResultados(mult);

    printf("Division: ");
    imprimirResultados(div);

    return 0;
}

