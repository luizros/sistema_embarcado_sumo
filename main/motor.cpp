#include "motor.h"
#include <Arduino.h>

Motor::Motor(int _IN1, int _IN2, int _canal1,  int _canal2, int _frequencia, int _resolucao):
    pinIN1(_IN1), pinIN2(_IN2), canal1(_canal1),canal2(_canal2), frequencia(_frequencia), resolucao(_resolucao){
        config();
    }

void Motor::config(){
    ledcAttachChannel(pinIN1, frequencia, resolucao, canal1);
    ledcAttachChannel(pinIN2, frequencia, resolucao, canal2);
}

void Motor::setSpeed(int velocidade){
    if (velocidade > 0) {
        ledcWrite(pinIN1, 0);
        ledcWrite(pinIN2, velocidade);
    }
    else if(velocidade < 0){
        ledcWrite(pinIN1, abs(velocidade));
        ledcWrite(pinIN2, 0);
    }else{
        ledcWrite(pinIN1, 0);
        ledcWrite(pinIN2, 0);
    }
}