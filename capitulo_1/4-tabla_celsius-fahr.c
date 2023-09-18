/* Tabla Celsius a Fahr, de 0 a 300 y de 20 en 20 */

#include<stdio.h>

int main() {
	float celsius, fahr;
	
	printf("Celsius\tFahr\n");	//encabezado tabla

	celsius = 0;	//límite inferior
	
	while(celsius <= 300) {	//establecemos lim supp directamente en el bucle while
		fahr = (9.0/5.0) * celsius + 32;
		printf("%5.1f\t%5.1f\n", celsius, fahr);
		celsius = celsius + 20; 	//establecemos directamente aqui los pasos
	}
	return 0;
}
