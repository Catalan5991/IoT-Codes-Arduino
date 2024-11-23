// Pines del sensor ultrasónico
const int trigPin = 10;
const int echoPin = 9;

// Pines de los LEDs
const int redLED = 6;
const int yellowLED = 5;
const int greenLED = 4;

// Variable para almacenar la distancia
long duration;
int distance;

void setup() {
  // Configurar pines del sensor ultrasónico
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Configurar pines de los LEDs como salida
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  // Iniciar el monitor serial
  Serial.begin(9600);
}

void loop() {
  // Generar pulso de disparo (Trig)
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Medir el tiempo que tarda la señal en regresar (Echo)
  duration = pulseIn(echoPin, HIGH);

  // Calcular la distancia en centímetros
  distance = duration * 0.034 / 2;

  // Mostrar la distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Acciones basadas en la distancia
  if (distance < 10) { 
    // Objeto muy cerca
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
  } else if (distance >= 10 && distance <= 20) { 
    // Objeto a distancia media
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(greenLED, LOW);
  } else { 
    // Objeto lejos
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, HIGH);
  }

  // Pequeña pausa antes de la siguiente medición
  delay(200);
}
