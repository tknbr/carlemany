#include <stdio.h> // libreria para la funcion printf
#include <stdlib.h> // libreria para la funcion atoi


void printPiramide(int num) {

	// iterador
	int i;
	// Numero de asteriscos en la base de la piramide
	int base_piramide = num*2-1;

	for (i = 1; i <= num; ++i) {
		// calculamos el numero de asteriscos de la fila
		int asteriscos = (i*2-1);
		// calculamos el numero de espacios de la fila
		int espacios = (base_piramide - asteriscos)/2;
		int j;
		// usamos un for para printar los espacios
		for (j = 0; j < espacios; ++j) {
			printf(" ");
		}
		// usamos un for para printar los asteriscos
		for (j = 0; j < asteriscos; ++j) {
			printf("*");
		}
		// printamos un salto de line al acabar la fila
		printf("\n");

	}
}


int main(int argc, char *argv[]) {

	/**
	 * argc contiene el numero de argumentos de entrada
	 * del programa. Solo queremos que tenga un argumento
	 * descartamos el resto de casos.
	 */

	if (argc != 2) {
		printf("Number of arguments is incorrect\n");
		return 0;
	}

	/**
	 * argv es un char, tenemos que pasarlo a int
	 * lo hacemos con la funcion atoi.
	 */
	int num = atoi(argv[1]);

	/**
	 * printPiramide solo tiene un argumento de entrada
	 */
	printPiramide(num);
	return 0;
}