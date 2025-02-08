#include "motor.h"
#include "robo.h"
#include <Ps3Controller.h>

struct MotorConfig {
    int pinIN1;
    int pinIN2;
    int canal1;
    int canal2;
    int frequencia;
    int resolucao;
};

// Os valores do pinos vai de acordo com o esquemático de vcs e n deve ser essa abaixo
MotorConfig motorDireitoConfig = {
    .pinIN1 = 27,
    .pinIN2 = 2,
    .canal1 = 0,
    .canal2 = 1,
    .frequencia = 5000,
    .resolucao = 8
};

// Os valores do pinos vai de acordo com o esquemático de vcs e n deve ser essa abaixo
MotorConfig motorEsquerdoConfig = {
    .pinIN1 = 25,
    .pinIN2 = 33,
    .canal1 = 3,
    .canal2 = 4,
    .frequencia = 5000,
    .resolucao = 8
};

Motor motorDireito(motorDireitoConfig.pinIN1, 
                   motorDireitoConfig.pinIN2, 
                   motorDireitoConfig.canal1,
                   motorDireitoConfig.canal2,
                   motorDireitoConfig.frequencia,
                   motorDireitoConfig.resolucao);

Motor motorEsquerdo(motorEsquerdoConfig.pinIN1,
                    motorEsquerdoConfig.pinIN2,
                    motorEsquerdoConfig.canal1,
                    motorEsquerdoConfig.canal2,
                    motorEsquerdoConfig.frequencia,
                    motorEsquerdoConfig.resolucao);

Robo Atlas(&motorDireito, &motorEsquerdo);

void notify(){
  // Implementar a lógica de controle
}

void setup() {
  Serial.begin(9600);
  // Ps3.attach(notify);
  // Ps3.attachOnConnect(onConnect);
  // Ps3.begin("01:02:03:04:05:06");
  Serial.println("Ready.");
}

void loop() {
  // Aqui n precisa fazer nada
}