#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4); 

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
  lcd.init();                      // initialize the lcd 
  lcd.init();
  lcd.backlight();
  lcd.setCursor(1,0);
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
  lcd.print(distance);
  lcd.print(" cm   "); // Espacios extra para limpiar la línea

  // Mostrar distancia en el monitor serial
  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Pausa antes de la siguiente medición
  delay(500);
}