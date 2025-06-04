# Projeto de Bateria Eletrônica com Arduino

*(Bateria Eletrônica de Baixo Custo)*

---

## Integrantes do Grupo

- Felipe Mascarenhas da Silva Oliveira

- Luan Horta Dias
- lisses Lopes da Silva

---



## Descrição do Projeto e Funcionalidades

O objetivo do projeto é desenvolver uma bateria eletrônica utilizando Arduino, com foco em baixo custo e facilidade de reprodução. As funcionalidades principais incluem:

- **Detecção de batidas** via sensores piezoelétricos.
- **Reprodução de sons** em formato WAV a partir de um cartão SD.
- **Controle de volume** ajustável via código.
- **Simulação de chimbal** com botão para alternar entre aberto/fechado.
- **Saída de áudio** via alto-falante ou conexão a amplificadores.

---

## Componentes Necessários

| Item                        | Quantidade | Descrição                         |
| --------------------------- | ---------- | ----------------------------------- |
| Placa Arduino Mega 2560     | 1          | Ideal para mais portas analógicas. |
| Sensores piezoelétricos    | 12         | Para detectar impactos.             |
| Resistores 10MΩ            | 12         | Para descarregar os piezos.         |
| Cartão SD + módulo leitor | 1 cada     | Armazena arquivos WAV de sons.      |
| Alto-falante 3W             | 1          | Saída de áudio simples.           |
| Protoboard                  | 1          | Montagem inicial do circuito.       |
| Fios jumpers                | 30         | Conexões entre componentes.        |
| Botão push-button          | 1          | Simula o pedal do chimbal.          |
| Fonte 9V                    | 1          | Alimentação do Arduino.           |

---

## Custo Estimado

*Observação: preços estimados com base em sites como Mercado Livre e AliExpress, podendo variar por região e período.*

| Componente               | Custo (R$)       |
| ------------------------ | ---------------- |
| Arduino Mega 2560        | 80,00            |
| Sensores piezoelétricos | 18,00            |
| Resistores 10MΩ         | 5,00             |
| Cartão SD + módulo     | 25,00            |
| Alto-falante             | 30,00            |
| Fios                     | 10,00            |
| **Total (R$)**     | **168,00** |

---

## Cronograma (8 Semanas)

| Semana | Atividade                                            |
| ------ | ---------------------------------------------------- |
| 1-2    | Pesquisa, aquisição de materiais e planejamento.   |
| 3-5    | Soldagem dos sensores e montagem do circuito.        |
| 6-7    | Programação (leitura de sensores, áudio, testes). |
| 8      | Ajustes finais, calibração e documentação.       |

---

## Observações Técnicas

1. **Placa Arduino**:  Planeja-se utilizar o Arduino Mega pois é indicado para projetos com mais de 8 pads (16 portas analógicas).
2. **Formato de áudio**: Para a conversão de sons para WAV (8-bit, 16kHz), planeja-se utilizar o Audacity.

Baseado no [projeto de Sergio Fernando Nunes Junior (UNESP)](https://repositorio.unesp.br/entities/publication/411b9c77-d216-49da-8e44-a5915cff36f6) e tutorial do [NerdWeek](https://nerdweek.com.br/faca-voce-mesmo-sua-bateria-eletronica-pte-1/).

---



# Referências

1. [https://arduinodrum.wordpress.com/](https://arduinodrum.wordpress.com/)
2. [https://repositorio.unesp.br/entities/publication/411b9c77-d216-49da-8e44-a5915cff36f6](https://repositorio.unesp.br/entities/publication/411b9c77-d216-49da-8e44-a5915cff36f6)
3. [https://nerdweek.com.br/faca-voce-mesmo-sua-bateria-eletronica-pte-1/](https://nerdweek.com.br/faca-voce-mesmo-sua-bateria-eletronica-pte-1/)
