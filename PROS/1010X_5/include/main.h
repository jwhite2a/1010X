
#ifndef MAIN_H_
#define MAIN_H_
#include <API.h>

#ifdef __cplusplus
extern "C" {
#endif

#include "lcdfunctions.h"
//for Test Varibles

//drive motors ports
  #define DriveBL 1
    #define DriveBL_Dir 1
  #define DriveFL 2
    #define DriveFL_Dir 1
  #define DriveFR 9
    #define DriveFR_Dir -1
  #define DriveBR 10
    #define DriveBR_Dir 1

//Intake motors ports
  #define ClawL 3
    #define ClawL_Dir -1
  #define ClawR 8
    #define ClawR_Dir 1

//Arm motors ports
  #define ArmLT 5
    #define ArmLT_Dir -1
  #define ArmLB 4
    #define ArmLB_Dir -1
  #define ArmRT 6
    #define ArmRT_Dir 1
  #define ArmRB 7
    #define ArmRB_Dir 1

//analog sensors ports
  #define accel_x 1
  #define accel_y 2
  #define gyroport 3

//  #define clawpot_L 4
//  #define clawpot_R 5


//digital sensors ports
  #define encoder_R_TOP 1
  #define encoder_R_BOT 2

  #define encoder_L_TOP 3
  #define encoder_L_BOT 4

  #define encoder_ARM_TOP 7
  #define encoder_ARM_BOT 8

  #define encoder_CLAW_TOP 11
  #define encoder_CLAW_BOT 12

//LED Ports
  #define LED_1 5
  #define LED_2 6


// Sensor Hanndles
  Encoder encoder_L;
  Encoder encoder_R;
  Encoder encoder_ARM;
  Encoder encoder_CLAW;
  Gyro gyro;


//globals

int myauto;

//test varibles
int test_clawup;
int test_clawdown;

void autonomous();

void initializeIO();

void initialize();

void operatorControl();



#ifdef __cplusplus
}
#endif
#endif
