/* Programa que cuente espacios en blanco, tabuladores y nuevas líneas */
#include<stdio.h>

main() {
	int espacio, tab, linea, entrada;
	
	espacio = tab = linea = 0;

	while((entrada = getchar()) != EOF){
		if (entrada == ' ')
			++espacio;
		else if (entrada == '\t')
			++tab;
		else if (entrada == '\n')
			++linea;
	}
	printf("Espacios en blanco: %d\nTabulaciones: %d\nNuevas lineas: %d\n", espacio, tab, linea);
	return 0;
}
