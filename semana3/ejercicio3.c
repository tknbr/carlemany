// C program to demonstrate working of Semaphores
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

// Numero maximo de clientes en la tienda simulataneamente
#define MAX_NUM_CLIENTS 3

// Numero total de clientes que entraran en la tienda
#define TOTAL_CLIENTS 10

// variable global de semaforo
sem_t semaphore;

// variable global que queremos acceder con exclusividad.
int current_number_clients;

  
void* shop_entrance(void* arg)
{
	int i = 0;
	while (i < TOTAL_CLIENTS) {
		/**
		 * Entrando en una sección critica.
		 * Usad aqui una función de semaforos para esperar
		 * a tener exclusividad.
		 */

		// INSERTAR CODIGO AQUI

		/**
		 * Si el numero de clientes en la tienda es menor
		 * que el total aceptados dejamos que entre uno más.
		 */
		if (current_number_clients < MAX_NUM_CLIENTS) {
			// aumentamos la variable de numero actual clientes
			++current_number_clients;
			// aumentamos el contador de clientes que han entrado
			++i;
			printf("One client just entered. Total inside = %d / %d\n", current_number_clients, MAX_NUM_CLIENTS);
		}

		/**
		 * Salimos de una zona de exclusividad.
		 * Tenemos que señalizarlo con un semaforo.
		 */

		// INSERTAR CODIGO AQUI
	}
}

void* shop_exit(void* arg)
{
	// entering critical section
	int i = 0;
	while (i < TOTAL_CLIENTS) {
		// simulamos que los clientes estan una unidad de tiempo en la tienda
		sleep(1);

		/**
		 * Entrando en una sección critica.
		 * Usad aqui una función de semaforos para esperar
		 * a tener exclusividad.
		 */
		// [TODO] INSERTAR CODIGO AQUI


		// si el numero de clientes es mayor de zero sale un cliente
		if (current_number_clients > 0) {
			// decrementamos el numero de clientes
			--current_number_clients;
			// decrementamos el iterador
			++i;
			printf("One client just exited. Total inside = %d / %d\n", current_number_clients, MAX_NUM_CLIENTS);
		}

		/**
		 * Salimos de una zona de exclusividad.
		 * Tenemos que señalizarlo con un semaforo.
		 */
		// [TODO] INSERTAR CODIGO AQUI

	}
}
  
  
int main()
{
	// Empezamos con el numero de clientes a 0
	current_number_clients = 0;

	/**
	 * Antes de poder usar los semaforos tenemos que inizializarlo
	 */
	// [TODO] INSERTAR CODIGO AQUI


    // declaramos dos threads t1 y t2
    pthread_t t1,t2;

    // el thread t1 ejecutará la función shop_entrance
    pthread_create(&t1,NULL,shop_entrance,NULL);
    // esperamos 2 segundos a crear el segundo thread
    sleep(2);

    // el thread t2 ejectuará la función shop_exit
    pthread_create(&t2,NULL,shop_exit,NULL);
    // join de los threads t1 y t2
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    /**
     * Debemos destruir el semaforo inicializado antes de finalizar
     */
    // [TODO] INSERTAR CODIGO AQUI

    return 0;
}