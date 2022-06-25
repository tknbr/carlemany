#include <stdio.h> // libreria para la funcion printf
#include <stdlib.h> // libreria para la funcion atoi


void printTriangulo(int num) {

	int i;
	/**
	 * Primer bucle, una iteracion por fila
	 * de nuestro triangulo.
	 */
    for (i = 1; i <= num; ++i) {
        int j;
        
        /**
         * Segundo bucle, una iteracion por
         * columna de dicha fila
         */
        for (j = 1; j <= i; ++j) {
            printf("*");
        }

        /**
         * Una vez acabada la fila insertamos
         * un salto de linea
         */
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
	 * printTriangulo solo tiene un argumento de entrada
	 */
	printTriangulo(num);
	return 0;
}