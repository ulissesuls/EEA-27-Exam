
#include <TMRpcm.h>
#include <SPI.h>

// Definindo os pinos analógicos dos piezos
#define CHIMBAL A0
#define CAIXA A1
#define BUMBO A2
#define TOM A3
#define PRATO A4


// Pino PWM para áudio (recomendado: 9 ou 10 no Arduino Mega)
#define AUDIO_PIN 9

// Ajustando a sensibilidade (regular conforme necessário)
#define LIMIAR_TOQUE 150

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

  // Configurar o pino do alto-falante
  audio.speakerPin = AUDIO_PIN;
  audio.setVolume(5); // 0 (mín) ~ 7 (max)
  Serial.println("Sistema pronto. Bateria pronta para ser tocada.");
}

void loop(){
  if (toqueDetectado(PRATO)){
    audio.play("prato.wav");
    Serial.println("PRATO");
    delay(100);
  }

  if (toqueDetectado(CAIXA)){
    audio.play("caixa.wav");
    Serial.println("CAIXA");
    delay(200);
  }

  if (toqueDetectado(BUMBO)){
    audio.play("bumbo.wav");
    Serial.println("BUMBO");
    delay(150);
  }

  if (toqueDetectado(CHIMBAL)){
    audio.play("chimbal.wav");
    Serial.println("CHIMBAL");
    delay(200);
  }

  if (toqueDetectado(TOM)){
    audio.play("tom.wav");
    Serial.println("TOM");
    delay(200);
  }
}

/*
// Código para monitorar os valores analógicos dos piezos - UTILIZE PARA TESTES!

// Definindo os pinos analógicos dos piezos
#define PRATO    A0
#define CHIMBAL  A1
#define BUMBO    A2
#define CAIXA    A3
#define TOM      A4

void setup() {
  Serial.begin(9600);

  // Inicializa os pinos dos sensores como entrada (opcional no Arduino)
  pinMode(PRATO, INPUT);
  pinMode(CHIMBAL, INPUT);
  pinMode(BUMBO, INPUT);
  pinMode(CAIXA, INPUT);
  pinMode(TOM, INPUT);

  Serial.println("Iniciando leitura dos piezos...");
}

void loop() {
  // Leitura de cada piezo e impressão dos valores no terminal
  int valPrato   = analogRead(PRATO);
  int valChimbal = analogRead(CHIMBAL);
  int valBumbo   = analogRead(BUMBO);
  int valCaixa   = analogRead(CAIXA);
  int valTom     = analogRead(TOM);

  Serial.print("PRATO: "); Serial.print(valPrato);
  Serial.print(" | CHIMBAL: "); Serial.print(valChimbal);
  Serial.print(" | BUMBO: "); Serial.print(valBumbo);
  Serial.print(" | CAIXA: "); Serial.print(valCaixa);
  Serial.print(" | TOM: "); Serial.println(valTom);

  delay(200); // intervalo entre leituras
}
*/

