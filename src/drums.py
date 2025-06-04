import serial
import pygame
import time
import os

# Inicializa o mixer do pygame
pygame.mixer.init()

# Caminho da pasta com os sons
SOUNDS_PATH = "C:\Users\UlissesLS\OneDrive - ga.ita.br\ITA\7º Semestre\1.EEA-27 - Microcontroladores e Sistemas Embarcados\Projeto Exame\sounds"

# Mapeia os nomes dos pads para arquivos .wav
MAPPING_SOUNDS = {
    "PRATO": "prato.wav",
    "CHIMBAL": "chimbal.wav",
    "BUMBO": "bumbo.wav",
    "CAIXA": "caixa.wav",
    "TOM": "tom.wav"
}

# Configura a porta serial (ajuste para a sua porta exata, como 'COM3', 'COM5' etc.)
porta = serial.Serial('COM3', 9600, timeout=1)
time.sleep(2)  # Espera inicial para conexão estabilizar

print("Sistema iniciado. LET'S ROCK'N ROLL!!!\n\n\n")

while True:
    if porta.in_waiting > 0:
        line = porta.readline().decode().strip()
        if line in MAPPING_SOUNDS:
            path = os.path.join(SOUNDS_PATH, MAPPING_SOUNDS[line])
            print(f"Toque detectado: {line}")
            pygame.mixer.Sound(path).play()
