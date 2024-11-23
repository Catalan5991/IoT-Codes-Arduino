// C++ code
// Pines asignados para los LEDs individuales
const int redPin = 13;   // Pin del LED rojo
const int greenPin = 12; // Pin del LED verde
const int bluePin = 11;  // Pin del LED azul

void setup()
{
  // Configurar los pines como salida
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop(){
	// Solo rojo
  analogWrite(redPin, 255); // Máxima intensidad
  analogWrite(greenPin, 0); 
  analogWrite(bluePin, 0);
  delay(1000); // Esperar 1 segundo
  
  // Solo verde
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  delay(1000);
  
  // Solo azul
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(1000);
  
  // Todos encendidos (blanco)
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  delay(1000);
  
  // Todos apagados
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(1000);
}