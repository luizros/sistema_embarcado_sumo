#ifndef ROBO_H
#define ROBO_H

#include "motor.h"

class Robo{
    private:

        Motor* m1;
        Motor* m2;
    public:
        Robo(Motor* _m1, Motor* _m2);
        void Stop();
        void mover(int velocidade1, int velocida2);
};

#endif