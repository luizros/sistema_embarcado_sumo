#include "robo.h"
#include <Arduino.h>

Robo::Robo(Motor* _m1, Motor* _m2):m1(_m1), m2(_m2){
};

void Robo::Stop(){
    m1->setSpeed(0);
    m2->setSpeed(0);
}

void Robo::mover(int velocidade1, int velocidade2){
    m1->setSpeed(velocidade1);
    m2->setSpeed(velocidade2);
}

