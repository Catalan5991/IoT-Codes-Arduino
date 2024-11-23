// Definir los pines para los LEDs
const int redPin = 11;    // Pin del LED rojo
const int yellowPin = 12; // Pin del LED amarillo
const int greenPin = 13;  // Pin del LED verde

void setup() {
  // Configurar los pines como salida
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Encender el LED rojo durante 6 segundos
  digitalWrite(redPin, HIGH);   // Encender rojo
  digitalWrite(yellowPin, LOW); // Apagar amarillo
  digitalWrite(greenPin, LOW);  // Apagar verde
  delay(6000); // Esperar 6 segundos

  // Encender el LED verde durante 3 segundos
  digitalWrite(redPin, LOW);    // Apagar rojo
  digitalWrite(greenPin, HIGH); // Encender verde
  delay(3000); // Esperar 3 segundos

  // Parpadeo del LED verde
  for (int i = 0; i < 3; i++) { 
    digitalWrite(greenPin, LOW);  // Apagar verde
    delay(500);                  // Pausa breve
    digitalWrite(greenPin, HIGH); // Encender verde
    delay(500);
  }
  digitalWrite(greenPin, LOW);   // Asegurar que el verde quede apagado

  // Encender el LED amarillo durante 2 segundos
  digitalWrite(yellowPin, HIGH); // Encender amarillo
  delay(2000); // Esperar 2 segundos
 // Parpadeo del LED amarillo
  for (int i = 0; i < 3; i++) {
    digitalWrite(yellowPin, LOW);  // Apagar amarillo
    delay(300);                   // Pausa breve
    digitalWrite(yellowPin, HIGH); // Encender amarillo
    delay(300);
  }
  digitalWrite(yellowPin, LOW);   // Asegurar que el amarillo quede apagado
}
