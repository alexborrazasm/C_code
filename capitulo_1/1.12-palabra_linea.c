/* Escriba un programa que imprima una palabra por linea */

#include<stdio.h>

/* Constantes simbólicas*/
#define IN 1
#define OUT 0

int main() {
    int entrada, espacio;                      // Definimos las variables a usar

    espacio = IN;

    while((entrada = getchar()) != EOF) {
        // Verificamos si el carácter es un "espacio"
        if (entrada == ' ' || entrada == '\n' || entrada == '\t') {      
            if (espacio == OUT)
                printf("\n");                                                 
            espacio = IN;
        }
        // Si no es un "espacio" devolvemos el caracter a salida
        else {
            espacio = OUT;
            putchar(entrada);
        }                                  
    }
    return 0;
}