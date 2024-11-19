# IoT-Codes-Arduino
Códigos de Arduino de las practicas de laboratorio de IoT

RGB: Este archivo configura tres pines de Arduino para controlar un LED RGB (rojo, verde y azul) mediante salidas analógicas. Define los pines rojo, azul y verde como salidas y los inicializa con un valor de 0 en el bucle principal (loop), lo que significa que los tres colores están apagados. Sin embargo, no hay lógica adicional para cambiar los valores de los colores, por lo que solo configura el LED y lo apaga inicialmente​(RGB).

SEMAFORO: Este archivo contiene el código para simular el funcionamiento de un semáforo. Define tres pines para los LEDs de los colores típicos de un semáforo: verde, amarillo y rojo. En el loop, el código controla los LEDs para simular una secuencia de luces: Enciende el rojo durante 6 segundos. Enciende el verde durante 3 segundos, seguido de un parpadeo (encendido y apagado rápido). Enciende el amarillo durante 2 segundos con un parpadeo similar antes de cambiar. Esta secuencia se repite, simulando el ciclo de un semáforo de tráfico básico​(SEMAFORO).

Arduino con sensor ultrasónico: Este código utiliza un sensor ultrasónico para medir la distancia a un objeto y realizar alguna acción basada en esa distancia. El sensor envía una señal de sonido y mide el tiempo que tarda en regresar después de rebotar en un objeto. La distancia se calcula y puede mostrarse en el monitor serial o utilizarse para activar LEDs u otros componentes según el rango de distancia detectado.

Arduino con sensor LDR y pantalla LCD: Este archivo configura un sensor LDR (fotorresistor) y una pantalla LCD. El LDR mide la intensidad de luz ambiental y el valor capturado se muestra en la pantalla LCD. Esto permite monitorear los cambios en la luz y visualizarlos en tiempo real en la pantalla, ideal para sistemas de control de iluminación o monitoreo ambiental.

Arduino con sensor LDR: Este código utiliza un sensor LDR para medir la luz ambiental. A partir de la lectura del LDR, el Arduino puede controlar otros dispositivos (por ejemplo, encender o apagar LEDs) en función del nivel de luz detectado. Es una configuración sencilla, útil para proyectos de ahorro de energía o alarmas de luz.

Arduino con sensor DHT11: En este archivo, se utiliza un sensor DHT11 para capturar datos de temperatura y humedad. El DHT11 se conecta al Arduino y proporciona lecturas en tiempo real de las condiciones ambientales, que pueden mostrarse en el monitor serial o almacenarse para análisis posterior. Este tipo de sistema es útil en proyectos de monitoreo climático o domótica.

Arduino con comunicación serial: Este archivo configura el puerto serial del Arduino para enviar y recibir datos desde una computadora u otro dispositivo. La comunicación serial permite monitorear variables, depurar el código o controlar el Arduino desde un software externo. Es una herramienta versátil para enviar datos de sensores y recibir comandos de control.

Arduino con sensor ultrasónico y pantalla LCD: En esta configuración, el Arduino mide la distancia usando un sensor ultrasónico y luego muestra el valor de distancia en una pantalla LCD. Esto es útil en proyectos donde se necesita visualizar la distancia detectada, como en sistemas de aparcamiento o robots de evitación de obstáculos.
