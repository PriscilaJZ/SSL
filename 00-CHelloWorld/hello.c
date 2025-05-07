/* hello.c
 * Hola mundo por consola y archivo de texto
 * Priscila Jazmín Zarate
 * 12/05/2025
 */

#include <stdio.h>

int main() {
    FILE *archivo = fopen("output.txt", "w"); 

    fprintf(archivo, "Hola mundo\n");

    printf("Hola mundo\n");

    fclose(archivo);
    return 0;
}
