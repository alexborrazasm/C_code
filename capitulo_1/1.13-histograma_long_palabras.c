/* Escriba un programa que imprima el histograma de longitudes de las palabras de entrada */

#include<stdio.h>

#define NO  0
#define SI  1

int main() {
    int entrada, espacio, nCaracteres, nPalabras;

    int histograma[256] = {0};

    espacio = NO;
    nCaracteres = 0;
    nPalabras = 0;
    

    while((entrada = getchar()) != EOF) {
        if (entrada == ' ' || entrada == '\n' || entrada == '\t') {
            if (espacio == NO) {
                histograma[nPalabras] = nCaracteres;
                nPalabras = nPalabras + 1;
            }
            espacio = SI;
            nCaracteres = 0;
        }
        else {
            espacio = NO;
            nCaracteres = nCaracteres + 1;
        }
    }
    printf("Histograma de las longitudes de las palabras:\n");
    for (int i = 0; i < nPalabras; i++) {
        for (int k = 0; k < histograma[i]; k++)
            printf("-");
        printf("\n");
    }
    return 0;
}