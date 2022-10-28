#ifndef OFFNARA_BASE_CONFIG_H
#define OFFNARA_BASE_CONFIG_H

//uncomment the IMU you're using
#define USE_MPU9250_IMU

#define DEBUG 1

#define K_P 0.6 // P constant
#define K_I 0.5 // I constant
#define K_D 0.3 // D constant

//define your robot' specs here
#define MAX_RPM 300               // motor's maximum RPM
#define COUNTS_PER_REV 850       // wheel encoder's no of ticks per rev
#define WHEEL_DIAMETER 0.055      // wheel's diameter in meters
#define ROBOT_DIAMETER 0.14	  // robot diameter in meters
#define PWM_BITS 8                // PWM Resolution of the microcontroller

//=================BIGGER ROBOT SPEC (BTS7960)=============================
// #define K_P 0.05  // P constant
// #define K_I 0.9   // I constant
// #define K_D 0.1   // D constant

// define your robot' specs here
// #define MAX_RPM 45               // motor's maximum RPM
// #define COUNTS_PER_REV 4000      // wheel encoder's no of ticks per rev
// #define WHEEL_DIAMETER 0.15      // wheel's diameter in meters
// #define PWM_BITS 8               // PWM Resolution of the microcontroller
// #define LR_WHEELS_DISTANCE 0.32  // distance between left and right wheels
// #define FR_WHEELS_DISTANCE 0.38  // distance between front and back wheels. Ignore this if you're on 2WD/ACKERMANN
//================= END OF BIGGER ROBOT SPEC =============================

/*
ROBOT ORIENTATION
         FRONT
    MOTOR1  MOTOR2  (OMNI)
    	MOTOR3
         BACK
*/

/// ENCODER PINS
#define MOTOR1_ENCODER_A 2
#define MOTOR1_ENCODER_B 4 

#define MOTOR2_ENCODER_A 3
#define MOTOR2_ENCODER_B 5 

#define MOTOR3_ENCODER_A 18
#define MOTOR3_ENCODER_B 6 

// Nuri driver
#define MOTOR_DRIVER NURI

#define MOTOR1_PWM 8
#define MOTOR1_DIR 31

#define MOTOR2_PWM 9
#define MOTOR2_DIR 32

#define MOTOR3_PWM 10
#define MOTOR3_DIR 33

#define MOTOR1_BREAK 24
#define MOTOR2_BREAK 26
#define MOTOR3_BREAK 28

#define PWM_MAX pow(2, PWM_BITS) - 1
#define PWM_MIN -PWM_MAX

#define STEERING_PIN 7

#endif
