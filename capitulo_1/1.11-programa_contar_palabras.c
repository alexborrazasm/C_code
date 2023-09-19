/* Versión reducida del programa wc de UNIX */

#include<stdio.h>

#define IN  1       // en una palabra
#define OUT 0       // fuera de una palabra


/* Cuenta líneas palabras y caracteres de entrada */
int main() {
    int entrada, lineas, palabras, caracteres, estado;

    estado = OUT;

    lineas = palabras = caracteres = 0;     // en C las asignaciones ocurren de derecha a izquierda, por lo tanto esa expresión equivale a: 
                                            // lineas = (palabras = (caracteres = 0))
    while((entrada = getchar()) != EOF) {
        ++ caracteres;
        if (entrada == '\n')
            ++ lineas;
        if (entrada == ' ' || entrada == '\n' || entrada == '\t')
            estado = OUT;
        else if (estado == OUT){
            estado = IN;
            ++ palabras;
        }
    }
    printf("Lineas: %d Palabras: %d Caractares: %d\n", lineas, palabras, caracteres);
    return 0;
}
