// Configuración de pines
const int ldrPin = A0;    // Pin del LDR
const int ledPin = 9;     // Pin del LED

// Umbral para decidir si encender o apagar el LED
const int lightThreshold = 500; // Ajusta según el nivel de luz deseado

void setup() {
  // Configura los pines
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);

  // Inicializa el monitor serial
  Serial.begin(9600);
}

void loop() {
  // Leer el valor del LDR
  int ldrValue = analogRead(ldrPin);

  // Mostrar el valor en el monitor serial
  Serial.print("Luz detectada: ");
  Serial.println(ldrValue);

  // Controlar el LED en función del nivel de luz
  if (ldrValue < lightThreshold) {
    digitalWrite(ledPin, HIGH); // Enciende el LED (ambiente oscuro)
  } else {
    digitalWrite(ledPin, LOW);  // Apaga el LED (suficiente luz)
  }

  // Pausa antes de la siguiente lectura
  delay(500);
}
