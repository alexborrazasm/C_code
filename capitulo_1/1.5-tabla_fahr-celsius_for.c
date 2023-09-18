/* Modificar el programa de conversión de temperaturas, Fahr to Celsius, de manera que escriba en orden inverso y con un bucle for */
#include<stdio.h>

int main() {
	float fahr;

	/* Encabezado página */
	printf("Fahr\tCelsius\n");

	for(fahr = 300; fahr >= 0; fahr = fahr - 20) 					// ahora definimos todo en el bucle for
		printf("%5.1f\t%5.1f\n", fahr, (5.0/9.0) * (fahr - 32));	// si solo hace una ejecución no tengo por que poner {}, en el for
	
	return 0;
}
