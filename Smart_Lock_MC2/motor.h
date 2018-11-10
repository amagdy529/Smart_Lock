/*
 * motor.h
 *
 *  Created on: Sep 22, 2018
 *      Author: MagdyA4
 */

#ifndef MOTOR_H_
#define MOTOR_H_


#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

/****** PreProcessor Macros ******/
#define Motor_PORT PORTB
#define Motor_PORT_DDR DDRB


/****** Function ProtoTypes ******/
void Motor_Init(uint8 low_bit, uint8 high_Bit);
void Motor_PWM_Timer0_Init(unsigned char set_duty_cycle);
void Motor_Stop(uint8 low_bit, uint8 high_Bit);
void Motor_Rotate_Right(uint8 low_bit, uint8 high_Bit); //rotate clock wise
void Motor_Rotate_Left(uint8 low_bit, uint8 high_Bit); // rotate anti clock wise



#endif /* MOTOR_H_ */
