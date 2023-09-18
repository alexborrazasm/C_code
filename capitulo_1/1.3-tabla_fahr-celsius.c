/* Programa que imprima una tabla Fahr-Celsius desde 0 a 300 Fahr */

#include<stdio.h>

int main() {
	float fahr,celsius;
	int step, lim;

	step = 20;	//pasos
	lim = 300;	//límite superior

	fahr = 0;	//límite inferior
	
	printf("Fahr\tCelsius\n");

	while(fahr <= lim) {
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%5.1f\t%5.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}
