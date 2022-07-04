#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>


/**
 * Función que tiene que ejecutar el hijo.
 */ 
void hijo() {
    // Se usa la función getpid() para obtener el pid del hijo
    printf("Soy el proceso hijo y mi PID es: %d\n",getpid());
    // Se indica que el proceso (hijo) ha terminado.
    exit(0);
}

/**
 * Función que tiene que ejecutar el padre.
 */
void padre() {
    // Se usa la función getpid() para obtener el pid del padre
    printf("Soy el proceso padre y mi PID es: %d\n",getpid());
}


int main(int argc, char **argv) {

    /**
     * La función fork sirve para crear un nuevo proceso (hijo).
     * Usad la función fork guardando el resultado de la función
     * en una variable del tipo pid_t. El codigo a partir del fork
     * se ejecutará por ambos procesos (padre e hijo). Usad el pid
     * devuelto en el fork para que padre e hijo ejecuten la función
     * que les toca.
     */ 
    pid_t pid = fork();

    /**
     * ******** [TODO] INSERTAD VUESTRO CÓDIGO AQUI ******************
     */ 

    // Si es el padre ejecutad la función padre()

    // si es el hijo ejecutad la función hijo()


    /**
     * ******** FIN DE VUESTRO CÓDIGO ******************
     */

    return 0;
}