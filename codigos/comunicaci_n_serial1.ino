const int ledPin = 9; // Pin donde está conectado el LED

void setup() {
  // Configurar el pin del LED como salida
  pinMode(ledPin, OUTPUT);
  
  // Iniciar la comunicación serial a 9600 baudios
  Serial.begin(9600);

  // Mensaje inicial en el monitor serial
  Serial.println("Comunicacion serial iniciada. Envia 'ENCENDER' para encender el LED y 'APAGAR' para apagarlo.");
}

void loop() {
  // Verificar si hay datos disponibles en el puerto serial
  if (Serial.available() > 0) {
    // Leer los datos recibidos
    String command = Serial.readStringUntil('\n'); // Lee hasta el carácter de nueva línea

    // Quitar espacios y caracteres extra
    command.trim();

    // Comparar los datos recibidos y realizar la acción correspondiente
    if (command == "ENCENDER") {
      digitalWrite(ledPin, HIGH); // Enciende el LED
      Serial.println("LED encendido.");
    } else if (command == "APAGAR") {
      digitalWrite(ledPin, LOW); // Apaga el LED
      Serial.println("LED apagado.");
    } else {
      Serial.println("Comando no reconocido. Usa 'ENCENDER' o 'APAGAR'.");
    }
  }

  delay(100); // Pequeño retraso para evitar saturación del monitor serial
}
