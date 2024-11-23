#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

// Configuración del LCD (I2C con pines SDA y SCL)
Adafruit_LiquidCrystal lcd(0);

// Pines del sensor ultrasónico
const int trigPin = 8;
const int echoPin = 9;

// Variables para el cálculo de distancia
long duration;
float distance;

void setup() {
  // Configuración de pines
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // Inicialización del LCD
  lcd.begin(16, 2); // Configura LCD de 16x2
  lcd.setBacklight(LOW); // Activa la luz de fondo
  lcd.print("Distancia:");

  // Inicialización del puerto serial
  Serial.begin(9600);
}

void loop() {
  // Enviar un pulso de 10 µs al pin Trig
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Leer el pulso recibido en Echo
  duration = pulseIn(echoPin, HIGH);

  // Calcular distancia en centímetros
  distance = duration * 0.034 / 2;

  // Mostrar distancia en el LCD
  lcd.setCursor(0, 1); // Segunda línea
  lcd.print("Dist: ");
  lcd.print(distance);
  lcd.print(" cm   "); // Espacios extra para limpiar la línea

  // Mostrar distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Pausa antes de la siguiente medición
  delay(500);
}
