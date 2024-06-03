/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int lista[50];
    int suma = 0;

    printf("Dada una lista L de 50 Elementos diseñe un programa que calcule de forma independiente la suma de los miembros.\n");
    printf("Coloque los 50 elementos de la lista:\n");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &lista[i]);
    }

    for (int i = 0; i < 50; i++) {
        suma += lista[i];
    }
    printf("La suma de los elementos es: %d\n", suma);
    return 0;
}