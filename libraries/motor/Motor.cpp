#include "Motor.h"

Controller::Controller(int pwm_pin, int motor_dir):
    pwm_pin_(pwm_pin),
    motor_dir_(motor_dir)
{
    pinMode(pwm_pin_, OUTPUT);
    pinMode(motor_dir_, OUTPUT);

    //ensure that the motor is in neutral state during bootup
    analogWrite(pwm_pin_, abs(0));
}

void Controller::spin(int pwm)
{
    if(pwm > 0){
	digitalWrite(motor_dir_, LOW);
    }

    else if(pwm < 0){
	digitalWrite(motor_dir_, HIGH);
    }

    analogWrite(pwm_pin_, abs(pwm));
}
