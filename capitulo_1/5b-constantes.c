/* Es mala práctica poner números mágicos, entonces tenemos las constantes simbólicas */

/* Incluimos las librerias */
#include<stdio.h>

/* Definimos constantes simbolicas */

#define LOWER	0	// Límite inferior de la tabla
#define UPPER	300	// Límite superior de la tabla
#define STEP	20	// Tamaño del incremento

int main(){
	float fahr;

		printf("Fahr\tCelsius\n");	//encabezado tabla

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%5.1f\t%5.1f\n", fahr, (5.0/9.0) * (fahr -32));
	
	return 0;
}
		
	

