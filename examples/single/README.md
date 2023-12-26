# single

Este ejemplo consiste en la configuracion y uso de un sensor. El mensaje se escribe por consola. Para hacer uso de la consola por USB en PlatformIO, de debe agregar lo siguiente en el `platformio.ini`:

```
build_flags =
    -D LIB_PICO_STDIO_USB 	; for printf() via USB serial, not UART
    -D PICO_USB				; activate tinyusb
```
