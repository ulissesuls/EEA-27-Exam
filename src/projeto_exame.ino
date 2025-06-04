#include <TMRpcm.h>
#include <SPI.h>
#include <SD.h>

// Definindo os pinos analógicos dos piezos
#define PRATO A0
#define CHIMBAL A1
#define BUMBO A2
#define CAIXA A3
#define TOM A4

// Pino CS do cartão SD (para Arduino Mega, geralmente é o 53)
#define SD_CS_PIN 53

// Pino PWM para áudio (recomendado: 9 ou 10 no Arduino Mega)
#define AUDIO_PIN 9

// Ajustando a sensibilidade (regular conforme necessário
#define LIMIAR_TOQUE 100

// Instância do objeto de áudio
TMRpcm audio;

// Função de detecção de batida
bool toqueDetectado(int pino){
  int valor = analogRead(pino);
  return valor > LIMIAR_TOQUE;
}

void setup() {
  Serial.begin(9600);

  //Inicializar os pinos dos sensores
  pinMode(PRATO, INPUT);
  pinMode(CAIXA, INPUT);
  pinMode(BUMBO, INPUT);
  pinMode(CHIMBAL, INPUT);
  pinMode(TOM, INPUT);

  // Inicializar cartão SD
  if (!SD.begin(SD_CS_PIN)){
    Serial.println("Erro ao inicializar o cartão SD!");
    return;
  }

  // Configurar o pino do alto-falante
  audio.speakerPin = AUDIO_PIN;
  audio.setVolume(5); // 0 (mín) ~ 7 (max)
  Serial.println("Sistema pronto.");
}

void loop(){
  if (toqueDetectado(PRATO)){
    audio.play("prato.wav");
    delay(200);
  }

  if (toqueDetectado(CAIXA)){
    audio.play("caixa.wav");
    delay(200);
  }

  if (toqueDetectado(BUMBO)){
    audio.play("bumbo.wav");
    delay(200);
  }

  if (toqueDetectado(CHIMBAL)){
    audio.play("chimbal.wav");
    delay(200);
  }

  if (toqueDetectado(TOM)){
    audio.play("tom.wav");
    delay(200);
  }
}














