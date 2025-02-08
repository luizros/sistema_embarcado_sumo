#ifndef MOTOR_H
#define MOTOR_H

class Motor{
    private:
        int pinIN1;
        int pinIN2;
        int canal1;
        int canal2;
        int frequencia;
        int resolucao;
        int velocidade_atual;
        void config();
        
    public:
        Motor(int _IN1, int _IN2, int _canal1,int _canal2, int _frequencia, int _resolucao);

        void setSpeed(int velocidade);
};



#endif