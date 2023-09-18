/* Programa que mande la entrada de caracteres a la salida inmediatamente, también verificar si getchar() != EOF es 0 o 1 */
#include<stdio.h>

int main() {
	int entrada, valorEOF;
								// != tiene preferencia sobre =, por lo tanto la expresión dentro del while necesita
	while((entrada = getchar()) != EOF) 			// parentesis, si no entrada no se asigna.  
		putchar(entrada);      				// (entrada = getchar() != EOF) es quivalente a entrada = (getchat != EOF)
	printf("\nLa expresión getchar() != EOF vale: %d\n", EOF);
	return 0;
}
