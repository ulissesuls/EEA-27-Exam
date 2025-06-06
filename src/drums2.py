import serial
import time
import os
import simpleaudio as sa

# Caminho dos arquivos .wav
SOUNDS_PATH = "C:\\Users\\UlissesLS\\OneDrive - ga.ita.br\\ITA\\7º Semestre\\1.EEA-27 - Microcontroladores e Sistemas Embarcados\\Projeto Exame\\sounds"

# Mapeia nomes dos pads para arquivos
MAPPING_SOUNDS = {
    "PRATO": "prato1.wav",
    "CHIMBAL": "chimbal.wav",
    "BUMBO": "bumbo1.wav",
    "CAIXA": "caixa1.wav",
    "TOM": "tom2.wav"
}

# Pré-carrega os arquivos como wave objects
loaded_sounds = {
    pad: sa.WaveObject.from_wave_file(os.path.join(SOUNDS_PATH, filename))
    for pad, filename in MAPPING_SOUNDS.items()
}

# Abre comunicação serial
porta = serial.Serial('COM3', 9600, timeout=1)
time.sleep(2)

print("Sistema iniciado com simpleaudio. Sons agora devem ser simultâneos!\n")

while True:
    if porta.in_waiting > 0:
        line = porta.readline().decode().strip()
        if line in loaded_sounds:
            print(f"Toque detectado: {line}")
            loaded_sounds[line].play()  # Toca simultaneamente
