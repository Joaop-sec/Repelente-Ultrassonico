#include <Arduino.h>

/*
   Arduino UNO + Piezo + Potenciômetro
   Frequência aleatória contínua
   24kHz até 30kHz
*/
const int ledPin = 27;
const int buzzerPin = 26;
const int potPin = 34;

unsigned long ultimoTempo = 0;

int frequenciaAtual = 24000;
int intervaloTroca = 100;

void setup() {

  pinMode(buzzerPin, OUTPUT);

  Serial.begin(115200);

 randomSeed(esp_random());

  // inicia já tocando
  tone(buzzerPin, frequenciaAtual);
}

void loop() {

  // leitura do potenciômetro
  int potValue = analogRead(potPin);

  // velocidade de troca
  intervaloTroca = map(potValue, 0, 1023, 300, 30);

  // troca frequência
  if (millis() - ultimoTempo >= intervaloTroca) {

    ultimoTempo = millis();

    // nova frequência
    frequenciaAtual = random(24000, 40000);

    // atualiza o tom
    tone(buzzerPin, frequenciaAtual);

    Serial.print("Freq: ");
    Serial.print(frequenciaAtual);
    Serial.println(" Hz");

    // LED
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, HIGH);
  }
}
