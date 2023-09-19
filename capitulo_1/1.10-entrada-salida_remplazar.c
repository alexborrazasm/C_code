/* Programa que copia la entrada a la salida, pero cada tabulación \t, espacio y cada diagonal invertida \ por \\ */
#include<stdio.h>

 int main(){
	int entrada;

	while((entrada = getchar()) != EOF) {
		if (entrada == '\t')
			printf("\\\\");
		else if (entrada == ' ')
			printf("\\\\");
		else if (entrada == '\\') {
			printf("\\\\");
		}
		else 
			putchar(entrada);
	}
	return 0;
}
		
