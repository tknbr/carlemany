// C program to demonstrate use of fork() and pipe()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
 * Función que tiene que ejecutar el hijo.
 */ 
void hijo(int fd1[], int fd2[]) {
	// mensaje del hijo al padre
	char son_str[] = "Hola padre! \n";
	// Array de chars auxiliar para guardar la información
	char concat_str[100];

	/**
	 * Usamos la función close para cerrar
	 * el canal de escritura de la primera pipe (fd1).
	 */

	// [TODO] INSERTAR CODIGO AQUI

	/**
	 * Usamos la función read para leer el mensaje
	 * enviado por el padre usando los siguientes parametros:
	 * 	canal: canal de lectura de la primera pipe (fd1)
	 * 	puntero_mensaje: puntero a la primera posicion de concat_str
	 * 	len del mensaje: 100
	 */

	// [TODO] INSERTAR CODIGO AQUI

	/**
	 * Usamos la función strcat para concatenar el mensaje
	 * recibido con el mensaje que queremos enviar.
	 */
	strcat(concat_str,son_str);

	/**
	 * Usamos la función close para cerrar el canal de
	 * lectura de ambas pipes (fd1 y fd2)
	 */
	
	// [TODO] INSERTAR CODIGO AQUI

	/**
	 * Usamos la función write para enviar el array
	 * concatenado. Usaremos los siguientes parametros:
	 * 	canal: canal de escritura de la segunda pipe
	 *  puntero_mensaje: puntero a la primera posicion
	 * 			de concat_str.
	 *  len del mensaje: strlen(concat_str) + 1
	 */
	
	// [TODO] INSERTAR CODIGO AQUI

	/**
	 * Usamos la función close para cerrar el canal de
	 * escritura de la segunda pipe (fd2)
	 */

	// [TODO] INSERTAR CODIGO AQUI

	exit(0);
}

/**
 * Función que tiene que ejecutar el padre.
 */
void padre(int fd1[], int fd2[]) {
	// mensaje del padre al hijo
	char parent_str[] = "Hola hijo! ";
	// Array de chars auxiliar para guardar la información
	char concat_str[100];

	/**
	 * Usamos la función close para cerrar
	 * el canal de lectura de la primera pipe (fd1).
	 */

	// [TODO] INSERTAR CODIGO AQUI

	/**
	 * Usamos la función write para enviar el array
	 * concatenado. Usaremos los siguientes parametros:
	 * 	canal: canal de escritura de la primera pipe
	 *  puntero_mensaje: puntero a la primera posicion
	 * 			de parent_str.
	 *  len del mensaje: strlen(parent_str) + 1
	 */
	
	// [TODO] INSERTAR CODIGO AQUI

	/**
	 * Usamos la función close para cerrar
	 * el canal de escritura de la primera pipe (fd1).
	 */
	
	// [TODO] INSERTAR CODIGO AQUI


	// Esperamos a que se envie el mensaje
	wait(NULL);


	/**
	 * Usamos la función close para cerrar
	 * el canal de escritura de la segunda pipe (fd2).
	 */
	
	// [TODO] INSERTAR CODIGO AQUI

	/**
	 * Usamos la función read para leer el mensaje
	 * enviado por el padre usando los siguientes parametros:
	 * 	canal: canal de lectura de la segunda pipe (fd2)
	 * 	puntero_mensaje: puntero a la primera posicion de concat_str
	 * 	len del mensaje: 100
	 */
	
	// [TODO] INSERTAR CODIGO AQUI

	// Print del mensaje concatenado
	printf("Concatenated string: %s\n", concat_str);

	/**
	 * Usamos la función close para cerrar
	 * el canal de lectura de la segunda pipe (fd2).
	 */
	
	// [TODO] INSERTAR CODIGO AQUI
}

int main()
{

	/**
	 * Usaremos dos pipes para comunicar el proceso padre
	 * y el proceso hijo. Las pipes se usaran de la 
	 * siguiente manera:
	 * 
	 *     Parent           Son
	 * 
	 * fd1   -------------->
	 * 
	 * fd2   <--------------
	 * 
	 * La primera pipe servirá para enviar un mensaje del
	 * padre al hijo. La segunda pipe para enviar un mensaje
	 * del hijo al padre.
	 */

	/**
	 * Declaración de las pipes.
	 * 	fd1[0] = lectura
	 *  fd1[1] = escritura
	 * 
	 *  fd2[0] = lectura
	 *  fd2[1] = escritura
	 */
	int fd1[2];
	int fd2[2];

	/**
	 * Codigo de comprovación de que las
	 * pipes se han creado correctamente
	 */
	if (pipe(fd1) == -1) {
		fprintf(stderr, "Creación incorrecta de la primera pipe");
		return 1;
	}
	if (pipe(fd2) == -1) {
		fprintf(stderr, "Creación incorrecta de la segunda pipe");
		return 1;
	}

	/**
     * La función fork sirve para crear un nuevo proceso (hijo).
     * Usad la función fork guardando el resultado de la función
     * en una variable del tipo pid_t. El codigo a partir del fork
     * se ejecutará por ambos procesos (padre e hijo). Usad el pid
     * devuelto en el fork para que padre e hijo ejecuten la función
     * que les toca.
     */ 
	pid_t p = fork();

	// si p es menor que cero ha habido un error.
	if (p < 0) {
		fprintf(stderr, "fork Failed");
		return 1;
	}

	/**
     * ******** [TODO] INSERTAD VUESTRO CÓDIGO AQUI ******************
     */ 

    // Si es el padre ejecutad la función padre()

    // si es el hijo ejecutad la función hijo()


    /**
     * ******** FIN DE VUESTRO CÓDIGO ******************
     */
}
