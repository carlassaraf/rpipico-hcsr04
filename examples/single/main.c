#include <stdio.h>
#include "pico/stdlib.h"
#include "hcsr04.h"

// Defino GPIO para el Trigger
#define TRIGGER_GPIO    2
// Defino GPIO para el Echo
#define ECHO_GPIO       3

/**
 * @brief Programa principal
*/
int main(void) {
    // Inicializacion del USB
    stdio_init_all();
    // Inicializo el sensor
    hcsr04_init(TRIGGER_GPIO, ECHO_GPIO);

    while (true) {
        // Imprimo la distancia en cm
        printf("Distancia: %.2f cm\n", hcsr04_get_distance_cm(2, 3));
        // Demora para no saturar la consola
        sleep_ms(20);
    }
}
