#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Configuración de la pantalla LCD
LiquidCrystal_I2C lcd(0x27,20,4);

// Pin del LDR
const int ldrPin = A0;

void setup() {
  // Inicia la pantalla LCD
 lcd.init();                      // initialize the lcd 
  lcd.init();
  lcd.backlight();

  // Configura el pin del LDR
  pinMode(ldrPin, INPUT);

  // Mensaje inicial en la pantalla
  lcd.setCursor(0, 0);
  lcd.print("Luz ambiental:");
}

void loop() {
  // Leer el valor analógico del LDR
  int ldrValue = analogRead(ldrPin);

  // Convertir el valor a un rango de 0 a 100% (opcional)
  int lightPercentage = map(ldrValue, 0, 1023, 0, 100);

  // Mostrar los valores en la pantalla LCD
  lcd.setCursor(0, 1);
  lcd.print("Luz: ");
  lcd.print(lightPercentage);
  lcd.print(" %   "); // Espacios extra para limpiar caracteres sobrantes

  // Pausa antes de la siguiente lectura
  delay(500);
}
