/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[10];
    int sumaPares = 0;
    int cantidadPares = 0;
    float mediaPares;

    printf("Se tiene 100 temperaturas en un vector, se desea calcular la media aritmética de las temperaturas y obtener el número de temperaturas mayores e iguales que la media..\n");

    printf("Coloque 10 números enteros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        if (numeros[i] % 2 == 0) {
            sumaPares += numeros[i];
            cantidadPares++;
        }
    }

    if (cantidadPares > 0) {
        mediaPares = (float)sumaPares / cantidadPares;
        printf("La suma de los números pares son: %d\n", sumaPares);
        printf("La cantidad de números pares son: %d\n", cantidadPares);
        printf("La media aritmética de los números pares son: %.2f\n", mediaPares);
    } else {
        printf("No se colocaron números pares.\n");
    }

    return 0;
}