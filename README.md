# Ultrasonic Insect Repeller

> Protótipo experimental de um emissor de ultrassom baseado em ESP32 para estudo da geração de sinais de alta frequência.

---

## 📖 Sobre o projeto

O **Ultrasonic Insect Repeller**  é um projeto proposto e gerenciado por um professor orientador de física do com o objetivo de construir um dispositivo capaz de emitir sinais ultrassônicos utilizando um microcontrolador ESP32 e um transdutor piezoelétrico.

O projeto integra conceitos de eletrônica embarcada, programação em microcontroladores e controle de sinais digitais, resultando em um dispositivo portátil alimentado por bateria recarregável.

> **Observação:**  Este projeto tem caráter experimental. Seu principal objetivo é estudar a geração de sinais ultrassônicos utilizando um ESP32. O projeto não busca comprovar a eficácia da repelência de insetos por ultrassom.

---

## 🎯 Objetivos

- Desenvolver um dispositivo portátil baseado em ESP32.
- Gerar sinais ultrassônicos entre **20 kHz e 40 kHz**.
- Variar automaticamente a frequência emitida em intervalos definidos.
- Integrar hardware e software em um único sistema.

---

## ⚙️ Funcionamento

Após ser ligado, o ESP32 configura o periférico responsável pela geração do sinal PWM.

Durante a execução, o firmware seleciona frequências na faixa de **20 kHz a 40 kHz**, emitindo o sinal através do transdutor piezoelétrico por um determinado intervalo de tempo. Ao final desse período, uma nova frequência é selecionada, repetindo continuamente esse processo.

---

## 🛠 Hardware

Os principais componentes utilizados são:

- ESP32 - Controle do sistema
- Piezoelétrico - Emissão das ondas ultrassônicas 
- Módulo TP4056 - Carregamento da bateria
- Chave liga/desliga - Controle de energia

---

## 💻 Software

O firmware é responsável por:

- Inicialização do ESP32;
- Configuração do PWM;
- Geração das frequências ultrassônicas;
- Controle do tempo de emissão;
- Repetição contínua do ciclo de funcionamento.

---

## 📂 Estrutura do projeto

```
Ultrasonic-Insect-Repeller/

├── firmware/
├── hardware/
├── docs/
├── imagens/
├── README.md
└── LICENSE
```

---

## 📷 Imagens

### Protótipo

*(Adicionar fotografia do dispositivo.)*

### Circuito

*(Adicionar fotografia da montagem eletrônica.)*

---

## 👥 Integrantes

- João Pedro
- Guilherme Pedro
- Nícollas Marques

---

## 📄 Licença

Este projeto foi desenvolvido para fins acadêmicos.
