#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float num1, num2, sum, rest, mult, div;

    num1=leerNumero(1);
    num2=leerNumero(2);
    sum=suma(num1,num2);
    rest=resta(num1,num2);
    mult=multiplicacion(num1,num2);
    div=division(num1,num2);
    imprimirResultados(sum,rest,mult,div);

    return 0;
}

