#ifndef MOTOR_H
#define MOTOR_H

#include <Servo.h> 
#include <Arduino.h>

class Controller
{
    public:
        Controller(int pwm_pin, int motor_dir);
        void spin(int pwm);

    private:
        int pwm_pin_;
        int motor_dir_;
};

#endif
