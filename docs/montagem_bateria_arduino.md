
# 🥁 Montagem da Bateria Eletrônica com Arduino Mega

## 🎯 Objetivo
Montar um circuito com 5 piezos conectados ao Arduino Mega com WiFi, enviando os dados via USB ao computador, **sem necessidade de fonte externa**.

---

## 🧰 Materiais necessários

| Componente                  | Quantidade |
|-----------------------------|------------|
| Arduino Mega 2560 (WiFi)    | 1          |
| Piezos (sensores de toque)  | 5          |
| Resistores de 1 MΩ (pull-down) | 5       |
| Protoboard                  | 1          |
| Jumpers (fios macho-macho)  | ~20        |
| Cabo USB para Arduino       | 1          |
| (Opcional) Capacitores de 0.1 µF | 5     |

---

## ⚠️ Por que usar resistor de 1 MΩ?

- O piezo funciona como um **gerador de sinal analógico momentâneo**.
- Quando ele está parado, sua saída fica **flutuando**, o que pode causar **leituras falsas**.
- O resistor de 1 MΩ serve como **pull-down**, garantindo que o sinal vá a 0 quando o piezo não estiver sendo pressionado.

---

## 🔌 Ligação padrão de cada piezo

| Piezo    | Pino Analógico |
|----------|----------------|
| Prato    | A0             |
| Chimbal  | A1             |
| Bumbo    | A2             |
| Caixa    | A3             |
| Tom      | A4             |

---

## 🔧 Passo a passo da montagem

### 1. Prepare a protoboard
- Coloque os 5 piezos em uma linha da protoboard.
- Para cada piezo, conecte:
  - Um fio ao **GND** (linha azul da protoboard).
  - Um fio ao **sinal analógico** (A0 a A4).

### 2. Instale os resistores
- Conecte um resistor de **1 MΩ** entre o fio de sinal do piezo e o GND (na protoboard).

### 3. (Opcional) Capacitor
- Conecte um **capacitor de 0.1 µF** entre o sinal e o GND, para filtrar ruídos.

### 4. Ligue ao Arduino Mega
- Use jumpers para conectar cada sinal de piezo às portas A0–A4 do Arduino.
- Conecte o GND da protoboard ao GND do Arduino.

### 5. Conecte ao computador via USB
- O **cabo USB fornece energia suficiente** para o projeto.
- **Não é necessário usar fonte externa.**

---

## 🔌 Esquema de ligação de um piezo

```
Piezo
  |------> Sinal -------> A0 (Arduino)
  |
  +------> GND ---------> GND (Arduino)

Entre Sinal e GND:
  - resistor 1 MΩ (pull-down)
  - (opcional) capacitor de 0.1 µF
```

---

## 📷 Visão geral

```
           +-------------------------+
           |       Arduino Mega      |
           |                         |
  A0 <------ Piezo Prato (via R 1MΩ) |
  A1 <------ Piezo Chimbal           |
  A2 <------ Piezo Bumbo             |
  A3 <------ Piezo Caixa             |
  A4 <------ Piezo Tom               |
           |                         |
           | GND ------------------> protoboard GND (linha azul)
           +-------------------------+
```

---

## ✅ Resumo final

| Item                         | Detalhe                                          |
|------------------------------|--------------------------------------------------|
| Alimentação da placa         | Via USB – suficiente                             |
| Resistores                   | 1 MΩ, pull-down, um por piezo                    |
| Pinos analógicos usados      | A0 a A4                                          |
| GND                          | Compartilhado entre todos os piezos             |
| Extras opcionais             | Capacitores de 0.1 µF entre sinal e GND         |
