/* Programa que copia la entrada a la salida, pero cada tabulación \t, retroceso \b y cada diagonal invertida \ por \\ */
#include<stdio.h>

 int main(){
	int entrada;

	while((entrada = getchar()) != EOF) {
		if (entrada == '\t')
			putchar('\\');
		else if (entrada == '\b')
			putchar('\\');
		else if (entrada == '\\') {
			putchar('\\');			//por que aqui tengo que ponerlo 2 veces y arriba no??
			putchar('\\');
		}
		else 
			putchar(entrada);
	}
	return 0;
}
		
