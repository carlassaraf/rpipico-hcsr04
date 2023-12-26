# rpipico-hcsr04

Biblioteca para usar sensor ultrasónico HC-SR04 con la Raspberry Pi Pico y su SDK. Puede ser usada descargandola e incluyendola en un proyecto de forma particular
 o puede incluirse en PlatformIO directamente usando el `platformio.ini` agregando la linea:

```
lib_deps = https://github.com/carlassaraf/rpipico-hcsr04.git
```

## Uso de la biblioteca

Una vez incluida la biblioteca con `#include "hcsr04.h"` podemos hacer algo basico asi:

```c
// Defino un GPIO para el Trigger
const uint8_t TRIGGER_GPIO = 2;
// Defino un GPIO para el Echo
const uint8_t ECHO_GPIO = 3;

// Inicializo los GPIO del sensor
hcsr04_init(TRIGGER_GPIO, ECHO_GPIO);
// Leo distancia
float distance_cm = hcsr04_get_cm(TRIGGER_GPIO, ECHO_GPIO);
// Imprimo distancia por consola
printf("Distancia: %.2f cm\n", distance_cm);
```

Esta biblioteca hace inicializacion de los GPIO para hacer uso del sensor por lo que es especifico para la Raspberry Pi Pico funcionando con el SDK. De requerir un port para otro microcontrolador, se debe cambiar la implementacion del `hcsr04_init()`.

## Ejemplos

Los ejemplos que hay en el repositorio son:

| Ejemplo | Descripcion |
| --- | --- |
| [single](examples/single/main.c) | Ejemplo basico con un sensor y mensaje por consola |
