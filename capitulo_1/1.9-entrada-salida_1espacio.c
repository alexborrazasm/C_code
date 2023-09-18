/* Escribe un programa que mande su entrada a la salida, pero que remplace las cadenas de espacios en blanco por solo un espacio */
#include<stdio.h>

int main() {
	int entrada, contador;			// definimos las variables que necesitamos

	while((entrada = getchar()) != EOF){
		if (entrada == ' ')		// si la entrada es un espacio, sumamos 1 al contador
			++contador;
		else				// si la entrada es otro caracter reiniciamos el contador
			contador = 0;
		if (contador > 1)		// si el contador es mayor que uno, osea no esta entranto un segundo espacio no hacemos nada
			;
		else 				// si no devolvemos normalmente la entrada a la salida
			putchar(entrada);
	}
	return 0;
}
